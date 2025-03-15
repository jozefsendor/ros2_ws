import math
from geometry_msgs.msg import Twist

PI = math.pi  


class SquarePath:
    def __init__(self):

        self.step = 0
        self.start_time = 0
        self.side_number = 0

    def __call__(self, t):
        """
        Function to generate a square trajectory of 1x1 meters.
        Calculates linear and angular velocities for moving straight
        and turning 90 degrees at the corners.
        """
        msg = Twist()

        if self.side_number >= 4:
            return 0.0, 0.0, False

        if self.step == 0: 
            if self.start_time == 0:  
                self.start_time = t
            msg.linear.x = 0.2
            msg.angular.z = 0.0

            if (t - self.start_time) > 5.0:  
                self.step = 1  
                self.start_time = t  

        elif self.step == 1:  
            if self.start_time == 0:  
                self.start_time = t
            msg.linear.x = 0.0
            msg.angular.z = PI / 4

            if (t - self.start_time) > 2.0:  
                self.step = 0  
                self.side_number += 1  
                self.start_time = t 

        return msg.linear.x, msg.angular.z, True


class EightPath:
    def __init__(self):
        self.start_time = 0

    def __call__(self, t):
        """
        Function to generate a figure-eight trajectory.
        Uses sinusoidal angular velocity to create the shape.
        """
        msg = Twist()

        if self.start_time == 0:
            self.start_time = t
        
        period = 10
        amplitude = 1
        cycle = int(t // period)

        msg.linear.x = 0.2
        if cycle == 0:
            msg.angular.z = amplitude * math.sin((t - self.start_time) * 2 * math.pi / period)
        elif cycle == 1:
            msg.angular.z = (-1) * amplitude * math.sin((t - self.start_time) * 2 * math.pi / period)
        else:
            return 0.0, 0.0, False 
        return msg.linear.x, msg.angular.z, True


class SpiralPath:
    def __init__(self):
        self.start_time = 0

    def __call__(self, t):
        """
        Function to generate a spiral trajectory.
        Increases the angular velocity over time to create a shrinking spiral.
        """
        msg = Twist()

        if self.start_time == 0:
            self.start_time = t
        if (t - self.start_time >= 15):
            return 0.0, 0.0, False
         
        msg.linear.x = 0.2
        msg.angular.z = 0.1 * (t - self.start_time + 1)  
        return msg.linear.x, msg.angular.z, True


PATHS = {
    "square": SquarePath(),
    "eight": EightPath(),
    "spiral": SpiralPath(),
}
