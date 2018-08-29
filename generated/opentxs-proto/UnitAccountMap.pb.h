// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UnitAccountMap.proto

#ifndef PROTOBUF_UnitAccountMap_2eproto__INCLUDED
#define PROTOBUF_UnitAccountMap_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "ContactEnums.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_UnitAccountMap_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsUnitAccountMapImpl();
void InitDefaultsUnitAccountMap();
inline void InitDefaults() {
  InitDefaultsUnitAccountMap();
}
}  // namespace protobuf_UnitAccountMap_2eproto
namespace opentxs {
namespace proto {
class UnitAccountMap;
class UnitAccountMapDefaultTypeInternal;
extern UnitAccountMapDefaultTypeInternal _UnitAccountMap_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class UnitAccountMap : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.UnitAccountMap) */ {
 public:
  UnitAccountMap();
  virtual ~UnitAccountMap();

  UnitAccountMap(const UnitAccountMap& from);

  inline UnitAccountMap& operator=(const UnitAccountMap& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UnitAccountMap(UnitAccountMap&& from) noexcept
    : UnitAccountMap() {
    *this = ::std::move(from);
  }

  inline UnitAccountMap& operator=(UnitAccountMap&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const UnitAccountMap& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnitAccountMap* internal_default_instance() {
    return reinterpret_cast<const UnitAccountMap*>(
               &_UnitAccountMap_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(UnitAccountMap* other);
  friend void swap(UnitAccountMap& a, UnitAccountMap& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UnitAccountMap* New() const PROTOBUF_FINAL { return New(NULL); }

  UnitAccountMap* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const UnitAccountMap& from);
  void MergeFrom(const UnitAccountMap& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UnitAccountMap* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string unitdefinitionid = 3;
  bool has_unitdefinitionid() const;
  void clear_unitdefinitionid();
  static const int kUnitdefinitionidFieldNumber = 3;
  const ::std::string& unitdefinitionid() const;
  void set_unitdefinitionid(const ::std::string& value);
  #if LANG_CXX11
  void set_unitdefinitionid(::std::string&& value);
  #endif
  void set_unitdefinitionid(const char* value);
  void set_unitdefinitionid(const char* value, size_t size);
  ::std::string* mutable_unitdefinitionid();
  ::std::string* release_unitdefinitionid();
  void set_allocated_unitdefinitionid(::std::string* unitdefinitionid);

  // optional string accountid = 4;
  bool has_accountid() const;
  void clear_accountid();
  static const int kAccountidFieldNumber = 4;
  const ::std::string& accountid() const;
  void set_accountid(const ::std::string& value);
  #if LANG_CXX11
  void set_accountid(::std::string&& value);
  #endif
  void set_accountid(const char* value);
  void set_accountid(const char* value, size_t size);
  ::std::string* mutable_accountid();
  ::std::string* release_accountid();
  void set_allocated_accountid(::std::string* accountid);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional .opentxs.proto.ContactItemType type = 2;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::opentxs::proto::ContactItemType type() const;
  void set_type(::opentxs::proto::ContactItemType value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.UnitAccountMap)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_type();
  void clear_has_type();
  void set_has_unitdefinitionid();
  void clear_has_unitdefinitionid();
  void set_has_accountid();
  void clear_has_accountid();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr unitdefinitionid_;
  ::google::protobuf::internal::ArenaStringPtr accountid_;
  ::google::protobuf::uint32 version_;
  int type_;
  friend struct ::protobuf_UnitAccountMap_2eproto::TableStruct;
  friend void ::protobuf_UnitAccountMap_2eproto::InitDefaultsUnitAccountMapImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UnitAccountMap

// optional uint32 version = 1;
inline bool UnitAccountMap::has_version() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UnitAccountMap::set_has_version() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UnitAccountMap::clear_has_version() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UnitAccountMap::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 UnitAccountMap::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.UnitAccountMap.version)
  return version_;
}
inline void UnitAccountMap::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.UnitAccountMap.version)
}

// optional .opentxs.proto.ContactItemType type = 2;
inline bool UnitAccountMap::has_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UnitAccountMap::set_has_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UnitAccountMap::clear_has_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UnitAccountMap::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::opentxs::proto::ContactItemType UnitAccountMap::type() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.UnitAccountMap.type)
  return static_cast< ::opentxs::proto::ContactItemType >(type_);
}
inline void UnitAccountMap::set_type(::opentxs::proto::ContactItemType value) {
  assert(::opentxs::proto::ContactItemType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.UnitAccountMap.type)
}

// optional string unitdefinitionid = 3;
inline bool UnitAccountMap::has_unitdefinitionid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnitAccountMap::set_has_unitdefinitionid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnitAccountMap::clear_has_unitdefinitionid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnitAccountMap::clear_unitdefinitionid() {
  unitdefinitionid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_unitdefinitionid();
}
inline const ::std::string& UnitAccountMap::unitdefinitionid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.UnitAccountMap.unitdefinitionid)
  return unitdefinitionid_.GetNoArena();
}
inline void UnitAccountMap::set_unitdefinitionid(const ::std::string& value) {
  set_has_unitdefinitionid();
  unitdefinitionid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.UnitAccountMap.unitdefinitionid)
}
#if LANG_CXX11
inline void UnitAccountMap::set_unitdefinitionid(::std::string&& value) {
  set_has_unitdefinitionid();
  unitdefinitionid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.UnitAccountMap.unitdefinitionid)
}
#endif
inline void UnitAccountMap::set_unitdefinitionid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_unitdefinitionid();
  unitdefinitionid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.UnitAccountMap.unitdefinitionid)
}
inline void UnitAccountMap::set_unitdefinitionid(const char* value, size_t size) {
  set_has_unitdefinitionid();
  unitdefinitionid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.UnitAccountMap.unitdefinitionid)
}
inline ::std::string* UnitAccountMap::mutable_unitdefinitionid() {
  set_has_unitdefinitionid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.UnitAccountMap.unitdefinitionid)
  return unitdefinitionid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UnitAccountMap::release_unitdefinitionid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.UnitAccountMap.unitdefinitionid)
  clear_has_unitdefinitionid();
  return unitdefinitionid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UnitAccountMap::set_allocated_unitdefinitionid(::std::string* unitdefinitionid) {
  if (unitdefinitionid != NULL) {
    set_has_unitdefinitionid();
  } else {
    clear_has_unitdefinitionid();
  }
  unitdefinitionid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), unitdefinitionid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.UnitAccountMap.unitdefinitionid)
}

