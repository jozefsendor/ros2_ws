# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_msgs:msg/ObservationRangeBeacon.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObservationRangeBeacon(type):
    """Metaclass of message 'ObservationRangeBeacon'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mrpt_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mrpt_msgs.msg.ObservationRangeBeacon')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__observation_range_beacon
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__observation_range_beacon
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__observation_range_beacon
            cls._TYPE_SUPPORT = module.type_support_msg__msg__observation_range_beacon
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__observation_range_beacon

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from mrpt_msgs.msg import SingleRangeBeaconObservation
            if SingleRangeBeaconObservation.__class__._TYPE_SUPPORT is None:
                SingleRangeBeaconObservation.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObservationRangeBeacon(metaclass=Metaclass_ObservationRangeBeacon):
    """Message class 'ObservationRangeBeacon'."""

    __slots__ = [
        '_header',
        '_sensor_pose_on_robot',
        '_min_sensor_distance',
        '_max_sensor_distance',
        '_sensor_std_range',
        '_sensed_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor_pose_on_robot': 'geometry_msgs/Pose',
        'min_sensor_distance': 'double',
        'max_sensor_distance': 'double',
        'sensor_std_range': 'double',
        'sensed_data': 'sequence<mrpt_msgs/SingleRangeBeaconObservation>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mrpt_msgs', 'msg'], 'SingleRangeBeaconObservation')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.sensor_pose_on_robot = kwargs.get('sensor_pose_on_robot', Pose())
        self.min_sensor_distance = kwargs.get('min_sensor_distance', float())
        self.max_sensor_distance = kwargs.get('max_sensor_distance', float())
        self.sensor_std_range = kwargs.get('sensor_std_range', float())
        self.sensed_data = kwargs.get('sensed_data', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.sensor_pose_on_robot != other.sensor_pose_on_robot:
            return False
        if self.min_sensor_distance != other.min_sensor_distance:
            return False
        if self.max_sensor_distance != other.max_sensor_distance:
            return False
        if self.sensor_std_range != other.sensor_std_range:
            return False
        if self.sensed_data != other.sensed_data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def sensor_pose_on_robot(self):
        """Message field 'sensor_pose_on_robot'."""
        return self._sensor_pose_on_robot

    @sensor_pose_on_robot.setter
    def sensor_pose_on_robot(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'sensor_pose_on_robot' field must be a sub message of type 'Pose'"
        self._sensor_pose_on_robot = value

    @builtins.property
    def min_sensor_distance(self):
        """Message field 'min_sensor_distance'."""
        return self._min_sensor_distance

    @min_sensor_distance.setter
    def min_sensor_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_sensor_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_sensor_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_sensor_distance = value

    @builtins.property
    def max_sensor_distance(self):
        """Message field 'max_sensor_distance'."""
        return self._max_sensor_distance

    @max_sensor_distance.setter
    def max_sensor_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_sensor_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_sensor_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_sensor_distance = value

    @builtins.property
    def sensor_std_range(self):
        """Message field 'sensor_std_range'."""
        return self._sensor_std_range

    @sensor_std_range.setter
    def sensor_std_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sensor_std_range' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sensor_std_range' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sensor_std_range = value

    @builtins.property
    def sensed_data(self):
        """Message field 'sensed_data'."""
        return self._sensed_data

    @sensed_data.setter
    def sensed_data(self, value):
        if __debug__:
            from mrpt_msgs.msg import SingleRangeBeaconObservation
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, SingleRangeBeaconObservation) for v in value) and
                 True), \
                "The 'sensed_data' field must be a set or sequence and each value of type 'SingleRangeBeaconObservation'"
        self._sensed_data = value
