# generated from rosidl_generator_py/resource/_idl.py.em
# with input from skibot_interfaces:msg/Pose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pose(type):
    """Metaclass of message 'Pose'."""

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
            module = import_type_support('skibot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'skibot_interfaces.msg.Pose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pose(metaclass=Metaclass_Pose):
    """Message class 'Pose'."""

    __slots__ = [
        '_x',
        '_y',
        '_theta',
        '_x_velocity',
        '_y_velocity',
        '_theta_velocity',
    ]

    _fields_and_field_types = {
        'x': 'float',
        'y': 'float',
        'theta': 'float',
        'x_velocity': 'float',
        'y_velocity': 'float',
        'theta_velocity': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.theta = kwargs.get('theta', float())
        self.x_velocity = kwargs.get('x_velocity', float())
        self.y_velocity = kwargs.get('y_velocity', float())
        self.theta_velocity = kwargs.get('theta_velocity', float())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.theta != other.theta:
            return False
        if self.x_velocity != other.x_velocity:
            return False
        if self.y_velocity != other.y_velocity:
            return False
        if self.theta_velocity != other.theta_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta' field must be of type 'float'"
        self._theta = value

    @property
    def x_velocity(self):
        """Message field 'x_velocity'."""
        return self._x_velocity

    @x_velocity.setter
    def x_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_velocity' field must be of type 'float'"
        self._x_velocity = value

    @property
    def y_velocity(self):
        """Message field 'y_velocity'."""
        return self._y_velocity

    @y_velocity.setter
    def y_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_velocity' field must be of type 'float'"
        self._y_velocity = value

    @property
    def theta_velocity(self):
        """Message field 'theta_velocity'."""
        return self._theta_velocity

    @theta_velocity.setter
    def theta_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'theta_velocity' field must be of type 'float'"
        self._theta_velocity = value
