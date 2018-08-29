// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Verification.proto

#ifndef PROTOBUF_Verification_2eproto__INCLUDED
#define PROTOBUF_Verification_2eproto__INCLUDED

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
#include "Signature.pb.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_Verification_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsVerificationImpl();
void InitDefaultsVerification();
inline void InitDefaults() {
  InitDefaultsVerification();
}
}  // namespace protobuf_Verification_2eproto
namespace opentxs {
namespace proto {
class Verification;
class VerificationDefaultTypeInternal;
extern VerificationDefaultTypeInternal _Verification_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class Verification : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.Verification) */ {
 public:
  Verification();
  virtual ~Verification();

  Verification(const Verification& from);

  inline Verification& operator=(const Verification& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Verification(Verification&& from) noexcept
    : Verification() {
    *this = ::std::move(from);
  }

  inline Verification& operator=(Verification&& from) noexcept {
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

  static const Verification& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Verification* internal_default_instance() {
    return reinterpret_cast<const Verification*>(
               &_Verification_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Verification* other);
  friend void swap(Verification& a, Verification& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Verification* New() const PROTOBUF_FINAL { return New(NULL); }

  Verification* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Verification& from);
  void MergeFrom(const Verification& from);
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
  void InternalSwap(Verification* other);
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

  // optional string claim = 3;
  bool has_claim() const;
  void clear_claim();
  static const int kClaimFieldNumber = 3;
  const ::std::string& claim() const;
  void set_claim(const ::std::string& value);
  #if LANG_CXX11
  void set_claim(::std::string&& value);
  #endif
  void set_claim(const char* value);
  void set_claim(const char* value, size_t size);
  ::std::string* mutable_claim();
  ::std::string* release_claim();
  void set_allocated_claim(::std::string* claim);

  // optional .opentxs.proto.Signature sig = 7;
  bool has_sig() const;
  void clear_sig();
  static const int kSigFieldNumber = 7;
  const ::opentxs::proto::Signature& sig() const;
  ::opentxs::proto::Signature* release_sig();
  ::opentxs::proto::Signature* mutable_sig();
  void set_allocated_sig(::opentxs::proto::Signature* sig);

  // optional sint64 start = 5;
  bool has_start() const;
  void clear_start();
  static const int kStartFieldNumber = 5;
  ::google::protobuf::int64 start() const;
  void set_start(::google::protobuf::int64 value);

  // optional sint64 end = 6;
  bool has_end() const;
  void clear_end();
  static const int kEndFieldNumber = 6;
  ::google::protobuf::int64 end() const;
  void set_end(::google::protobuf::int64 value);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional bool valid = 4;
  bool has_valid() const;
  void clear_valid();
  static const int kValidFieldNumber = 4;
  bool valid() const;
  void set_valid(bool value);

  // optional bool retracted = 15;
  bool has_retracted() const;
  void clear_retracted();
  static const int kRetractedFieldNumber = 15;
  bool retracted() const;
  void set_retracted(bool value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.Verification)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();
  void set_has_claim();
  void clear_has_claim();
  void set_has_valid();
  void clear_has_valid();
  void set_has_start();
  void clear_has_start();
  void set_has_end();
  void clear_has_end();
  void set_has_sig();
  void clear_has_sig();
  void set_has_retracted();
  void clear_has_retracted();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr claim_;
  ::opentxs::proto::Signature* sig_;
  ::google::protobuf::int64 start_;
  ::google::protobuf::int64 end_;
  ::google::protobuf::uint32 version_;
  bool valid_;
  bool retracted_;
  friend struct ::protobuf_Verification_2eproto::TableStruct;
  friend void ::protobuf_Verification_2eproto::InitDefaultsVerificationImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Verification

// optional uint32 version = 1;
inline bool Verification::has_version() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Verification::set_has_version() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Verification::clear_has_version() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Verification::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 Verification::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Verification.version)
  return version_;
}
inline void Verification::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Verification.version)
}

// optional string id = 2;
inline bool Verification::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Verification::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Verification::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Verification::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& Verification::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Verification.id)
  return id_.GetNoArena();
}
inline void Verification::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Verification.id)
}
#if LANG_CXX11
inline void Verification::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Verification.id)
}
#endif
inline void Verification::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Verification.id)
}
inline void Verification::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Verification.id)
}
inline ::std::string* Verification::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Verification.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Verification::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Verification.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Verification::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Verification.id)
}

