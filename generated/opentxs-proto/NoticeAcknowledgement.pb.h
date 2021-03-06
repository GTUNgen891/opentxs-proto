// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NoticeAcknowledgement.proto

#ifndef PROTOBUF_NoticeAcknowledgement_2eproto__INCLUDED
#define PROTOBUF_NoticeAcknowledgement_2eproto__INCLUDED

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

namespace protobuf_NoticeAcknowledgement_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsNoticeAcknowledgementImpl();
void InitDefaultsNoticeAcknowledgement();
inline void InitDefaults() {
  InitDefaultsNoticeAcknowledgement();
}
}  // namespace protobuf_NoticeAcknowledgement_2eproto
namespace opentxs {
namespace proto {
class NoticeAcknowledgement;
class NoticeAcknowledgementDefaultTypeInternal;
extern NoticeAcknowledgementDefaultTypeInternal _NoticeAcknowledgement_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class NoticeAcknowledgement : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.NoticeAcknowledgement) */ {
 public:
  NoticeAcknowledgement();
  virtual ~NoticeAcknowledgement();

  NoticeAcknowledgement(const NoticeAcknowledgement& from);

  inline NoticeAcknowledgement& operator=(const NoticeAcknowledgement& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NoticeAcknowledgement(NoticeAcknowledgement&& from) noexcept
    : NoticeAcknowledgement() {
    *this = ::std::move(from);
  }

  inline NoticeAcknowledgement& operator=(NoticeAcknowledgement&& from) noexcept {
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

  static const NoticeAcknowledgement& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NoticeAcknowledgement* internal_default_instance() {
    return reinterpret_cast<const NoticeAcknowledgement*>(
               &_NoticeAcknowledgement_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(NoticeAcknowledgement* other);
  friend void swap(NoticeAcknowledgement& a, NoticeAcknowledgement& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NoticeAcknowledgement* New() const PROTOBUF_FINAL { return New(NULL); }

  NoticeAcknowledgement* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const NoticeAcknowledgement& from);
  void MergeFrom(const NoticeAcknowledgement& from);
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
  void InternalSwap(NoticeAcknowledgement* other);
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

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional bool ack = 2;
  bool has_ack() const;
  void clear_ack();
  static const int kAckFieldNumber = 2;
  bool ack() const;
  void set_ack(bool value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.NoticeAcknowledgement)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_ack();
  void clear_has_ack();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 version_;
  bool ack_;
  friend struct ::protobuf_NoticeAcknowledgement_2eproto::TableStruct;
  friend void ::protobuf_NoticeAcknowledgement_2eproto::InitDefaultsNoticeAcknowledgementImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NoticeAcknowledgement

// optional uint32 version = 1;
inline bool NoticeAcknowledgement::has_version() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NoticeAcknowledgement::set_has_version() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NoticeAcknowledgement::clear_has_version() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NoticeAcknowledgement::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 NoticeAcknowledgement::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.NoticeAcknowledgement.version)
  return version_;
}
inline void NoticeAcknowledgement::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.NoticeAcknowledgement.version)
}

// optional bool ack = 2;
inline bool NoticeAcknowledgement::has_ack() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NoticeAcknowledgement::set_has_ack() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NoticeAcknowledgement::clear_has_ack() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NoticeAcknowledgement::clear_ack() {
  ack_ = false;
  clear_has_ack();
}
inline bool NoticeAcknowledgement::ack() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.NoticeAcknowledgement.ack)
  return ack_;
}
inline void NoticeAcknowledgement::set_ack(bool value) {
  set_has_ack();
  ack_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.NoticeAcknowledgement.ack)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_NoticeAcknowledgement_2eproto__INCLUDED
