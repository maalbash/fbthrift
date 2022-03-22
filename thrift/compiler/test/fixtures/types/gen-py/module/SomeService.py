#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from __future__ import absolute_import
import sys
from thrift.util.Recursive import fix_spec
from thrift.Thrift import TType, TMessageType, TPriority, TRequestContext, TProcessorEventHandler, TServerInterface, TProcessor, TException, TApplicationException, UnimplementedTypedef
from thrift.protocol.TProtocol import TProtocolException


from .ttypes import UTF8STRINGS, has_bitwise_ops, is_unscoped, MyForwardRefEnum, MyEnumA, decorated_struct, ContainerStruct, CppTypeStruct, VirtualStruct, MyStructWithForwardRefEnum, TrivialNumeric, TrivialNestedWithDefault, ComplexString, ComplexNestedWithDefault, MinPadding, MyStruct, MyDataItem, Renaming, AnnotatedTypes, ForwardUsageRoot, ForwardUsageStruct, ForwardUsageByRef, NoexceptMoveEmpty, NoexceptMoveSimpleStruct, NoexceptMoveComplexStruct, NoExceptMoveUnion, AllocatorAware, AllocatorAware2, TypedefStruct, StructWithDoubleUnderscores, TBinary, IntTypedef, UintTypedef
import include.ttypes

from thrift.Thrift import TProcessor
import pprint
import warnings
from thrift import Thrift
from thrift.transport import TTransport
from thrift.protocol import TBinaryProtocol
from thrift.protocol import TCompactProtocol
from thrift.protocol import THeaderProtocol
fastproto = None
try:
  from thrift.protocol import fastproto
except ImportError:
  pass

all_structs = []
UTF8STRINGS = bool(0) or sys.version_info.major >= 3

from thrift.util.Decorators import (
  future_process_main,
  future_process_method,
  process_main as thrift_process_main,
  process_method as thrift_process_method,
  should_run_on_thread,
  write_results_after_future,
)

class Iface:
  def bounce_map(self, m=None):
    """
    Parameters:
     - m
    """
    pass

  def binary_keyed_map(self, r=None):
    """
    Parameters:
     - r
    """
    pass


class ContextIface:
  def bounce_map(self, handler_ctx, m=None):
    """
    Parameters:
     - m
    """
    pass

  def binary_keyed_map(self, handler_ctx, r=None):
    """
    Parameters:
     - r
    """
    pass


# HELPER FUNCTIONS AND STRUCTURES

