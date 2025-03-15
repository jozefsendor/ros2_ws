# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_nav_interfaces:srv/MakePlanTo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MakePlanTo_Request(type):
    """Metaclass of message 'MakePlanTo_Request'."""

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
                'mrpt_nav_interfaces.srv.MakePlanTo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__make_plan_to__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__make_plan_to__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__make_plan_to__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__make_plan_to__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__make_plan_to__request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MakePlanTo_Request(metaclass=Metaclass_MakePlanTo_Request):
    """Message class 'MakePlanTo_Request'."""

    __slots__ = [
        '_target',
    ]

    _fields_and_field_types = {
        'target': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.target = kwargs.get('target', PoseStamped())

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
        if self.target != other.target:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target' field must be a sub message of type 'PoseStamped'"
        self._target = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MakePlanTo_Response(type):
    """Metaclass of message 'MakePlanTo_Response'."""

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
                'mrpt_nav_interfaces.srv.MakePlanTo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__make_plan_to__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__make_plan_to__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__make_plan_to__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__make_plan_to__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__make_plan_to__response

            from mrpt_msgs.msg import WaypointSequence
            if WaypointSequence.__class__._TYPE_SUPPORT is None:
                WaypointSequence.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MakePlanTo_Response(metaclass=Metaclass_MakePlanTo_Response):
    """Message class 'MakePlanTo_Response'."""

    __slots__ = [
        '_valid_path_found',
        '_waypoints',
    ]

    _fields_and_field_types = {
        'valid_path_found': 'boolean',
        'waypoints': 'mrpt_msgs/WaypointSequence',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrpt_msgs', 'msg'], 'WaypointSequence'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.valid_path_found = kwargs.get('valid_path_found', bool())
        from mrpt_msgs.msg import WaypointSequence
        self.waypoints = kwargs.get('waypoints', WaypointSequence())

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
        if self.valid_path_found != other.valid_path_found:
            return False
        if self.waypoints != other.waypoints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def valid_path_found(self):
        """Message field 'valid_path_found'."""
        return self._valid_path_found

    @valid_path_found.setter
    def valid_path_found(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_path_found' field must be of type 'bool'"
        self._valid_path_found = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from mrpt_msgs.msg import WaypointSequence
            assert \
                isinstance(value, WaypointSequence), \
                "The 'waypoints' field must be a sub message of type 'WaypointSequence'"
        self._waypoints = value


class Metaclass_MakePlanTo(type):
    """Metaclass of service 'MakePlanTo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mrpt_nav_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mrpt_nav_interfaces.srv.MakePlanTo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__make_plan_to

            from mrpt_nav_interfaces.srv import _make_plan_to
            if _make_plan_to.Metaclass_MakePlanTo_Request._TYPE_SUPPORT is None:
                _make_plan_to.Metaclass_MakePlanTo_Request.__import_type_support__()
            if _make_plan_to.Metaclass_MakePlanTo_Response._TYPE_SUPPORT is None:
                _make_plan_to.Metaclass_MakePlanTo_Response.__import_type_support__()


class MakePlanTo(metaclass=Metaclass_MakePlanTo):
    from mrpt_nav_interfaces.srv._make_plan_to import MakePlanTo_Request as Request
    from mrpt_nav_interfaces.srv._make_plan_to import MakePlanTo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