// optional string accountid = 4;
inline bool UnitAccountMap::has_accountid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UnitAccountMap::set_has_accountid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UnitAccountMap::clear_has_accountid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UnitAccountMap::clear_accountid() {
  accountid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_accountid();
}
inline const ::std::string& UnitAccountMap::accountid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.UnitAccountMap.accountid)
  return accountid_.GetNoArena();
}
inline void UnitAccountMap::set_accountid(const ::std::string& value) {
  set_has_accountid();
  accountid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.UnitAccountMap.accountid)
}
#if LANG_CXX11
inline void UnitAccountMap::set_accountid(::std::string&& value) {
  set_has_accountid();
  accountid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.UnitAccountMap.accountid)
}
#endif
inline void UnitAccountMap::set_accountid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_accountid();
  accountid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.UnitAccountMap.accountid)
}
inline void UnitAccountMap::set_accountid(const char* value, size_t size) {
  set_has_accountid();
  accountid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.UnitAccountMap.accountid)
}
inline ::std::string* UnitAccountMap::mutable_accountid() {
  set_has_accountid();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.UnitAccountMap.accountid)
  return accountid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UnitAccountMap::release_accountid() {
  // @@protoc_insertion_point(field_release:opentxs.proto.UnitAccountMap.accountid)
  clear_has_accountid();
  return accountid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UnitAccountMap::set_allocated_accountid(::std::string* accountid) {
  if (accountid != NULL) {
    set_has_accountid();
  } else {
    clear_has_accountid();
  }
  accountid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), accountid);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.UnitAccountMap.accountid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_UnitAccountMap_2eproto__INCLUDED