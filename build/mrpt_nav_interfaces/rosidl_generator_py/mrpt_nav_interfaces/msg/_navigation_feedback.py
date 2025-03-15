# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_nav_interfaces:msg/NavigationFeedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigationFeedback(type):
    """Metaclass of message 'NavigationFeedback'."""

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
            module = import_type_support('mrpt_nav_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mrpt_nav_interfaces.msg.NavigationFeedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigation_feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigation_feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigation_feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigation_feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigation_feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigationFeedback(metaclass=Metaclass_NavigationFeedback):
    """Message class 'NavigationFeedback'."""

    __slots__ = [
        '_total_waypoints',
        '_reached_waypoints',
    ]

    _fields_and_field_types = {
        'total_waypoints': 'int16',
        'reached_waypoints': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.total_waypoints = kwargs.get('total_waypoints', int())
        self.reached_waypoints = kwargs.get('reached_waypoints', int())

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
        if self.total_waypoints != other.total_waypoints:
            return False
        if self.reached_waypoints != other.reached_waypoints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def total_waypoints(self):
        """Message field 'total_waypoints'."""
        return self._total_waypoints

    @total_waypoints.setter
    def total_waypoints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_waypoints' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'total_waypoints' field must be an integer in [-32768, 32767]"
        self._total_waypoints = value

    @builtins.property
    def reached_waypoints(self):
        """Message field 'reached_waypoints'."""
        return self._reached_waypoints

    @reached_waypoints.setter
    def reached_waypoints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reached_waypoints' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'reached_waypoints' field must be an integer in [-32768, 32767]"
        self._reached_waypoints = value
