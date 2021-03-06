// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AccountData.proto

#ifndef PROTOBUF_AccountData_2eproto__INCLUDED
#define PROTOBUF_AccountData_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace protobuf_AccountData_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsAccountDataImpl();
void InitDefaultsAccountData();
inline void InitDefaults() {
  InitDefaultsAccountData();
}
}  // namespace protobuf_AccountData_2eproto
namespace opentxs {
namespace proto {
class AccountData;
class AccountDataDefaultTypeInternal;
extern AccountDataDefaultTypeInternal _AccountData_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class AccountData : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.AccountData) */ {
 public:
  AccountData();
  virtual ~AccountData();

  AccountData(const AccountData& from);

  inline AccountData& operator=(const AccountData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AccountData(AccountData&& from) noexcept
    : AccountData() {
    *this = ::std::move(from);
  }

  inline AccountData& operator=(AccountData&& from) noexcept {
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

  static const AccountData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AccountData* internal_default_instance() {
    return reinterpret_cast<const AccountData*>(
               &_AccountData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(AccountData* other);
  friend void swap(AccountData& a, AccountData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AccountData* New() const PROTOBUF_FINAL { return New(NULL); }

  AccountData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const AccountData& from);
  void MergeFrom(const AccountData& from);
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
  void InternalSwap(AccountData* other);
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

  // optional string id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional string label = 3;
  bool has_label() const;
  void clear_label();
  static const int kLabelFieldNumber = 3;
  const ::std::string& label() const;
  void set_label(const ::std::string& value);
  #if LANG_CXX11
  void set_label(::std::string&& value);
  #endif
  void set_label(const char* value);
  void set_label(const char* value, size_t size);
  ::std::string* mutable_label();
  ::std::string* release_label();
  void set_allocated_label(::std::string* label);

  // optional string unit = 4;
  bool has_unit() const;
  void clear_unit();
  static const int kUnitFieldNumber = 4;
  const ::std::string& unit() const;
  void set_unit(const ::std::string& value);
  #if LANG_CXX11
  void set_unit(::std::string&& value);
  #endif
  void set_unit(const char* value);
  void set_unit(const char* value, size_t size);
  ::std::string* mutable_unit();
  ::std::string* release_unit();
  void set_allocated_unit(::std::string* unit);

  // optional string owner = 5;
  bool has_owner() const;
  void clear_owner();
  static const int kOwnerFieldNumber = 5;
  const ::std::string& owner() const;
  void set_owner(const ::std::string& value);
  #if LANG_CXX11
  void set_owner(::std::string&& value);
  #endif
  void set_owner(const char* value);
  void set_owner(const char* value, size_t size);
  ::std::string* mutable_owner();
  ::std::string* release_owner();
  void set_allocated_owner(::std::string* owner);

  // optional string issuer = 6;
  bool has_issuer() const;
  void clear_issuer();
  static const int kIssuerFieldNumber = 6;
  const ::std::string& issuer() const;
  void set_issuer(const ::std::string& value);
  #if LANG_CXX11
  void set_issuer(::std::string&& value);
  #endif
  void set_issuer(const char* value);
  void set_issuer(const char* value, size_t size);
  ::std::string* mutable_issuer();
  ::std::string* release_issuer();
  void set_allocated_issuer(::std::string* issuer);

  // optional uint64 balance = 7;
  bool has_balance() const;
  void clear_balance();
  static const int kBalanceFieldNumber = 7;
  ::google::protobuf::uint64 balance() const;
  void set_balance(::google::protobuf::uint64 value);

  // optional uint64 pendingbalance = 8;
  bool has_pendingbalance() const;
  void clear_pendingbalance();
  static const int kPendingbalanceFieldNumber = 8;
  ::google::protobuf::uint64 pendingbalance() const;
  void set_pendingbalance(::google::protobuf::uint64 value);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.AccountData)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();
  void set_has_label();
  void clear_has_label();
  void set_has_unit();
  void clear_has_unit();
  void set_has_owner();
  void clear_has_owner();
  void set_has_issuer();
  void clear_has_issuer();
  void set_has_balance();
  void clear_has_balance();
  void set_has_pendingbalance();
  void clear_has_pendingbalance();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr label_;
  ::google::protobuf::internal::ArenaStringPtr unit_;
  ::google::protobuf::internal::ArenaStringPtr owner_;
  ::google::protobuf::internal::ArenaStringPtr issuer_;
  ::google::protobuf::uint64 balance_;
  ::google::protobuf::uint64 pendingbalance_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_AccountData_2eproto::TableStruct;
  friend void ::protobuf_AccountData_2eproto::InitDefaultsAccountDataImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AccountData

// optional uint32 version = 1;
inline bool AccountData::has_version() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void AccountData::set_has_version() {
  _has_bits_[0] |= 0x00000080u;
}
inline void AccountData::clear_has_version() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void AccountData::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 AccountData::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountData.version)
  return version_;
}
inline void AccountData::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountData.version)
}

// optional string id = 2;
inline bool AccountData::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AccountData::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AccountData::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AccountData::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& AccountData::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountData.id)
  return id_.GetNoArena();
}
inline void AccountData::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountData.id)
}
#if LANG_CXX11
inline void AccountData::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AccountData.id)
}
#endif
inline void AccountData::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AccountData.id)
}
inline void AccountData::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AccountData.id)
}
inline ::std::string* AccountData::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AccountData.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountData::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AccountData.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountData::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AccountData.id)
}

