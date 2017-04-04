/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.tcc"

#include <algorithm>

#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_data.h"



namespace apache { namespace thrift { namespace fixtures { namespace types {

}}}} // apache::thrift::fixtures::types
namespace std {

} // std
namespace apache { namespace thrift { namespace fixtures { namespace types {

void decorated_struct::__clear() {
  // clear all fields
  field = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset.__clear();
}

bool decorated_struct::operator==(const decorated_struct& rhs) const {
  if (!((field == rhs.field))) {
    return false;
  }
  return true;
}

void swap(decorated_struct& a, decorated_struct& b) {
  using ::std::swap;
  swap(a.field, b.field);
  swap(a.__isset, b.__isset);
}

template uint32_t decorated_struct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t decorated_struct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t decorated_struct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t decorated_struct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t decorated_struct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t decorated_struct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t decorated_struct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t decorated_struct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

}} // apache::thrift
namespace std {

} // std
namespace apache { namespace thrift { namespace fixtures { namespace types {

void ContainerStruct::__clear() {
  // clear all fields
  fieldA.clear();
  fieldB.clear();
  fieldC.clear();
  fieldD.clear();
  fieldE.clear();
  fieldF.clear();
  fieldG.clear();
  __isset.__clear();
}

bool ContainerStruct::operator==(const ContainerStruct& rhs) const {
  if (!((fieldA == rhs.fieldA))) {
    return false;
  }
  if (!((fieldB == rhs.fieldB))) {
    return false;
  }
  if (!((fieldC == rhs.fieldC))) {
    return false;
  }
  if (!((fieldD == rhs.fieldD))) {
    return false;
  }
  if (!((fieldE == rhs.fieldE))) {
    return false;
  }
  if (!((fieldF == rhs.fieldF))) {
    return false;
  }
  if (!((fieldG == rhs.fieldG))) {
    return false;
  }
  return true;
}

const std::vector<int32_t>& ContainerStruct::get_fieldA() const& {
  return fieldA;
}

std::vector<int32_t> ContainerStruct::get_fieldA() && {
  return std::move(fieldA);
}

const std::list<int32_t>& ContainerStruct::get_fieldB() const& {
  return fieldB;
}

std::list<int32_t> ContainerStruct::get_fieldB() && {
  return std::move(fieldB);
}

const std::deque<int32_t>& ContainerStruct::get_fieldC() const& {
  return fieldC;
}

std::deque<int32_t> ContainerStruct::get_fieldC() && {
  return std::move(fieldC);
}

const folly::fbvector<int32_t>& ContainerStruct::get_fieldD() const& {
  return fieldD;
}

folly::fbvector<int32_t> ContainerStruct::get_fieldD() && {
  return std::move(fieldD);
}

const folly::small_vector<int32_t>& ContainerStruct::get_fieldE() const& {
  return fieldE;
}

folly::small_vector<int32_t> ContainerStruct::get_fieldE() && {
  return std::move(fieldE);
}

const folly::sorted_vector_set<int32_t>& ContainerStruct::get_fieldF() const& {
  return fieldF;
}

folly::sorted_vector_set<int32_t> ContainerStruct::get_fieldF() && {
  return std::move(fieldF);
}

const folly::sorted_vector_map<int32_t, std::string>& ContainerStruct::get_fieldG() const& {
  return fieldG;
}

folly::sorted_vector_map<int32_t, std::string> ContainerStruct::get_fieldG() && {
  return std::move(fieldG);
}

void swap(ContainerStruct& a, ContainerStruct& b) {
  using ::std::swap;
  swap(a.fieldA, b.fieldA);
  swap(a.fieldB, b.fieldB);
  swap(a.fieldC, b.fieldC);
  swap(a.fieldD, b.fieldD);
  swap(a.fieldE, b.fieldE);
  swap(a.fieldF, b.fieldF);
  swap(a.fieldG, b.fieldG);
  swap(a.__isset, b.__isset);
}

template uint32_t ContainerStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ContainerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ContainerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ContainerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ContainerStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ContainerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ContainerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ContainerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace fixtures { namespace types {

}}}} // apache::thrift::fixtures::types
