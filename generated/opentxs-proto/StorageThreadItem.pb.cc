// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StorageThreadItem.proto

#include "StorageThreadItem.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace opentxs {
namespace proto {
class StorageThreadItemDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StorageThreadItem>
      _instance;
} _StorageThreadItem_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_StorageThreadItem_2eproto {
void InitDefaultsStorageThreadItemImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::opentxs::proto::_StorageThreadItem_default_instance_;
    new (ptr) ::opentxs::proto::StorageThreadItem();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::StorageThreadItem::InitAsDefaultInstance();
}

void InitDefaultsStorageThreadItem() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsStorageThreadItemImpl);
}

}  // namespace protobuf_StorageThreadItem_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void StorageThreadItem::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StorageThreadItem::kVersionFieldNumber;
const int StorageThreadItem::kIdFieldNumber;
const int StorageThreadItem::kIndexFieldNumber;
const int StorageThreadItem::kTimeFieldNumber;
const int StorageThreadItem::kBoxFieldNumber;
const int StorageThreadItem::kAccountFieldNumber;
const int StorageThreadItem::kUnreadFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StorageThreadItem::StorageThreadItem()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_StorageThreadItem_2eproto::InitDefaultsStorageThreadItem();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.StorageThreadItem)
}
StorageThreadItem::StorageThreadItem(const StorageThreadItem& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_id()) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  account_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_account()) {
    account_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.account_);
  }
  ::memcpy(&index_, &from.index_,
    static_cast<size_t>(reinterpret_cast<char*>(&unread_) -
    reinterpret_cast<char*>(&index_)) + sizeof(unread_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.StorageThreadItem)
}

void StorageThreadItem::SharedCtor() {
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&index_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&unread_) -
      reinterpret_cast<char*>(&index_)) + sizeof(unread_));
}

StorageThreadItem::~StorageThreadItem() {
  // @@protoc_insertion_point(destructor:opentxs.proto.StorageThreadItem)
  SharedDtor();
}

void StorageThreadItem::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  account_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void StorageThreadItem::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const StorageThreadItem& StorageThreadItem::default_instance() {
  ::protobuf_StorageThreadItem_2eproto::InitDefaultsStorageThreadItem();
  return *internal_default_instance();
}

StorageThreadItem* StorageThreadItem::New(::google::protobuf::Arena* arena) const {
  StorageThreadItem* n = new StorageThreadItem;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StorageThreadItem::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.StorageThreadItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*id_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!account_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*account_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 124u) {
    ::memset(&index_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&unread_) -
        reinterpret_cast<char*>(&index_)) + sizeof(unread_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool StorageThreadItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.StorageThreadItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_version();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 index = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_index();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 time = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint32 box = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {
          set_has_box();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &box_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string account = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool unread = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {
          set_has_unread();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &unread_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:opentxs.proto.StorageThreadItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.StorageThreadItem)
  return false;
#undef DO_
}

void StorageThreadItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.StorageThreadItem)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional string id = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->id(), output);
  }

  // optional uint64 index = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->index(), output);
  }

  // optional uint64 time = 4;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->time(), output);
  }

  // optional uint32 box = 5;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->box(), output);
  }

  // optional string account = 6;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->account(), output);
  }

  // optional bool unread = 7;
  if (cached_has_bits & 0x00000040u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(7, this->unread(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.StorageThreadItem)
}

size_t StorageThreadItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.StorageThreadItem)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 127u) {
    // optional string id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional string account = 6;
    if (has_account()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->account());
    }

    // optional uint64 index = 3;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->index());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional uint32 box = 5;
    if (has_box()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->box());
    }

    // optional uint64 time = 4;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->time());
    }

    // optional bool unread = 7;
    if (has_unread()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StorageThreadItem::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const StorageThreadItem*>(&from));
}

void StorageThreadItem::MergeFrom(const StorageThreadItem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.StorageThreadItem)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 127u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_id();
      id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_account();
      account_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.account_);
    }
    if (cached_has_bits & 0x00000004u) {
      index_ = from.index_;
    }
    if (cached_has_bits & 0x00000008u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000010u) {
      box_ = from.box_;
    }
    if (cached_has_bits & 0x00000020u) {
      time_ = from.time_;
    }
    if (cached_has_bits & 0x00000040u) {
      unread_ = from.unread_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void StorageThreadItem::CopyFrom(const StorageThreadItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.StorageThreadItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StorageThreadItem::IsInitialized() const {
  return true;
}

void StorageThreadItem::Swap(StorageThreadItem* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StorageThreadItem::InternalSwap(StorageThreadItem* other) {
  using std::swap;
  id_.Swap(&other->id_);
  account_.Swap(&other->account_);
  swap(index_, other->index_);
  swap(version_, other->version_);
  swap(box_, other->box_);
  swap(time_, other->time_);
  swap(unread_, other->unread_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string StorageThreadItem::GetTypeName() const {
  return "opentxs.proto.StorageThreadItem";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)