// optional string label = 3;
inline bool AccountData::has_label() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AccountData::set_has_label() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AccountData::clear_has_label() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AccountData::clear_label() {
  label_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_label();
}
inline const ::std::string& AccountData::label() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountData.label)
  return label_.GetNoArena();
}
inline void AccountData::set_label(const ::std::string& value) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountData.label)
}
#if LANG_CXX11
inline void AccountData::set_label(::std::string&& value) {
  set_has_label();
  label_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AccountData.label)
}
#endif
inline void AccountData::set_label(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AccountData.label)
}
inline void AccountData::set_label(const char* value, size_t size) {
  set_has_label();
  label_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AccountData.label)
}
inline ::std::string* AccountData::mutable_label() {
  set_has_label();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AccountData.label)
  return label_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountData::release_label() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AccountData.label)
  clear_has_label();
  return label_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountData::set_allocated_label(::std::string* label) {
  if (label != NULL) {
    set_has_label();
  } else {
    clear_has_label();
  }
  label_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), label);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AccountData.label)
}

// optional string unit = 4;
inline bool AccountData::has_unit() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AccountData::set_has_unit() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AccountData::clear_has_unit() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AccountData::clear_unit() {
  unit_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_unit();
}
inline const ::std::string& AccountData::unit() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountData.unit)
  return unit_.GetNoArena();
}
inline void AccountData::set_unit(const ::std::string& value) {
  set_has_unit();
  unit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountData.unit)
}
#if LANG_CXX11
inline void AccountData::set_unit(::std::string&& value) {
  set_has_unit();
  unit_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AccountData.unit)
}
#endif
inline void AccountData::set_unit(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_unit();
  unit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AccountData.unit)
}
inline void AccountData::set_unit(const char* value, size_t size) {
  set_has_unit();
  unit_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AccountData.unit)
}
inline ::std::string* AccountData::mutable_unit() {
  set_has_unit();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AccountData.unit)
  return unit_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountData::release_unit() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AccountData.unit)
  clear_has_unit();
  return unit_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountData::set_allocated_unit(::std::string* unit) {
  if (unit != NULL) {
    set_has_unit();
  } else {
    clear_has_unit();
  }
  unit_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), unit);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AccountData.unit)
}

// optional string owner = 5;
inline bool AccountData::has_owner() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AccountData::set_has_owner() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AccountData::clear_has_owner() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AccountData::clear_owner() {
  owner_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_owner();
}
inline const ::std::string& AccountData::owner() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountData.owner)
  return owner_.GetNoArena();
}
inline void AccountData::set_owner(const ::std::string& value) {
  set_has_owner();
  owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountData.owner)
}
#if LANG_CXX11
inline void AccountData::set_owner(::std::string&& value) {
  set_has_owner();
  owner_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AccountData.owner)
}
#endif
inline void AccountData::set_owner(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_owner();
  owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AccountData.owner)
}
inline void AccountData::set_owner(const char* value, size_t size) {
  set_has_owner();
  owner_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AccountData.owner)
}
inline ::std::string* AccountData::mutable_owner() {
  set_has_owner();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AccountData.owner)
  return owner_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountData::release_owner() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AccountData.owner)
  clear_has_owner();
  return owner_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountData::set_allocated_owner(::std::string* owner) {
  if (owner != NULL) {
    set_has_owner();
  } else {
    clear_has_owner();
  }
  owner_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), owner);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AccountData.owner)
}

// optional string issuer = 6;
inline bool AccountData::has_issuer() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AccountData::set_has_issuer() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AccountData::clear_has_issuer() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AccountData::clear_issuer() {
  issuer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_issuer();
}
inline const ::std::string& AccountData::issuer() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountData.issuer)
  return issuer_.GetNoArena();
}
inline void AccountData::set_issuer(const ::std::string& value) {
  set_has_issuer();
  issuer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountData.issuer)
}
#if LANG_CXX11
inline void AccountData::set_issuer(::std::string&& value) {
  set_has_issuer();
  issuer_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.AccountData.issuer)
}
#endif
inline void AccountData::set_issuer(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_issuer();
  issuer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.AccountData.issuer)
}
inline void AccountData::set_issuer(const char* value, size_t size) {
  set_has_issuer();
  issuer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.AccountData.issuer)
}
inline ::std::string* AccountData::mutable_issuer() {
  set_has_issuer();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.AccountData.issuer)
  return issuer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AccountData::release_issuer() {
  // @@protoc_insertion_point(field_release:opentxs.proto.AccountData.issuer)
  clear_has_issuer();
  return issuer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AccountData::set_allocated_issuer(::std::string* issuer) {
  if (issuer != NULL) {
    set_has_issuer();
  } else {
    clear_has_issuer();
  }
  issuer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), issuer);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.AccountData.issuer)
}

// optional uint64 balance = 7;
inline bool AccountData::has_balance() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AccountData::set_has_balance() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AccountData::clear_has_balance() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AccountData::clear_balance() {
  balance_ = GOOGLE_ULONGLONG(0);
  clear_has_balance();
}
inline ::google::protobuf::uint64 AccountData::balance() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountData.balance)
  return balance_;
}
inline void AccountData::set_balance(::google::protobuf::uint64 value) {
  set_has_balance();
  balance_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountData.balance)
}

// optional uint64 pendingbalance = 8;
inline bool AccountData::has_pendingbalance() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void AccountData::set_has_pendingbalance() {
  _has_bits_[0] |= 0x00000040u;
}
inline void AccountData::clear_has_pendingbalance() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void AccountData::clear_pendingbalance() {
  pendingbalance_ = GOOGLE_ULONGLONG(0);
  clear_has_pendingbalance();
}
inline ::google::protobuf::uint64 AccountData::pendingbalance() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.AccountData.pendingbalance)
  return pendingbalance_;
}
inline void AccountData::set_pendingbalance(::google::protobuf::uint64 value) {
  set_has_pendingbalance();
  pendingbalance_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.AccountData.pendingbalance)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AccountData_2eproto__INCLUDED