// optional string claim = 3;
inline bool Verification::has_claim() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Verification::set_has_claim() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Verification::clear_has_claim() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Verification::clear_claim() {
  claim_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_claim();
}
inline const ::std::string& Verification::claim() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Verification.claim)
  return claim_.GetNoArena();
}
inline void Verification::set_claim(const ::std::string& value) {
  set_has_claim();
  claim_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.Verification.claim)
}
#if LANG_CXX11
inline void Verification::set_claim(::std::string&& value) {
  set_has_claim();
  claim_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.Verification.claim)
}
#endif
inline void Verification::set_claim(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_claim();
  claim_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.Verification.claim)
}
inline void Verification::set_claim(const char* value, size_t size) {
  set_has_claim();
  claim_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.Verification.claim)
}
inline ::std::string* Verification::mutable_claim() {
  set_has_claim();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Verification.claim)
  return claim_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Verification::release_claim() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Verification.claim)
  clear_has_claim();
  return claim_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Verification::set_allocated_claim(::std::string* claim) {
  if (claim != NULL) {
    set_has_claim();
  } else {
    clear_has_claim();
  }
  claim_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), claim);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Verification.claim)
}

// optional bool valid = 4;
inline bool Verification::has_valid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Verification::set_has_valid() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Verification::clear_has_valid() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Verification::clear_valid() {
  valid_ = false;
  clear_has_valid();
}
inline bool Verification::valid() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Verification.valid)
  return valid_;
}
inline void Verification::set_valid(bool value) {
  set_has_valid();
  valid_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Verification.valid)
}

// optional sint64 start = 5;
inline bool Verification::has_start() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Verification::set_has_start() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Verification::clear_has_start() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Verification::clear_start() {
  start_ = GOOGLE_LONGLONG(0);
  clear_has_start();
}
inline ::google::protobuf::int64 Verification::start() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Verification.start)
  return start_;
}
inline void Verification::set_start(::google::protobuf::int64 value) {
  set_has_start();
  start_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Verification.start)
}

// optional sint64 end = 6;
inline bool Verification::has_end() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Verification::set_has_end() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Verification::clear_has_end() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Verification::clear_end() {
  end_ = GOOGLE_LONGLONG(0);
  clear_has_end();
}
inline ::google::protobuf::int64 Verification::end() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Verification.end)
  return end_;
}
inline void Verification::set_end(::google::protobuf::int64 value) {
  set_has_end();
  end_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Verification.end)
}

// optional .opentxs.proto.Signature sig = 7;
inline bool Verification::has_sig() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Verification::set_has_sig() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Verification::clear_has_sig() {
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::opentxs::proto::Signature& Verification::sig() const {
  const ::opentxs::proto::Signature* p = sig_;
  // @@protoc_insertion_point(field_get:opentxs.proto.Verification.sig)
  return p != NULL ? *p : *reinterpret_cast<const ::opentxs::proto::Signature*>(
      &::opentxs::proto::_Signature_default_instance_);
}
inline ::opentxs::proto::Signature* Verification::release_sig() {
  // @@protoc_insertion_point(field_release:opentxs.proto.Verification.sig)
  clear_has_sig();
  ::opentxs::proto::Signature* temp = sig_;
  sig_ = NULL;
  return temp;
}
inline ::opentxs::proto::Signature* Verification::mutable_sig() {
  set_has_sig();
  if (sig_ == NULL) {
    sig_ = new ::opentxs::proto::Signature;
  }
  // @@protoc_insertion_point(field_mutable:opentxs.proto.Verification.sig)
  return sig_;
}
inline void Verification::set_allocated_sig(::opentxs::proto::Signature* sig) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(sig_);
  }
  if (sig) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      sig = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, sig, submessage_arena);
    }
    set_has_sig();
  } else {
    clear_has_sig();
  }
  sig_ = sig;
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.Verification.sig)
}

// optional bool retracted = 15;
inline bool Verification::has_retracted() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Verification::set_has_retracted() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Verification::clear_has_retracted() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Verification::clear_retracted() {
  retracted_ = false;
  clear_has_retracted();
}
inline bool Verification::retracted() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.Verification.retracted)
  return retracted_;
}
inline void Verification::set_retracted(bool value) {
  set_has_retracted();
  retracted_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.Verification.retracted)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Verification_2eproto__INCLUDED