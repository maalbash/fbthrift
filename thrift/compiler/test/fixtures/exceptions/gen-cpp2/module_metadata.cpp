/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/exceptions/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


void StructMetadata<::cpp2::Banal>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.Banal", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Banal = res.first->second;
  module_Banal.name = "module.Banal";
  module_Banal.is_union = false;
}
void StructMetadata<::cpp2::Fiery>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.Fiery", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Fiery = res.first->second;
  module_Fiery.name = "module.Fiery";
  module_Fiery.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_Fiery_fields[] = {
    std::make_tuple(1, "message", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_Fiery_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_Fiery.fields.push_back(std::move(field));
  }
}
void StructMetadata<::cpp2::Serious>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.Serious", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Serious = res.first->second;
  module_Serious.name = "module.Serious";
  module_Serious.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_Serious_fields[] = {
    std::make_tuple(1, "sonnet", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_Serious_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_Serious.fields.push_back(std::move(field));
  }
}

void ExceptionMetadata<::cpp2::Banal>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.Banal", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_Banal = res.first->second;
  module_Banal.name = "module.Banal";
}
void ExceptionMetadata<::cpp2::Fiery>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.Fiery", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_Fiery = res.first->second;
  module_Fiery.name = "module.Fiery";
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_Fiery_fields[] = {
    std::make_tuple(1, "message", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_Fiery_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_Fiery.fields.push_back(std::move(field));
  }
}
void ExceptionMetadata<::cpp2::Serious>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.Serious", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_Serious = res.first->second;
  module_Serious.name = "module.Serious";
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_Serious_fields[] = {
    std::make_tuple(1, "sonnet", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_Serious_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    module_Serious.fields.push_back(std::move(field));
  }
}
void ServiceMetadata<::cpp2::RaiserSvIf>::gen_doBland(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "doBland";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  func.is_oneway_ref() = false;
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::RaiserSvIf>::gen_doRaise(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "doRaise";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_Raiser_doRaise_b_1;
  module_Raiser_doRaise_b_1.id = 1;
  module_Raiser_doRaise_b_1.name = "b";
  module_Raiser_doRaise_b_1.is_optional = false;
  auto module_Raiser_doRaise_b_1_type = std::make_unique<Struct< ::cpp2::Banal>>("module.Banal");
  module_Raiser_doRaise_b_1_type->writeAndGenType(module_Raiser_doRaise_b_1.type, metadata);
  func.exceptions.push_back(std::move(module_Raiser_doRaise_b_1));
  ExceptionMetadata< ::cpp2::Banal>::gen(metadata);
  ::apache::thrift::metadata::ThriftField module_Raiser_doRaise_f_2;
  module_Raiser_doRaise_f_2.id = 2;
  module_Raiser_doRaise_f_2.name = "f";
  module_Raiser_doRaise_f_2.is_optional = false;
  auto module_Raiser_doRaise_f_2_type = std::make_unique<Struct< ::cpp2::Fiery>>("module.Fiery");
  module_Raiser_doRaise_f_2_type->writeAndGenType(module_Raiser_doRaise_f_2.type, metadata);
  func.exceptions.push_back(std::move(module_Raiser_doRaise_f_2));
  ExceptionMetadata< ::cpp2::Fiery>::gen(metadata);
  ::apache::thrift::metadata::ThriftField module_Raiser_doRaise_s_3;
  module_Raiser_doRaise_s_3.id = 3;
  module_Raiser_doRaise_s_3.name = "s";
  module_Raiser_doRaise_s_3.is_optional = false;
  auto module_Raiser_doRaise_s_3_type = std::make_unique<Struct< ::cpp2::Serious>>("module.Serious");
  module_Raiser_doRaise_s_3_type->writeAndGenType(module_Raiser_doRaise_s_3.type, metadata);
  func.exceptions.push_back(std::move(module_Raiser_doRaise_s_3));
  ExceptionMetadata< ::cpp2::Serious>::gen(metadata);
  func.is_oneway_ref() = false;
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::RaiserSvIf>::gen_get200(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "get200";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  func.is_oneway_ref() = false;
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::RaiserSvIf>::gen_get500(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "get500";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  func_ret_type->writeAndGenType(func.returnType, metadata);
  ::apache::thrift::metadata::ThriftField module_Raiser_get500_f_1;
  module_Raiser_get500_f_1.id = 1;
  module_Raiser_get500_f_1.name = "f";
  module_Raiser_get500_f_1.is_optional = false;
  auto module_Raiser_get500_f_1_type = std::make_unique<Struct< ::cpp2::Fiery>>("module.Fiery");
  module_Raiser_get500_f_1_type->writeAndGenType(module_Raiser_get500_f_1.type, metadata);
  func.exceptions.push_back(std::move(module_Raiser_get500_f_1));
  ExceptionMetadata< ::cpp2::Fiery>::gen(metadata);
  ::apache::thrift::metadata::ThriftField module_Raiser_get500_b_2;
  module_Raiser_get500_b_2.id = 2;
  module_Raiser_get500_b_2.name = "b";
  module_Raiser_get500_b_2.is_optional = false;
  auto module_Raiser_get500_b_2_type = std::make_unique<Struct< ::cpp2::Banal>>("module.Banal");
  module_Raiser_get500_b_2_type->writeAndGenType(module_Raiser_get500_b_2.type, metadata);
  func.exceptions.push_back(std::move(module_Raiser_get500_b_2));
  ExceptionMetadata< ::cpp2::Banal>::gen(metadata);
  ::apache::thrift::metadata::ThriftField module_Raiser_get500_s_3;
  module_Raiser_get500_s_3.id = 3;
  module_Raiser_get500_s_3.name = "s";
  module_Raiser_get500_s_3.is_optional = false;
  auto module_Raiser_get500_s_3_type = std::make_unique<Struct< ::cpp2::Serious>>("module.Serious");
  module_Raiser_get500_s_3_type->writeAndGenType(module_Raiser_get500_s_3.type, metadata);
  func.exceptions.push_back(std::move(module_Raiser_get500_s_3));
  ExceptionMetadata< ::cpp2::Serious>::gen(metadata);
  func.is_oneway_ref() = false;
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::cpp2::RaiserSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_Raiser;
  module_Raiser.name = "module.Raiser";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::RaiserSvIf>::gen_doBland,
    ServiceMetadata<::cpp2::RaiserSvIf>::gen_doRaise,
    ServiceMetadata<::cpp2::RaiserSvIf>::gen_get200,
    ServiceMetadata<::cpp2::RaiserSvIf>::gen_get500,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_Raiser);
  }
  context.set_service_info(std::move(module_Raiser));
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.set_name("module");
  context.set_module(std::move(module));
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
