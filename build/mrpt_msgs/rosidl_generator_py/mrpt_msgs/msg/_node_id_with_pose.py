# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrpt_msgs:msg/NodeIDWithPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NodeIDWithPose(type):
    """Metaclass of message 'NodeIDWithPose'."""

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
                'mrpt_msgs.msg.NodeIDWithPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__node_id_with_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__node_id_with_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__node_id_with_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__node_id_with_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__node_id_with_pose

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NodeIDWithPose(metaclass=Metaclass_NodeIDWithPose):
    """Message class 'NodeIDWithPose'."""

    __slots__ = [
        '_node_id',
        '_pose',
        '_str_id',
        '_node_id_loc',
    ]

    _fields_and_field_types = {
        'node_id': 'uint64',
        'pose': 'geometry_msgs/Pose',
        'str_id': 'std_msgs/String',
        'node_id_loc': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.node_id = kwargs.get('node_id', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from std_msgs.msg import String
        self.str_id = kwargs.get('str_id', String())
        self.node_id_loc = kwargs.get('node_id_loc', int())

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
        if self.node_id != other.node_id:
            return False
        if self.pose != other.pose:
            return False
        if self.str_id != other.str_id:
            return False
        if self.node_id_loc != other.node_id_loc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def node_id(self):
        """Message field 'node_id'."""
        return self._node_id

    @node_id.setter
    def node_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'node_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._node_id = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def str_id(self):
        """Message field 'str_id'."""
        return self._str_id

    @str_id.setter
    def str_id(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'str_id' field must be a sub message of type 'String'"
        self._str_id = value

    @builtins.property
    def node_id_loc(self):
        """Message field 'node_id_loc'."""
        return self._node_id_loc

    @node_id_loc.setter
    def node_id_loc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'node_id_loc' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'node_id_loc' field must be an unsigned integer in [0, 18446744073709551615]"
        self._node_id_loc = value
