# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_nav_interfaces:msg/NavigationFinalStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigationFinalStatus(type):
    """Metaclass of message 'NavigationFinalStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_SUCCESS': 0,
        'STATUS_ERROR': 1,
        'STATUS_CANCELLED': 2,
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
                'mrpt_nav_interfaces.msg.NavigationFinalStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigation_final_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigation_final_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigation_final_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigation_final_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigation_final_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_SUCCESS': cls.__constants['STATUS_SUCCESS'],
            'STATUS_ERROR': cls.__constants['STATUS_ERROR'],
            'STATUS_CANCELLED': cls.__constants['STATUS_CANCELLED'],
        }

    @property
    def STATUS_SUCCESS(self):
        """Message constant 'STATUS_SUCCESS'."""
        return Metaclass_NavigationFinalStatus.__constants['STATUS_SUCCESS']

    @property
    def STATUS_ERROR(self):
        """Message constant 'STATUS_ERROR'."""
        return Metaclass_NavigationFinalStatus.__constants['STATUS_ERROR']

    @property
    def STATUS_CANCELLED(self):
        """Message constant 'STATUS_CANCELLED'."""
        return Metaclass_NavigationFinalStatus.__constants['STATUS_CANCELLED']


class NavigationFinalStatus(metaclass=Metaclass_NavigationFinalStatus):
    """
    Message class 'NavigationFinalStatus'.

    Constants:
      STATUS_SUCCESS
      STATUS_ERROR
      STATUS_CANCELLED
    """

    __slots__ = [
        '_navigation_status',
    ]

    _fields_and_field_types = {
        'navigation_status': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.navigation_status = kwargs.get('navigation_status', int())

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
        if self.navigation_status != other.navigation_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def navigation_status(self):
        """Message field 'navigation_status'."""
        return self._navigation_status

    @navigation_status.setter
    def navigation_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'navigation_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'navigation_status' field must be an integer in [-128, 127]"
        self._navigation_status = value
