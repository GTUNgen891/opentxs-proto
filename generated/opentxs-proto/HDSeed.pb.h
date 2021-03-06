// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HDSeed.proto

#ifndef PROTOBUF_HDSeed_2eproto__INCLUDED
#define PROTOBUF_HDSeed_2eproto__INCLUDED

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

namespace protobuf_HDSeed_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsHDSeedImpl();
void InitDefaultsHDSeed();
inline void InitDefaults() {
  InitDefaultsHDSeed();
}
}  // namespace protobuf_HDSeed_2eproto
namespace opentxs {
namespace proto {
class HDSeed;
class HDSeedDefaultTypeInternal;
extern HDSeedDefaultTypeInternal _HDSeed_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class HDSeed : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.HDSeed) */ {
 public:
  HDSeed();
  virtual ~HDSeed();

  HDSeed(const HDSeed& from);

  inline HDSeed& operator=(const HDSeed& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  HDSeed(HDSeed&& from) noexcept
    : HDSeed() {
    *this = ::std::move(from);
  }

  inline HDSeed& operator=(HDSeed&& from) noexcept {
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

  static const HDSeed& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const HDSeed* internal_default_instance() {
    return reinterpret_cast<const HDSeed*>(
               &_HDSeed_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(HDSeed* other);
  friend void swap(HDSeed& a, HDSeed& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline HDSeed* New() const PROTOBUF_FINAL { return New(NULL); }

  HDSeed* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const HDSeed& from);
  void MergeFrom(const HDSeed& from);
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
  void InternalSwap(HDSeed* other);
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

  // optional string words = 3;
  bool has_words() const;
  void clear_words();
  static const int kWordsFieldNumber = 3;
  const ::std::string& words() const;
  void set_words(const ::std::string& value);
  #if LANG_CXX11
  void set_words(::std::string&& value);
  #endif
  void set_words(const char* value);
  void set_words(const char* value, size_t size);
  ::std::string* mutable_words();
  ::std::string* release_words();
  void set_allocated_words(::std::string* words);

  // optional string passphrase = 4;
  bool has_passphrase() const;
  void clear_passphrase();
  static const int kPassphraseFieldNumber = 4;
  const ::std::string& passphrase() const;
  void set_passphrase(const ::std::string& value);
  #if LANG_CXX11
  void set_passphrase(::std::string&& value);
  #endif
  void set_passphrase(const char* value);
  void set_passphrase(const char* value, size_t size);
  ::std::string* mutable_passphrase();
  ::std::string* release_passphrase();
  void set_allocated_passphrase(::std::string* passphrase);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.HDSeed)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_id();
  void clear_has_id();
  void set_has_words();
  void clear_has_words();
  void set_has_passphrase();
  void clear_has_passphrase();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr words_;
  ::google::protobuf::internal::ArenaStringPtr passphrase_;
  ::google::protobuf::uint32 version_;
  friend struct ::protobuf_HDSeed_2eproto::TableStruct;
  friend void ::protobuf_HDSeed_2eproto::InitDefaultsHDSeedImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HDSeed

// optional uint32 version = 1;
inline bool HDSeed::has_version() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void HDSeed::set_has_version() {
  _has_bits_[0] |= 0x00000008u;
}
inline void HDSeed::clear_has_version() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void HDSeed::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 HDSeed::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.HDSeed.version)
  return version_;
}
inline void HDSeed::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.HDSeed.version)
}

// optional string id = 2;
inline bool HDSeed::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void HDSeed::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void HDSeed::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void HDSeed::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& HDSeed::id() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.HDSeed.id)
  return id_.GetNoArena();
}
inline void HDSeed::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.HDSeed.id)
}
#if LANG_CXX11
inline void HDSeed::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.HDSeed.id)
}
#endif
inline void HDSeed::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.HDSeed.id)
}
inline void HDSeed::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.HDSeed.id)
}
inline ::std::string* HDSeed::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.HDSeed.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HDSeed::release_id() {
  // @@protoc_insertion_point(field_release:opentxs.proto.HDSeed.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HDSeed::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.HDSeed.id)
}

// optional string words = 3;
inline bool HDSeed::has_words() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void HDSeed::set_has_words() {
  _has_bits_[0] |= 0x00000002u;
}
inline void HDSeed::clear_has_words() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void HDSeed::clear_words() {
  words_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_words();
}
inline const ::std::string& HDSeed::words() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.HDSeed.words)
  return words_.GetNoArena();
}
inline void HDSeed::set_words(const ::std::string& value) {
  set_has_words();
  words_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.HDSeed.words)
}
#if LANG_CXX11
inline void HDSeed::set_words(::std::string&& value) {
  set_has_words();
  words_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.HDSeed.words)
}
#endif
inline void HDSeed::set_words(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_words();
  words_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.HDSeed.words)
}
inline void HDSeed::set_words(const char* value, size_t size) {
  set_has_words();
  words_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.HDSeed.words)
}
inline ::std::string* HDSeed::mutable_words() {
  set_has_words();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.HDSeed.words)
  return words_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HDSeed::release_words() {
  // @@protoc_insertion_point(field_release:opentxs.proto.HDSeed.words)
  clear_has_words();
  return words_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HDSeed::set_allocated_words(::std::string* words) {
  if (words != NULL) {
    set_has_words();
  } else {
    clear_has_words();
  }
  words_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), words);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.HDSeed.words)
}

// optional string passphrase = 4;
inline bool HDSeed::has_passphrase() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void HDSeed::set_has_passphrase() {
  _has_bits_[0] |= 0x00000004u;
}
inline void HDSeed::clear_has_passphrase() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void HDSeed::clear_passphrase() {
  passphrase_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_passphrase();
}
inline const ::std::string& HDSeed::passphrase() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.HDSeed.passphrase)
  return passphrase_.GetNoArena();
}
inline void HDSeed::set_passphrase(const ::std::string& value) {
  set_has_passphrase();
  passphrase_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.HDSeed.passphrase)
}
#if LANG_CXX11
inline void HDSeed::set_passphrase(::std::string&& value) {
  set_has_passphrase();
  passphrase_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.HDSeed.passphrase)
}
#endif
inline void HDSeed::set_passphrase(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_passphrase();
  passphrase_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.HDSeed.passphrase)
}
inline void HDSeed::set_passphrase(const char* value, size_t size) {
  set_has_passphrase();
  passphrase_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.HDSeed.passphrase)
}
inline ::std::string* HDSeed::mutable_passphrase() {
  set_has_passphrase();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.HDSeed.passphrase)
  return passphrase_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* HDSeed::release_passphrase() {
  // @@protoc_insertion_point(field_release:opentxs.proto.HDSeed.passphrase)
  clear_has_passphrase();
  return passphrase_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void HDSeed::set_allocated_passphrase(::std::string* passphrase) {
  if (passphrase != NULL) {
    set_has_passphrase();
  } else {
    clear_has_passphrase();
  }
  passphrase_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), passphrase);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.HDSeed.passphrase)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_HDSeed_2eproto__INCLUDED