class bounce_map_args:
  """
  Attributes:
   - m
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.MAP:
          self.m = {}
          (_ktype164, _vtype165, _size163 ) = iprot.readMapBegin() 
          if _size163 >= 0:
            for _i167 in range(_size163):
              _key168 = iprot.readI32()
              _val169 = iprot.readString().decode('utf-8') if UTF8STRINGS else iprot.readString()
              self.m[_key168] = _val169
          else: 
            while iprot.peekMap():
              _key170 = iprot.readI32()
              _val171 = iprot.readString().decode('utf-8') if UTF8STRINGS else iprot.readString()
              self.m[_key170] = _val171
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('bounce_map_args')
    if self.m != None:
      oprot.writeFieldBegin('m', TType.MAP, 1)
      oprot.writeMapBegin(TType.I32, TType.STRING, len(self.m))
      for kiter172,viter173 in self.m.items():
        oprot.writeI32(kiter172)
        oprot.writeString(viter173.encode('utf-8')) if UTF8STRINGS and not isinstance(viter173, bytes) else oprot.writeString(viter173)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.m is not None:
      value = pprint.pformat(self.m, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    m=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(bounce_map_args)
bounce_map_args.thrift_spec = (
  None, # 0
  (1, TType.MAP, 'm', (TType.I32,None,TType.STRING,True), None, 2, ), # 1
)

bounce_map_args.thrift_struct_annotations = {
}
bounce_map_args.thrift_field_annotations = {
}

def bounce_map_args__init__(self, m=None,):
  self.m = m

bounce_map_args.__init__ = bounce_map_args__init__

def bounce_map_args__setstate__(self, state):
  state.setdefault('m', None)
  self.__dict__ = state

bounce_map_args.__getstate__ = lambda self: self.__dict__.copy()
bounce_map_args.__setstate__ = bounce_map_args__setstate__

class bounce_map_result:
  """
  Attributes:
   - success
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 0:
        if ftype == TType.MAP:
          self.success = {}
          (_ktype175, _vtype176, _size174 ) = iprot.readMapBegin() 
          if _size174 >= 0:
            for _i178 in range(_size174):
              _key179 = iprot.readI32()
              _val180 = iprot.readString().decode('utf-8') if UTF8STRINGS else iprot.readString()
              self.success[_key179] = _val180
          else: 
            while iprot.peekMap():
              _key181 = iprot.readI32()
              _val182 = iprot.readString().decode('utf-8') if UTF8STRINGS else iprot.readString()
              self.success[_key181] = _val182
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('bounce_map_result')
    if self.success != None:
      oprot.writeFieldBegin('success', TType.MAP, 0)
      oprot.writeMapBegin(TType.I32, TType.STRING, len(self.success))
      for kiter183,viter184 in self.success.items():
        oprot.writeI32(kiter183)
        oprot.writeString(viter184.encode('utf-8')) if UTF8STRINGS and not isinstance(viter184, bytes) else oprot.writeString(viter184)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.success is not None:
      value = pprint.pformat(self.success, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    success=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(bounce_map_result)
bounce_map_result.thrift_spec = (
  (0, TType.MAP, 'success', (TType.I32,None,TType.STRING,True), None, 2, ), # 0
)

bounce_map_result.thrift_struct_annotations = {
}
bounce_map_result.thrift_field_annotations = {
}

def bounce_map_result__init__(self, success=None,):
  self.success = success

bounce_map_result.__init__ = bounce_map_result__init__

def bounce_map_result__setstate__(self, state):
  state.setdefault('success', None)
  self.__dict__ = state

bounce_map_result.__getstate__ = lambda self: self.__dict__.copy()
bounce_map_result.__setstate__ = bounce_map_result__setstate__

class binary_keyed_map_args:
  """
  Attributes:
   - r
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 1:
        if ftype == TType.LIST:
          self.r = []
          (_etype188, _size185) = iprot.readListBegin()
          if _size185 >= 0:
            for _i189 in range(_size185):
              _elem190 = iprot.readI64()
              self.r.append(_elem190)
          else: 
            while iprot.peekList():
              _elem191 = iprot.readI64()
              self.r.append(_elem191)
          iprot.readListEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('binary_keyed_map_args')
    if self.r != None:
      oprot.writeFieldBegin('r', TType.LIST, 1)
      oprot.writeListBegin(TType.I64, len(self.r))
      for iter192 in self.r:
        oprot.writeI64(iter192)
      oprot.writeListEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.r is not None:
      value = pprint.pformat(self.r, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    r=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(binary_keyed_map_args)
binary_keyed_map_args.thrift_spec = (
  None, # 0
  (1, TType.LIST, 'r', (TType.I64,None), None, 2, ), # 1
)

binary_keyed_map_args.thrift_struct_annotations = {
}
binary_keyed_map_args.thrift_field_annotations = {
}

def binary_keyed_map_args__init__(self, r=None,):
  self.r = r

binary_keyed_map_args.__init__ = binary_keyed_map_args__init__

def binary_keyed_map_args__setstate__(self, state):
  state.setdefault('r', None)
  self.__dict__ = state

binary_keyed_map_args.__getstate__ = lambda self: self.__dict__.copy()
binary_keyed_map_args.__setstate__ = binary_keyed_map_args__setstate__

class binary_keyed_map_result:
  """
  Attributes:
   - success
  """

  thrift_spec = None
  thrift_field_annotations = None
  thrift_struct_annotations = None
  __init__ = None
  @staticmethod
  def isUnion():
    return False

  def read(self, iprot):
    if (isinstance(iprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0)
      return
    if (isinstance(iprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(iprot, THeaderProtocol.THeaderProtocolAccelerate) and iprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None and fastproto is not None:
      fastproto.decode(self, iprot.trans, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2)
      return
    iprot.readStructBegin()
    while True:
      (fname, ftype, fid) = iprot.readFieldBegin()
      if ftype == TType.STOP:
        break
      if fid == 0:
        if ftype == TType.MAP:
          self.success = {}
          (_ktype194, _vtype195, _size193 ) = iprot.readMapBegin() 
          if _size193 >= 0:
            for _i197 in range(_size193):
              _key198 = iprot.readString()
              _val199 = iprot.readI64()
              self.success[_key198] = _val199
          else: 
            while iprot.peekMap():
              _key200 = iprot.readString()
              _val201 = iprot.readI64()
              self.success[_key200] = _val201
          iprot.readMapEnd()
        else:
          iprot.skip(ftype)
      else:
        iprot.skip(ftype)
      iprot.readFieldEnd()
    iprot.readStructEnd()

  def write(self, oprot):
    if (isinstance(oprot, TBinaryProtocol.TBinaryProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_BINARY_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=0))
      return
    if (isinstance(oprot, TCompactProtocol.TCompactProtocolAccelerated) or (isinstance(oprot, THeaderProtocol.THeaderProtocolAccelerate) and oprot.get_protocol_id() == THeaderProtocol.THeaderProtocol.T_COMPACT_PROTOCOL)) and self.thrift_spec is not None and fastproto is not None:
      oprot.trans.write(fastproto.encode(self, [self.__class__, self.thrift_spec, False], utf8strings=UTF8STRINGS, protoid=2))
      return
    oprot.writeStructBegin('binary_keyed_map_result')
    if self.success != None:
      oprot.writeFieldBegin('success', TType.MAP, 0)
      oprot.writeMapBegin(TType.STRING, TType.I64, len(self.success))
      for kiter202,viter203 in self.success.items():
        oprot.writeString(kiter202)
        oprot.writeI64(viter203)
      oprot.writeMapEnd()
      oprot.writeFieldEnd()
    oprot.writeFieldStop()
    oprot.writeStructEnd()

  def __repr__(self):
    L = []
    padding = ' ' * 4
    if self.success is not None:
      value = pprint.pformat(self.success, indent=0)
      value = padding.join(value.splitlines(True))
      L.append('    success=%s' % (value))
    return "%s(%s)" % (self.__class__.__name__, "\n" + ",\n".join(L) if L else '')

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
      return False

    return self.__dict__ == other.__dict__ 

  def __ne__(self, other):
    return not (self == other)

  # Override the __hash__ function for Python3 - t10434117
  __hash__ = object.__hash__

all_structs.append(binary_keyed_map_result)
binary_keyed_map_result.thrift_spec = (
  (0, TType.MAP, 'success', (TType.STRING,False,TType.I64,None), None, 2, ), # 0
)

binary_keyed_map_result.thrift_struct_annotations = {
}
binary_keyed_map_result.thrift_field_annotations = {
}

def binary_keyed_map_result__init__(self, success=None,):
  self.success = success

binary_keyed_map_result.__init__ = binary_keyed_map_result__init__

def binary_keyed_map_result__setstate__(self, state):
  state.setdefault('success', None)
  self.__dict__ = state

binary_keyed_map_result.__getstate__ = lambda self: self.__dict__.copy()
binary_keyed_map_result.__setstate__ = binary_keyed_map_result__setstate__

class Client(Iface):
  _fbthrift_force_cpp_transport = False

  def __enter__(self):
    return self

  def __exit__(self, type, value, tb):
    if self._iprot:
      self._iprot.trans.close()
    if self._oprot and self._iprot is not self._oprot:
      self._oprot.trans.close()

  def __init__(self, iprot=None, oprot=None, cpp_transport=None):
    self._iprot = self._oprot = iprot
    if oprot != None:
      self._oprot = oprot
    self._seqid = 0
    self._fbthrift_cpp_transport = cpp_transport

  def set_persistent_header(self, key, value):
    if self._fbthrift_cpp_transport:
      self._fbthrift_cpp_transport.set_persistent_header(key, value)
    else:
      try:
        self._oprot.trans.set_persistent_header(key, value)
      except AttributeError:
        pass


  def set_onetime_header(self, key, value):
    if self._fbthrift_cpp_transport:
      self._fbthrift_cpp_transport.set_onetime_header(key, value)
    else:
      try:
        self._oprot.trans.set_header(key, value)
      except AttributeError:
        pass

  def bounce_map(self, m=None):
    """
    Parameters:
     - m
    """
    if (self._fbthrift_cpp_transport):
      args = bounce_map_args()
      args.m = m
      return self._fbthrift_cpp_transport._send_request("SomeService", "bounce_map", args, bounce_map_result).success
    self.send_bounce_map(m)
    return self.recv_bounce_map()

  def send_bounce_map(self, m=None):
    self._oprot.writeMessageBegin('bounce_map', TMessageType.CALL, self._seqid)
    args = bounce_map_args()
    args.m = m
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_bounce_map(self, ):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = bounce_map_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    if result.success != None:
      return result.success
    raise TApplicationException(TApplicationException.MISSING_RESULT, "bounce_map failed: unknown result");

  def binary_keyed_map(self, r=None):
    """
    Parameters:
     - r
    """
    if (self._fbthrift_cpp_transport):
      args = binary_keyed_map_args()
      args.r = r
      return self._fbthrift_cpp_transport._send_request("SomeService", "binary_keyed_map", args, binary_keyed_map_result).success
    self.send_binary_keyed_map(r)
    return self.recv_binary_keyed_map()

  def send_binary_keyed_map(self, r=None):
    self._oprot.writeMessageBegin('binary_keyed_map', TMessageType.CALL, self._seqid)
    args = binary_keyed_map_args()
    args.r = r
    args.write(self._oprot)
    self._oprot.writeMessageEnd()
    self._oprot.trans.flush()

  def recv_binary_keyed_map(self, ):
    (fname, mtype, rseqid) = self._iprot.readMessageBegin()
    if mtype == TMessageType.EXCEPTION:
      x = TApplicationException()
      x.read(self._iprot)
      self._iprot.readMessageEnd()
      raise x
    result = binary_keyed_map_result()
    result.read(self._iprot)
    self._iprot.readMessageEnd()
    if result.success != None:
      return result.success
    raise TApplicationException(TApplicationException.MISSING_RESULT, "binary_keyed_map failed: unknown result");


class Processor(Iface, TProcessor):
  _onewayMethods = ()

  def __init__(self, handler):
    TProcessor.__init__(self)
    self._handler = handler
    self._processMap = {}
    self._priorityMap = {}
    self._processMap["bounce_map"] = Processor.process_bounce_map
    self._priorityMap["bounce_map"] = TPriority.NORMAL
    self._processMap["binary_keyed_map"] = Processor.process_binary_keyed_map
    self._priorityMap["binary_keyed_map"] = TPriority.NORMAL

  def onewayMethods(self):
    l = []
    l.extend(Processor._onewayMethods)
    return tuple(l)

  @thrift_process_main()
  def process(self,): pass

  @thrift_process_method(bounce_map_args, oneway=False)
  def process_bounce_map(self, args, handler_ctx):
    result = bounce_map_result()
    try:
      result.success = self._handler.bounce_map(args.m)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'bounce_map', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

  @thrift_process_method(binary_keyed_map_args, oneway=False)
  def process_binary_keyed_map(self, args, handler_ctx):
    result = binary_keyed_map_result()
    try:
      result.success = self._handler.binary_keyed_map(args.r)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'binary_keyed_map', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

Iface._processor_type = Processor

class ContextProcessor(ContextIface, TProcessor):
  _onewayMethods = ()

  def __init__(self, handler):
    TProcessor.__init__(self)
    self._handler = handler
    self._processMap = {}
    self._priorityMap = {}
    self._processMap["bounce_map"] = ContextProcessor.process_bounce_map
    self._priorityMap["bounce_map"] = TPriority.NORMAL
    self._processMap["binary_keyed_map"] = ContextProcessor.process_binary_keyed_map
    self._priorityMap["binary_keyed_map"] = TPriority.NORMAL

  def onewayMethods(self):
    l = []
    l.extend(ContextProcessor._onewayMethods)
    return tuple(l)

  @thrift_process_main()
  def process(self,): pass

  @thrift_process_method(bounce_map_args, oneway=False)
  def process_bounce_map(self, args, handler_ctx):
    result = bounce_map_result()
    try:
      result.success = self._handler.bounce_map(handler_ctx, args.m)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'bounce_map', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

  @thrift_process_method(binary_keyed_map_args, oneway=False)
  def process_binary_keyed_map(self, args, handler_ctx):
    result = binary_keyed_map_result()
    try:
      result.success = self._handler.binary_keyed_map(handler_ctx, args.r)
    except:
      ex = sys.exc_info()[1]
      self._event_handler.handlerError(handler_ctx, 'binary_keyed_map', ex)
      result = Thrift.TApplicationException(message=repr(ex))
    return result

ContextIface._processor_type = ContextProcessor

fix_spec(all_structs)
del all_structs

