#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
from abc import ABCMeta
import typing as _typing

from thrift.py3lite.serializer import serialize_iobuf, deserialize
from thrift.py3lite.server import ServiceInterface, oneway

import my.namespacing.extend.test.extend.lite_types as _my_namespacing_extend_test_extend_lite_types
import my.namespacing.test.hsmodule.lite_services as _my_namespacing_test_hsmodule_lite_services
import my.namespacing.test.hsmodule.lite_types as _my_namespacing_test_hsmodule_lite_types

class ExtendTestServiceInterface(
    _my_namespacing_test_hsmodule_lite_services.HsTestServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name():
        return b"ExtendTestService"

    def getFunctionTable(self):
        functionTable = {
            b"check": self._fbthrift__handler_check,
        }
        return {**super().getFunctionTable(), **functionTable}



    async def check(
            self,
            struct1: my.namespacing.test.hsmodule.lite_types.HsFoo
        ) -> bool:
        raise NotImplementedError("async def check is not implemented")

    async def _fbthrift__handler_check(self, args, protocol):
        args_struct = deserialize(_my_namespacing_extend_test_extend_lite_types._fbthrift_ExtendTestService_check_args, args, protocol)
        value = await self.check(args_struct.struct1,)
        return_struct = _my_namespacing_extend_test_extend_lite_types._fbthrift_ExtendTestService_check_result(success=value)

        return serialize_iobuf(return_struct, protocol)
