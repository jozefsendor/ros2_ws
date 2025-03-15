# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_nav_interfaces:srv/GetPointmapLayer.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPointmapLayer_Request(type):
    """Metaclass of message 'GetPointmapLayer_Request'."""

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
                'mrpt_nav_interfaces.srv.GetPointmapLayer_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pointmap_layer__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pointmap_layer__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pointmap_layer__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pointmap_layer__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pointmap_layer__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPointmapLayer_Request(metaclass=Metaclass_GetPointmapLayer_Request):
    """Message class 'GetPointmapLayer_Request'."""

    __slots__ = [
        '_layer_name',
    ]

    _fields_and_field_types = {
        'layer_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.layer_name = kwargs.get('layer_name', str())

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
        if self.layer_name != other.layer_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def layer_name(self):
        """Message field 'layer_name'."""
        return self._layer_name

    @layer_name.setter
    def layer_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'layer_name' field must be of type 'str'"
        self._layer_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPointmapLayer_Response(type):
    """Metaclass of message 'GetPointmapLayer_Response'."""

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
                'mrpt_nav_interfaces.srv.GetPointmapLayer_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_pointmap_layer__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_pointmap_layer__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_pointmap_layer__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_pointmap_layer__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_pointmap_layer__response

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPointmapLayer_Response(metaclass=Metaclass_GetPointmapLayer_Response):
    """Message class 'GetPointmapLayer_Response'."""

    __slots__ = [
        '_valid',
        '_points',
    ]

    _fields_and_field_types = {
        'valid': 'boolean',
        'points': 'sensor_msgs/PointCloud2',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.valid = kwargs.get('valid', bool())
        from sensor_msgs.msg import PointCloud2
        self.points = kwargs.get('points', PointCloud2())

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
        if self.valid != other.valid:
            return False
        if self.points != other.points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'points' field must be a sub message of type 'PointCloud2'"
        self._points = value


class Metaclass_GetPointmapLayer(type):
    """Metaclass of service 'GetPointmapLayer'."""

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
                'mrpt_nav_interfaces.srv.GetPointmapLayer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_pointmap_layer

            from mrpt_nav_interfaces.srv import _get_pointmap_layer
            if _get_pointmap_layer.Metaclass_GetPointmapLayer_Request._TYPE_SUPPORT is None:
                _get_pointmap_layer.Metaclass_GetPointmapLayer_Request.__import_type_support__()
            if _get_pointmap_layer.Metaclass_GetPointmapLayer_Response._TYPE_SUPPORT is None:
                _get_pointmap_layer.Metaclass_GetPointmapLayer_Response.__import_type_support__()


class GetPointmapLayer(metaclass=Metaclass_GetPointmapLayer):
    from mrpt_nav_interfaces.srv._get_pointmap_layer import GetPointmapLayer_Request as Request
    from mrpt_nav_interfaces.srv._get_pointmap_layer import GetPointmapLayer_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
