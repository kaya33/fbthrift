/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>

#include "folly/sorted_vector_types.h"

// BEGIN declare_enums
namespace a { namespace different { namespace ns {

enum class AnEnum {
  FIELDA = 2,
  FIELDB = 4
};

using _AnEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<AnEnum, AnEnum>;
extern const _AnEnum_EnumMapFactory::ValuesToNamesMapType _AnEnum_VALUES_TO_NAMES;
extern const _AnEnum_EnumMapFactory::NamesToValuesMapType _AnEnum_NAMES_TO_VALUES;



}}} // a::different::ns
namespace std {


template<> struct hash<typename  ::a::different::ns::AnEnum> : public apache::thrift::detail::enum_hash<typename  ::a::different::ns::AnEnum> {};
template<> struct equal_to<typename  ::a::different::ns::AnEnum> : public apache::thrift::detail::enum_equal_to<typename  ::a::different::ns::AnEnum> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage< ::a::different::ns::AnEnum>;
template <> const std::size_t TEnumTraits< ::a::different::ns::AnEnum>::size;
template <> const folly::Range<const  ::a::different::ns::AnEnum*> TEnumTraits< ::a::different::ns::AnEnum>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::a::different::ns::AnEnum>::names;
template <> const char* TEnumTraits< ::a::different::ns::AnEnum>::findName( ::a::different::ns::AnEnum value);
template <> bool TEnumTraits< ::a::different::ns::AnEnum>::findValue(const char* name,  ::a::different::ns::AnEnum* outValue);

template <> inline constexpr  ::a::different::ns::AnEnum TEnumTraits< ::a::different::ns::AnEnum>::min() {
  return  ::a::different::ns::AnEnum::FIELDA;
}

template <> inline constexpr  ::a::different::ns::AnEnum TEnumTraits< ::a::different::ns::AnEnum>::max() {
  return  ::a::different::ns::AnEnum::FIELDB;
}


}} // apache::thrift


// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace a { namespace different { namespace ns {
class AStruct;
class AStructB;
}}} // a::different::ns
// END forward_declare
// BEGIN typedefs
namespace a { namespace different { namespace ns {
typedef int64_t IncludedInt64;

}}} // a::different::ns
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace a { namespace different { namespace ns {
class AStruct : private apache::thrift::detail::st::ComparisonOperators<AStruct> {
 public:

  AStruct() :
      FieldA(0) {}
  // FragileConstructor for use in initialization lists only.
  AStruct(apache::thrift::FragileConstructor, int32_t FieldA__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  AStruct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    AStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    FieldA = arg.move();
    __isset.FieldA = true;
  }

  AStruct(AStruct&&) = default;

  AStruct(const AStruct&) = default;

  AStruct& operator=(AStruct&&) = default;

  AStruct& operator=(const AStruct&) = default;
  void __clear();

  virtual ~AStruct() {}

  int32_t FieldA;

  struct __isset {
    __isset() { __clear(); }

    void __clear() {
      FieldA = false;
    }

    bool FieldA;
  } __isset;
  bool operator==(const AStruct& rhs) const;

  bool operator < (const AStruct& rhs) const {
    if (!(FieldA == rhs.FieldA)) {
      return FieldA < rhs.FieldA;
    }
    (void)rhs;
    return false;
  }

  int32_t get_FieldA() const {
    return FieldA;
  }

  int32_t& set_FieldA(int32_t FieldA_) {
    FieldA = FieldA_;
    __isset.FieldA = true;
    return FieldA;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(AStruct& a, AStruct& b);
extern template uint32_t AStruct::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t AStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t AStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t AStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t AStruct::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t AStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t AStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t AStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t AStruct::read<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t AStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t AStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t AStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

}}} // a::different::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::a::different::ns::AStruct>::clear( ::a::different::ns::AStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::a::different::ns::AStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::a::different::ns::AStruct>::write(Protocol* proto,  ::a::different::ns::AStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::a::different::ns::AStruct>::read(Protocol* proto,  ::a::different::ns::AStruct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::a::different::ns::AStruct>::serializedSize(Protocol const* proto,  ::a::different::ns::AStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::a::different::ns::AStruct>::serializedSizeZC(Protocol const* proto,  ::a::different::ns::AStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace a { namespace different { namespace ns {
class AStructB : private apache::thrift::detail::st::ComparisonOperators<AStructB> {
 public:

  AStructB() {}
  // FragileConstructor for use in initialization lists only.
  AStructB(apache::thrift::FragileConstructor, std::shared_ptr<const  ::a::different::ns::AStruct> FieldA__arg);
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  AStructB(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    AStructB(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    FieldA = std::make_shared<folly::_t<std::decay<T__ThriftWrappedArgument__Ctor>>>(arg.move());
  }

  AStructB(AStructB&&) = default;

  AStructB(const AStructB&) = default;

  AStructB& operator=(AStructB&&) = default;

  AStructB& operator=(const AStructB&) = default;
  void __clear();

  virtual ~AStructB() {}

  std::shared_ptr<const  ::a::different::ns::AStruct> FieldA;

  struct __isset {
    __isset() { __clear(); }

    void __clear() {}

  } __isset;
  bool operator==(const AStructB& rhs) const;

  bool operator < (const AStructB& rhs) const {
    if (!(FieldA == rhs.FieldA)) {
      return FieldA < rhs.FieldA;
    }
    (void)rhs;
    return false;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(AStructB& a, AStructB& b);
extern template uint32_t AStructB::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t AStructB::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t AStructB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t AStructB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t AStructB::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t AStructB::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t AStructB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t AStructB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t AStructB::read<>(apache::thrift::SimpleJSONProtocolReader*);
extern template uint32_t AStructB::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
extern template uint32_t AStructB::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
extern template uint32_t AStructB::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

}}} // a::different::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::a::different::ns::AStructB>::clear( ::a::different::ns::AStructB* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::a::different::ns::AStructB>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::a::different::ns::AStructB>::write(Protocol* proto,  ::a::different::ns::AStructB const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::a::different::ns::AStructB>::read(Protocol* proto,  ::a::different::ns::AStructB* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::a::different::ns::AStructB>::serializedSize(Protocol const* proto,  ::a::different::ns::AStructB const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::a::different::ns::AStructB>::serializedSizeZC(Protocol const* proto,  ::a::different::ns::AStructB const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
