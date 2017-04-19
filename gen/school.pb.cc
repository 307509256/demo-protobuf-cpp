// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: school.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "school.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace school {

namespace {

const ::google::protobuf::Descriptor* Room_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Room_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_school_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_school_2eproto() {
  protobuf_AddDesc_school_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "school.proto");
  GOOGLE_CHECK(file != NULL);
  Room_descriptor_ = file->message_type(0);
  static const int Room_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, room_),
  };
  Room_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Room_descriptor_,
      Room::default_instance_,
      Room_offsets_,
      -1,
      -1,
      -1,
      sizeof(Room),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Room, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_school_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Room_descriptor_, &Room::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_school_2eproto() {
  delete Room::default_instance_;
  delete Room_reflection_;
}

void protobuf_AddDesc_school_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_school_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014school.proto\022\006school\" \n\004Room\022\n\n\002id\030\001 \001"
    "(\005\022\014\n\004room\030\002 \001(\tb\006proto3", 64);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "school.proto", &protobuf_RegisterTypes);
  Room::default_instance_ = new Room();
  Room::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_school_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_school_2eproto {
  StaticDescriptorInitializer_school_2eproto() {
    protobuf_AddDesc_school_2eproto();
  }
} static_descriptor_initializer_school_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Room::kIdFieldNumber;
const int Room::kRoomFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Room::Room()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:school.Room)
}

void Room::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Room::Room(const Room& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:school.Room)
}

void Room::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  room_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Room::~Room() {
  // @@protoc_insertion_point(destructor:school.Room)
  SharedDtor();
}

void Room::SharedDtor() {
  room_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Room::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Room::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Room_descriptor_;
}

const Room& Room::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_school_2eproto();
  return *default_instance_;
}

Room* Room::default_instance_ = NULL;

Room* Room::New(::google::protobuf::Arena* arena) const {
  Room* n = new Room;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Room::Clear() {
// @@protoc_insertion_point(message_clear_start:school.Room)
  id_ = 0;
  room_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Room::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:school.Room)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_room;
        break;
      }

      // optional string room = 2;
      case 2: {
        if (tag == 18) {
         parse_room:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_room()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->room().data(), this->room().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "school.Room.room"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:school.Room)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:school.Room)
  return false;
#undef DO_
}

void Room::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:school.Room)
  // optional int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string room = 2;
  if (this->room().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->room().data(), this->room().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "school.Room.room");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->room(), output);
  }

  // @@protoc_insertion_point(serialize_end:school.Room)
}

::google::protobuf::uint8* Room::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:school.Room)
  // optional int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string room = 2;
  if (this->room().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->room().data(), this->room().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "school.Room.room");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->room(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:school.Room)
  return target;
}

int Room::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:school.Room)
  int total_size = 0;

  // optional int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // optional string room = 2;
  if (this->room().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->room());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Room::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:school.Room)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Room* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Room>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:school.Room)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:school.Room)
    MergeFrom(*source);
  }
}

void Room::MergeFrom(const Room& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:school.Room)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.room().size() > 0) {

    room_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.room_);
  }
}

void Room::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:school.Room)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Room::CopyFrom(const Room& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:school.Room)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Room::IsInitialized() const {

  return true;
}

void Room::Swap(Room* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Room::InternalSwap(Room* other) {
  std::swap(id_, other->id_);
  room_.Swap(&other->room_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Room::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Room_descriptor_;
  metadata.reflection = Room_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Room

// optional int32 id = 1;
void Room::clear_id() {
  id_ = 0;
}
 ::google::protobuf::int32 Room::id() const {
  // @@protoc_insertion_point(field_get:school.Room.id)
  return id_;
}
 void Room::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:school.Room.id)
}

// optional string room = 2;
void Room::clear_room() {
  room_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Room::room() const {
  // @@protoc_insertion_point(field_get:school.Room.room)
  return room_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Room::set_room(const ::std::string& value) {
  
  room_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:school.Room.room)
}
 void Room::set_room(const char* value) {
  
  room_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:school.Room.room)
}
 void Room::set_room(const char* value, size_t size) {
  
  room_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:school.Room.room)
}
 ::std::string* Room::mutable_room() {
  
  // @@protoc_insertion_point(field_mutable:school.Room.room)
  return room_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Room::release_room() {
  // @@protoc_insertion_point(field_release:school.Room.room)
  
  return room_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Room::set_allocated_room(::std::string* room) {
  if (room != NULL) {
    
  } else {
    
  }
  room_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), room);
  // @@protoc_insertion_point(field_set_allocated:school.Room.room)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace school

// @@protoc_insertion_point(global_scope)
