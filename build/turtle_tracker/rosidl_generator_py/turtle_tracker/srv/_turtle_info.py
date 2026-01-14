# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_tracker:srv/TurtleInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TurtleInfo_Request(type):
    """Metaclass of message 'TurtleInfo_Request'."""

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
            module = import_type_support('turtle_tracker')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_tracker.srv.TurtleInfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__turtle_info__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__turtle_info__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__turtle_info__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__turtle_info__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__turtle_info__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfo_Request(metaclass=Metaclass_TurtleInfo_Request):
    """Message class 'TurtleInfo_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_TurtleInfo_Response(type):
    """Metaclass of message 'TurtleInfo_Response'."""

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
            module = import_type_support('turtle_tracker')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_tracker.srv.TurtleInfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__turtle_info__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__turtle_info__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__turtle_info__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__turtle_info__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__turtle_info__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfo_Response(metaclass=Metaclass_TurtleInfo_Response):
    """Message class 'TurtleInfo_Response'."""

    __slots__ = [
        '_turtle1_x',
        '_turtle1_y',
        '_turtle1_theta',
        '_explorer_x',
        '_explorer_y',
        '_explorer_theta',
        '_turtle1_linear_vel',
        '_turtle1_angular_vel',
        '_explorer_linear_vel',
        '_explorer_angular_vel',
        '_distance',
        '_timestamp',
    ]

    _fields_and_field_types = {
        'turtle1_x': 'double',
        'turtle1_y': 'double',
        'turtle1_theta': 'double',
        'explorer_x': 'double',
        'explorer_y': 'double',
        'explorer_theta': 'double',
        'turtle1_linear_vel': 'double',
        'turtle1_angular_vel': 'double',
        'explorer_linear_vel': 'double',
        'explorer_angular_vel': 'double',
        'distance': 'double',
        'timestamp': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.turtle1_x = kwargs.get('turtle1_x', float())
        self.turtle1_y = kwargs.get('turtle1_y', float())
        self.turtle1_theta = kwargs.get('turtle1_theta', float())
        self.explorer_x = kwargs.get('explorer_x', float())
        self.explorer_y = kwargs.get('explorer_y', float())
        self.explorer_theta = kwargs.get('explorer_theta', float())
        self.turtle1_linear_vel = kwargs.get('turtle1_linear_vel', float())
        self.turtle1_angular_vel = kwargs.get('turtle1_angular_vel', float())
        self.explorer_linear_vel = kwargs.get('explorer_linear_vel', float())
        self.explorer_angular_vel = kwargs.get('explorer_angular_vel', float())
        self.distance = kwargs.get('distance', float())
        self.timestamp = kwargs.get('timestamp', str())

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
        if self.turtle1_x != other.turtle1_x:
            return False
        if self.turtle1_y != other.turtle1_y:
            return False
        if self.turtle1_theta != other.turtle1_theta:
            return False
        if self.explorer_x != other.explorer_x:
            return False
        if self.explorer_y != other.explorer_y:
            return False
        if self.explorer_theta != other.explorer_theta:
            return False
        if self.turtle1_linear_vel != other.turtle1_linear_vel:
            return False
        if self.turtle1_angular_vel != other.turtle1_angular_vel:
            return False
        if self.explorer_linear_vel != other.explorer_linear_vel:
            return False
        if self.explorer_angular_vel != other.explorer_angular_vel:
            return False
        if self.distance != other.distance:
            return False
        if self.timestamp != other.timestamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def turtle1_x(self):
        """Message field 'turtle1_x'."""
        return self._turtle1_x

    @turtle1_x.setter
    def turtle1_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turtle1_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turtle1_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turtle1_x = value

    @builtins.property
    def turtle1_y(self):
        """Message field 'turtle1_y'."""
        return self._turtle1_y

    @turtle1_y.setter
    def turtle1_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turtle1_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turtle1_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turtle1_y = value

    @builtins.property
    def turtle1_theta(self):
        """Message field 'turtle1_theta'."""
        return self._turtle1_theta

    @turtle1_theta.setter
    def turtle1_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turtle1_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turtle1_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turtle1_theta = value

    @builtins.property
    def explorer_x(self):
        """Message field 'explorer_x'."""
        return self._explorer_x

    @explorer_x.setter
    def explorer_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'explorer_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'explorer_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._explorer_x = value

    @builtins.property
    def explorer_y(self):
        """Message field 'explorer_y'."""
        return self._explorer_y

    @explorer_y.setter
    def explorer_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'explorer_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'explorer_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._explorer_y = value

    @builtins.property
    def explorer_theta(self):
        """Message field 'explorer_theta'."""
        return self._explorer_theta

    @explorer_theta.setter
    def explorer_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'explorer_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'explorer_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._explorer_theta = value

    @builtins.property
    def turtle1_linear_vel(self):
        """Message field 'turtle1_linear_vel'."""
        return self._turtle1_linear_vel

    @turtle1_linear_vel.setter
    def turtle1_linear_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turtle1_linear_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turtle1_linear_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turtle1_linear_vel = value

    @builtins.property
    def turtle1_angular_vel(self):
        """Message field 'turtle1_angular_vel'."""
        return self._turtle1_angular_vel

    @turtle1_angular_vel.setter
    def turtle1_angular_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turtle1_angular_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'turtle1_angular_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._turtle1_angular_vel = value

    @builtins.property
    def explorer_linear_vel(self):
        """Message field 'explorer_linear_vel'."""
        return self._explorer_linear_vel

    @explorer_linear_vel.setter
    def explorer_linear_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'explorer_linear_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'explorer_linear_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._explorer_linear_vel = value

    @builtins.property
    def explorer_angular_vel(self):
        """Message field 'explorer_angular_vel'."""
        return self._explorer_angular_vel

    @explorer_angular_vel.setter
    def explorer_angular_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'explorer_angular_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'explorer_angular_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._explorer_angular_vel = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._distance = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'timestamp' field must be of type 'str'"
        self._timestamp = value


class Metaclass_TurtleInfo(type):
    """Metaclass of service 'TurtleInfo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('turtle_tracker')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'turtle_tracker.srv.TurtleInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__turtle_info

            from turtle_tracker.srv import _turtle_info
            if _turtle_info.Metaclass_TurtleInfo_Request._TYPE_SUPPORT is None:
                _turtle_info.Metaclass_TurtleInfo_Request.__import_type_support__()
            if _turtle_info.Metaclass_TurtleInfo_Response._TYPE_SUPPORT is None:
                _turtle_info.Metaclass_TurtleInfo_Response.__import_type_support__()


class TurtleInfo(metaclass=Metaclass_TurtleInfo):
    from turtle_tracker.srv._turtle_info import TurtleInfo_Request as Request
    from turtle_tracker.srv._turtle_info import TurtleInfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
