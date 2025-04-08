import math
from geometry_msgs.msg import Twist

PI = math.pi  


class SquarePath:
    def __init__(self):
        self.finished = False

    def __call__(self, t):
        msg = Twist()

        if self.finished:
            return 0.0, 0.0, False

        if t >= 12.0:
            self.finished = True
            return 0.0, 0.0, False

        t = t % 12.0

        if 0.0 < t <= 1.0 or 3.0 < t <= 4.0 or 6.0 < t <= 7.0 or 9.0 < t <= 10.0:
            # Forward movement on each side
            msg.linear.x = 1.0
            msg.angular.z = 0.0
        elif 1.0 < t <= 3.0 or 4.0 < t <= 6.0 or 7.0 < t <= 9.0 or 10.0 < t < 12.0:
            # Turning 90 degrees
            msg.linear.x = 0.0
            msg.angular.z = math.pi / 4
        else:
            # In between transitions
            msg.linear.x = 0.0
            msg.angular.z = 0.0

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

        msg.linear.x = 0.5
        if cycle == 0:
            msg.angular.z = amplitude * math.sin((t - self.start_time) * 2 * math.pi / period)
        elif cycle == 1:
            msg.angular.z = (-1) * amplitude * math.sin((t - self.start_time) * 2 * math.pi / period)
        else:
            return 0.0, 0.0, False 
        return msg.linear.x, msg.angular.z, True


# class SpiralPath:
#     def __init__(self):
#         self.start_time = 0

#     def __call__(self, t):
#         """
#         Function to generate a spiral trajectory.
#         Increases the angular velocity over time to create a shrinking spiral.
#         """
#         msg = Twist()

#         if self.start_time == 0:
#             self.start_time = t
#         if (t - self.start_time >= 15):
#             return 0.0, 0.0, False
         
#         msg.linear.x = 0.2
#         msg.angular.z = 0.1 * (t - self.start_time + 1)  
#         return msg.linear.x, msg.angular.z, True


PATHS = {
    "square": SquarePath(),
    "eight": EightPath(),
    # "spiral": SpiralPath(),
}
