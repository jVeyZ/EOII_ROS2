# generated from rosidl_generator_py/resource/_idl.py.em
# with input from turtle_tracker:action/TurtleInfoAction.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TurtleInfoAction_Goal(type):
    """Metaclass of message 'TurtleInfoAction_Goal'."""

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
                'turtle_tracker.action.TurtleInfoAction_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__turtle_info_action__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__turtle_info_action__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__turtle_info_action__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__turtle_info_action__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__turtle_info_action__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfoAction_Goal(metaclass=Metaclass_TurtleInfoAction_Goal):
    """Message class 'TurtleInfoAction_Goal'."""

    __slots__ = [
        '_update_rate',
        '_catch_distance',
    ]

    _fields_and_field_types = {
        'update_rate': 'double',
        'catch_distance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.update_rate = kwargs.get('update_rate', float())
        self.catch_distance = kwargs.get('catch_distance', float())

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
        if self.update_rate != other.update_rate:
            return False
        if self.catch_distance != other.catch_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def update_rate(self):
        """Message field 'update_rate'."""
        return self._update_rate

    @update_rate.setter
    def update_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'update_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'update_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._update_rate = value

    @builtins.property
    def catch_distance(self):
        """Message field 'catch_distance'."""
        return self._catch_distance

    @catch_distance.setter
    def catch_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'catch_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'catch_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._catch_distance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_TurtleInfoAction_Result(type):
    """Metaclass of message 'TurtleInfoAction_Result'."""

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
                'turtle_tracker.action.TurtleInfoAction_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__turtle_info_action__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__turtle_info_action__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__turtle_info_action__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__turtle_info_action__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__turtle_info_action__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfoAction_Result(metaclass=Metaclass_TurtleInfoAction_Result):
    """Message class 'TurtleInfoAction_Result'."""

    __slots__ = [
        '_success',
        '_message',
        '_final_distance',
        '_total_time',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'final_distance': 'double',
        'total_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.final_distance = kwargs.get('final_distance', float())
        self.total_time = kwargs.get('total_time', float())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.final_distance != other.final_distance:
            return False
        if self.total_time != other.total_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def final_distance(self):
        """Message field 'final_distance'."""
        return self._final_distance

    @final_distance.setter
    def final_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'final_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'final_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._final_distance = value

    @builtins.property
    def total_time(self):
        """Message field 'total_time'."""
        return self._total_time

    @total_time.setter
    def total_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_TurtleInfoAction_Feedback(type):
    """Metaclass of message 'TurtleInfoAction_Feedback'."""

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
                'turtle_tracker.action.TurtleInfoAction_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__turtle_info_action__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__turtle_info_action__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__turtle_info_action__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__turtle_info_action__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__turtle_info_action__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfoAction_Feedback(metaclass=Metaclass_TurtleInfoAction_Feedback):
    """Message class 'TurtleInfoAction_Feedback'."""

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TurtleInfoAction_SendGoal_Request(type):
    """Metaclass of message 'TurtleInfoAction_SendGoal_Request'."""

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
                'turtle_tracker.action.TurtleInfoAction_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__turtle_info_action__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__turtle_info_action__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__turtle_info_action__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__turtle_info_action__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__turtle_info_action__send_goal__request

            from turtle_tracker.action import TurtleInfoAction
            if TurtleInfoAction.Goal.__class__._TYPE_SUPPORT is None:
                TurtleInfoAction.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfoAction_SendGoal_Request(metaclass=Metaclass_TurtleInfoAction_SendGoal_Request):
    """Message class 'TurtleInfoAction_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'turtle_tracker/TurtleInfoAction_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['turtle_tracker', 'action'], 'TurtleInfoAction_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from turtle_tracker.action._turtle_info_action import TurtleInfoAction_Goal
        self.goal = kwargs.get('goal', TurtleInfoAction_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from turtle_tracker.action._turtle_info_action import TurtleInfoAction_Goal
            assert \
                isinstance(value, TurtleInfoAction_Goal), \
                "The 'goal' field must be a sub message of type 'TurtleInfoAction_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TurtleInfoAction_SendGoal_Response(type):
    """Metaclass of message 'TurtleInfoAction_SendGoal_Response'."""

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
                'turtle_tracker.action.TurtleInfoAction_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__turtle_info_action__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__turtle_info_action__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__turtle_info_action__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__turtle_info_action__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__turtle_info_action__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfoAction_SendGoal_Response(metaclass=Metaclass_TurtleInfoAction_SendGoal_Response):
    """Message class 'TurtleInfoAction_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_TurtleInfoAction_SendGoal(type):
    """Metaclass of service 'TurtleInfoAction_SendGoal'."""

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
                'turtle_tracker.action.TurtleInfoAction_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__turtle_info_action__send_goal

            from turtle_tracker.action import _turtle_info_action
            if _turtle_info_action.Metaclass_TurtleInfoAction_SendGoal_Request._TYPE_SUPPORT is None:
                _turtle_info_action.Metaclass_TurtleInfoAction_SendGoal_Request.__import_type_support__()
            if _turtle_info_action.Metaclass_TurtleInfoAction_SendGoal_Response._TYPE_SUPPORT is None:
                _turtle_info_action.Metaclass_TurtleInfoAction_SendGoal_Response.__import_type_support__()


class TurtleInfoAction_SendGoal(metaclass=Metaclass_TurtleInfoAction_SendGoal):
    from turtle_tracker.action._turtle_info_action import TurtleInfoAction_SendGoal_Request as Request
    from turtle_tracker.action._turtle_info_action import TurtleInfoAction_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TurtleInfoAction_GetResult_Request(type):
    """Metaclass of message 'TurtleInfoAction_GetResult_Request'."""

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
                'turtle_tracker.action.TurtleInfoAction_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__turtle_info_action__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__turtle_info_action__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__turtle_info_action__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__turtle_info_action__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__turtle_info_action__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfoAction_GetResult_Request(metaclass=Metaclass_TurtleInfoAction_GetResult_Request):
    """Message class 'TurtleInfoAction_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TurtleInfoAction_GetResult_Response(type):
    """Metaclass of message 'TurtleInfoAction_GetResult_Response'."""

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
                'turtle_tracker.action.TurtleInfoAction_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__turtle_info_action__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__turtle_info_action__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__turtle_info_action__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__turtle_info_action__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__turtle_info_action__get_result__response

            from turtle_tracker.action import TurtleInfoAction
            if TurtleInfoAction.Result.__class__._TYPE_SUPPORT is None:
                TurtleInfoAction.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfoAction_GetResult_Response(metaclass=Metaclass_TurtleInfoAction_GetResult_Response):
    """Message class 'TurtleInfoAction_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'turtle_tracker/TurtleInfoAction_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['turtle_tracker', 'action'], 'TurtleInfoAction_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from turtle_tracker.action._turtle_info_action import TurtleInfoAction_Result
        self.result = kwargs.get('result', TurtleInfoAction_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from turtle_tracker.action._turtle_info_action import TurtleInfoAction_Result
            assert \
                isinstance(value, TurtleInfoAction_Result), \
                "The 'result' field must be a sub message of type 'TurtleInfoAction_Result'"
        self._result = value


class Metaclass_TurtleInfoAction_GetResult(type):
    """Metaclass of service 'TurtleInfoAction_GetResult'."""

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
                'turtle_tracker.action.TurtleInfoAction_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__turtle_info_action__get_result

            from turtle_tracker.action import _turtle_info_action
            if _turtle_info_action.Metaclass_TurtleInfoAction_GetResult_Request._TYPE_SUPPORT is None:
                _turtle_info_action.Metaclass_TurtleInfoAction_GetResult_Request.__import_type_support__()
            if _turtle_info_action.Metaclass_TurtleInfoAction_GetResult_Response._TYPE_SUPPORT is None:
                _turtle_info_action.Metaclass_TurtleInfoAction_GetResult_Response.__import_type_support__()


class TurtleInfoAction_GetResult(metaclass=Metaclass_TurtleInfoAction_GetResult):
    from turtle_tracker.action._turtle_info_action import TurtleInfoAction_GetResult_Request as Request
    from turtle_tracker.action._turtle_info_action import TurtleInfoAction_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TurtleInfoAction_FeedbackMessage(type):
    """Metaclass of message 'TurtleInfoAction_FeedbackMessage'."""

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
                'turtle_tracker.action.TurtleInfoAction_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__turtle_info_action__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__turtle_info_action__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__turtle_info_action__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__turtle_info_action__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__turtle_info_action__feedback_message

            from turtle_tracker.action import TurtleInfoAction
            if TurtleInfoAction.Feedback.__class__._TYPE_SUPPORT is None:
                TurtleInfoAction.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtleInfoAction_FeedbackMessage(metaclass=Metaclass_TurtleInfoAction_FeedbackMessage):
    """Message class 'TurtleInfoAction_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'turtle_tracker/TurtleInfoAction_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['turtle_tracker', 'action'], 'TurtleInfoAction_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from turtle_tracker.action._turtle_info_action import TurtleInfoAction_Feedback
        self.feedback = kwargs.get('feedback', TurtleInfoAction_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from turtle_tracker.action._turtle_info_action import TurtleInfoAction_Feedback
            assert \
                isinstance(value, TurtleInfoAction_Feedback), \
                "The 'feedback' field must be a sub message of type 'TurtleInfoAction_Feedback'"
        self._feedback = value


class Metaclass_TurtleInfoAction(type):
    """Metaclass of action 'TurtleInfoAction'."""

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
                'turtle_tracker.action.TurtleInfoAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__turtle_info_action

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from turtle_tracker.action import _turtle_info_action
            if _turtle_info_action.Metaclass_TurtleInfoAction_SendGoal._TYPE_SUPPORT is None:
                _turtle_info_action.Metaclass_TurtleInfoAction_SendGoal.__import_type_support__()
            if _turtle_info_action.Metaclass_TurtleInfoAction_GetResult._TYPE_SUPPORT is None:
                _turtle_info_action.Metaclass_TurtleInfoAction_GetResult.__import_type_support__()
            if _turtle_info_action.Metaclass_TurtleInfoAction_FeedbackMessage._TYPE_SUPPORT is None:
                _turtle_info_action.Metaclass_TurtleInfoAction_FeedbackMessage.__import_type_support__()


class TurtleInfoAction(metaclass=Metaclass_TurtleInfoAction):

    # The goal message defined in the action definition.
    from turtle_tracker.action._turtle_info_action import TurtleInfoAction_Goal as Goal
    # The result message defined in the action definition.
    from turtle_tracker.action._turtle_info_action import TurtleInfoAction_Result as Result
    # The feedback message defined in the action definition.
    from turtle_tracker.action._turtle_info_action import TurtleInfoAction_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from turtle_tracker.action._turtle_info_action import TurtleInfoAction_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from turtle_tracker.action._turtle_info_action import TurtleInfoAction_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from turtle_tracker.action._turtle_info_action import TurtleInfoAction_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
