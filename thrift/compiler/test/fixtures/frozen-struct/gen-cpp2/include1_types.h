/**
 * Autogenerated by Thrift for src/include1.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>

#include <thrift/lib/cpp2/type/Tag.h>


namespace apache {
namespace thrift {
namespace tag {
struct i32Field;
struct strField;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_i32Field
#define APACHE_THRIFT_ACCESSOR_i32Field
APACHE_THRIFT_DEFINE_ACCESSOR(i32Field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_strField
#define APACHE_THRIFT_ACCESSOR_strField
APACHE_THRIFT_DEFINE_ACCESSOR(strField);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace some { namespace ns {
class IncludedA;
}} // some::ns
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace some { namespace ns {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
}} // some::ns
namespace some { namespace ns {
class IncludedA final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;

  void __fbthrift_clear();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = IncludedA;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  IncludedA() :
      __fbthrift_field_i32Field() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  IncludedA(apache::thrift::FragileConstructor, ::std::int32_t i32Field__arg, ::std::string strField__arg);

  IncludedA(IncludedA&&) noexcept;

  IncludedA(const IncludedA& src);


  IncludedA& operator=(IncludedA&&) noexcept;
  IncludedA& operator=(const IncludedA& src);
 private:
  ::std::int32_t __fbthrift_field_i32Field;
 private:
  ::std::string __fbthrift_field_strField;
 private:
  apache::thrift::detail::isset_bitset<2, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const IncludedA&) const;
  bool operator<(const IncludedA&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> i32Field_ref() const& {
    return {this->__fbthrift_field_i32Field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> i32Field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_i32Field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> i32Field_ref() & {
    return {this->__fbthrift_field_i32Field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> i32Field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_i32Field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> i32Field() const& {
    return {this->__fbthrift_field_i32Field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> i32Field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_i32Field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> i32Field() & {
    return {this->__fbthrift_field_i32Field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> i32Field() && {
    return {static_cast<T&&>(this->__fbthrift_field_i32Field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> strField_ref() const& {
    return {this->__fbthrift_field_strField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> strField_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_strField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> strField_ref() & {
    return {this->__fbthrift_field_strField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> strField_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_strField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> strField() const& {
    return {this->__fbthrift_field_strField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> strField() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_strField), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> strField() & {
    return {this->__fbthrift_field_strField, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> strField() && {
    return {static_cast<T&&>(this->__fbthrift_field_strField), __isset.at(1), __isset.bit(1)};
  }

  ::std::int32_t get_i32Field() const {
    return __fbthrift_field_i32Field;
  }

  [[deprecated("Use `FOO.i32Field_ref() = BAR;` instead of `FOO.set_i32Field(BAR);`")]]
  ::std::int32_t& set_i32Field(::std::int32_t i32Field_) {
    i32Field_ref() = i32Field_;
    return __fbthrift_field_i32Field;
  }

  const ::std::string& get_strField() const& {
    return __fbthrift_field_strField;
  }

  ::std::string get_strField() && {
    return std::move(__fbthrift_field_strField);
  }

  template <typename T_IncludedA_strField_struct_setter = ::std::string>
  [[deprecated("Use `FOO.strField_ref() = BAR;` instead of `FOO.set_strField(BAR);`")]]
  ::std::string& set_strField(T_IncludedA_strField_struct_setter&& strField_) {
    strField_ref() = std::forward<T_IncludedA_strField_struct_setter>(strField_);
    return __fbthrift_field_strField;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<IncludedA>;
  friend void swap(IncludedA& a, IncludedA& b);
};

template <class Protocol_>
unsigned long IncludedA::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}} // some::ns
