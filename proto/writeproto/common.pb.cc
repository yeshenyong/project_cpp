// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#include "common.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr RecoSystem_UserEmbedding::RecoSystem_UserEmbedding(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : stringval_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , int32val_(0){}
struct RecoSystem_UserEmbeddingDefaultTypeInternal {
  constexpr RecoSystem_UserEmbeddingDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RecoSystem_UserEmbeddingDefaultTypeInternal() {}
  union {
    RecoSystem_UserEmbedding _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RecoSystem_UserEmbeddingDefaultTypeInternal _RecoSystem_UserEmbedding_default_instance_;
constexpr RecoSystem::RecoSystem(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : repeatedint32val_()
  , _repeatedint32val_cached_byte_size_(0)
  , repeatedstringval_()
  , userid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , bytesval_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , userembedding_(nullptr){}
struct RecoSystemDefaultTypeInternal {
  constexpr RecoSystemDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RecoSystemDefaultTypeInternal() {}
  union {
    RecoSystem _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RecoSystemDefaultTypeInternal _RecoSystem_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_common_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_common_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_common_2eproto = nullptr;

const uint32_t TableStruct_common_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::RecoSystem_UserEmbedding, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::RecoSystem_UserEmbedding, int32val_),
  PROTOBUF_FIELD_OFFSET(::RecoSystem_UserEmbedding, stringval_),
  PROTOBUF_FIELD_OFFSET(::RecoSystem, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::RecoSystem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::RecoSystem, userid_),
  PROTOBUF_FIELD_OFFSET(::RecoSystem, bytesval_),
  PROTOBUF_FIELD_OFFSET(::RecoSystem, userembedding_),
  PROTOBUF_FIELD_OFFSET(::RecoSystem, repeatedint32val_),
  PROTOBUF_FIELD_OFFSET(::RecoSystem, repeatedstringval_),
  0,
  1,
  2,
  ~0u,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::RecoSystem_UserEmbedding)},
  { 8, 19, -1, sizeof(::RecoSystem)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_RecoSystem_UserEmbedding_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_RecoSystem_default_instance_),
};

const char descriptor_table_protodef_common_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014common.proto\"\204\002\n\nRecoSystem\022\023\n\006userId\030"
  "\001 \001(\tH\000\210\001\001\022\025\n\010bytesVal\030\002 \001(\014H\001\210\001\001\0225\n\ruse"
  "rEmbedding\030\003 \001(\0132\031.RecoSystem.UserEmbedd"
  "ingH\002\210\001\001\022\030\n\020repeatedInt32Val\030\004 \003(\005\022\031\n\021re"
  "peatedStringVal\030\005 \003(\t\0324\n\rUserEmbedding\022\020"
  "\n\010int32Val\030\001 \001(\005\022\021\n\tstringVal\030\002 \001(\tB\t\n\007_"
  "userIdB\013\n\t_bytesValB\020\n\016_userEmbeddingb\006p"
  "roto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_common_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2eproto = {
  false, false, 285, descriptor_table_protodef_common_2eproto, "common.proto", 
  &descriptor_table_common_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_common_2eproto::offsets,
  file_level_metadata_common_2eproto, file_level_enum_descriptors_common_2eproto, file_level_service_descriptors_common_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_common_2eproto_getter() {
  return &descriptor_table_common_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_common_2eproto(&descriptor_table_common_2eproto);

// ===================================================================

class RecoSystem_UserEmbedding::_Internal {
 public:
};

RecoSystem_UserEmbedding::RecoSystem_UserEmbedding(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:RecoSystem.UserEmbedding)
}
RecoSystem_UserEmbedding::RecoSystem_UserEmbedding(const RecoSystem_UserEmbedding& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  stringval_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    stringval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_stringval().empty()) {
    stringval_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_stringval(), 
      GetArenaForAllocation());
  }
  int32val_ = from.int32val_;
  // @@protoc_insertion_point(copy_constructor:RecoSystem.UserEmbedding)
}

inline void RecoSystem_UserEmbedding::SharedCtor() {
stringval_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  stringval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
int32val_ = 0;
}

RecoSystem_UserEmbedding::~RecoSystem_UserEmbedding() {
  // @@protoc_insertion_point(destructor:RecoSystem.UserEmbedding)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void RecoSystem_UserEmbedding::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  stringval_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void RecoSystem_UserEmbedding::ArenaDtor(void* object) {
  RecoSystem_UserEmbedding* _this = reinterpret_cast< RecoSystem_UserEmbedding* >(object);
  (void)_this;
}
void RecoSystem_UserEmbedding::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RecoSystem_UserEmbedding::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RecoSystem_UserEmbedding::Clear() {
// @@protoc_insertion_point(message_clear_start:RecoSystem.UserEmbedding)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  stringval_.ClearToEmpty();
  int32val_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RecoSystem_UserEmbedding::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 int32Val = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          int32val_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string stringVal = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_stringval();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "RecoSystem.UserEmbedding.stringVal"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* RecoSystem_UserEmbedding::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RecoSystem.UserEmbedding)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 int32Val = 1;
  if (this->_internal_int32val() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_int32val(), target);
  }

  // string stringVal = 2;
  if (!this->_internal_stringval().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_stringval().data(), static_cast<int>(this->_internal_stringval().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "RecoSystem.UserEmbedding.stringVal");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_stringval(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RecoSystem.UserEmbedding)
  return target;
}

size_t RecoSystem_UserEmbedding::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RecoSystem.UserEmbedding)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string stringVal = 2;
  if (!this->_internal_stringval().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_stringval());
  }

  // int32 int32Val = 1;
  if (this->_internal_int32val() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_int32val());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RecoSystem_UserEmbedding::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    RecoSystem_UserEmbedding::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RecoSystem_UserEmbedding::GetClassData() const { return &_class_data_; }

void RecoSystem_UserEmbedding::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<RecoSystem_UserEmbedding *>(to)->MergeFrom(
      static_cast<const RecoSystem_UserEmbedding &>(from));
}


void RecoSystem_UserEmbedding::MergeFrom(const RecoSystem_UserEmbedding& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RecoSystem.UserEmbedding)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_stringval().empty()) {
    _internal_set_stringval(from._internal_stringval());
  }
  if (from._internal_int32val() != 0) {
    _internal_set_int32val(from._internal_int32val());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RecoSystem_UserEmbedding::CopyFrom(const RecoSystem_UserEmbedding& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RecoSystem.UserEmbedding)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RecoSystem_UserEmbedding::IsInitialized() const {
  return true;
}

void RecoSystem_UserEmbedding::InternalSwap(RecoSystem_UserEmbedding* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &stringval_, lhs_arena,
      &other->stringval_, rhs_arena
  );
  swap(int32val_, other->int32val_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RecoSystem_UserEmbedding::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_common_2eproto_getter, &descriptor_table_common_2eproto_once,
      file_level_metadata_common_2eproto[0]);
}

// ===================================================================

class RecoSystem::_Internal {
 public:
  using HasBits = decltype(std::declval<RecoSystem>()._has_bits_);
  static void set_has_userid(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_bytesval(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::RecoSystem_UserEmbedding& userembedding(const RecoSystem* msg);
  static void set_has_userembedding(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

const ::RecoSystem_UserEmbedding&
RecoSystem::_Internal::userembedding(const RecoSystem* msg) {
  return *msg->userembedding_;
}
RecoSystem::RecoSystem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  repeatedint32val_(arena),
  repeatedstringval_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:RecoSystem)
}
RecoSystem::RecoSystem(const RecoSystem& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      repeatedint32val_(from.repeatedint32val_),
      repeatedstringval_(from.repeatedstringval_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  userid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_userid()) {
    userid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_userid(), 
      GetArenaForAllocation());
  }
  bytesval_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    bytesval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_bytesval()) {
    bytesval_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_bytesval(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_userembedding()) {
    userembedding_ = new ::RecoSystem_UserEmbedding(*from.userembedding_);
  } else {
    userembedding_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:RecoSystem)
}

inline void RecoSystem::SharedCtor() {
userid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  userid_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
bytesval_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  bytesval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
userembedding_ = nullptr;
}

RecoSystem::~RecoSystem() {
  // @@protoc_insertion_point(destructor:RecoSystem)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void RecoSystem::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  userid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  bytesval_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete userembedding_;
}

void RecoSystem::ArenaDtor(void* object) {
  RecoSystem* _this = reinterpret_cast< RecoSystem* >(object);
  (void)_this;
}
void RecoSystem::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RecoSystem::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RecoSystem::Clear() {
// @@protoc_insertion_point(message_clear_start:RecoSystem)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  repeatedint32val_.Clear();
  repeatedstringval_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      userid_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      bytesval_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(userembedding_ != nullptr);
      userembedding_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RecoSystem::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string userId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_userid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "RecoSystem.userId"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes bytesVal = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_bytesval();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .RecoSystem.UserEmbedding userEmbedding = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_userembedding(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 repeatedInt32Val = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_repeatedint32val(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 32) {
          _internal_add_repeatedint32val(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string repeatedStringVal = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_repeatedstringval();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "RecoSystem.repeatedStringVal"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* RecoSystem::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:RecoSystem)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional string userId = 1;
  if (_internal_has_userid()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_userid().data(), static_cast<int>(this->_internal_userid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "RecoSystem.userId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_userid(), target);
  }

  // optional bytes bytesVal = 2;
  if (_internal_has_bytesval()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_bytesval(), target);
  }

  // optional .RecoSystem.UserEmbedding userEmbedding = 3;
  if (_internal_has_userembedding()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::userembedding(this), target, stream);
  }

  // repeated int32 repeatedInt32Val = 4;
  {
    int byte_size = _repeatedint32val_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          4, _internal_repeatedint32val(), byte_size, target);
    }
  }

  // repeated string repeatedStringVal = 5;
  for (int i = 0, n = this->_internal_repeatedstringval_size(); i < n; i++) {
    const auto& s = this->_internal_repeatedstringval(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "RecoSystem.repeatedStringVal");
    target = stream->WriteString(5, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:RecoSystem)
  return target;
}

size_t RecoSystem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:RecoSystem)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 repeatedInt32Val = 4;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->repeatedint32val_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<int32_t>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _repeatedint32val_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated string repeatedStringVal = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(repeatedstringval_.size());
  for (int i = 0, n = repeatedstringval_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      repeatedstringval_.Get(i));
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string userId = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_userid());
    }

    // optional bytes bytesVal = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_bytesval());
    }

    // optional .RecoSystem.UserEmbedding userEmbedding = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *userembedding_);
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RecoSystem::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    RecoSystem::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RecoSystem::GetClassData() const { return &_class_data_; }

void RecoSystem::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<RecoSystem *>(to)->MergeFrom(
      static_cast<const RecoSystem &>(from));
}


void RecoSystem::MergeFrom(const RecoSystem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:RecoSystem)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  repeatedint32val_.MergeFrom(from.repeatedint32val_);
  repeatedstringval_.MergeFrom(from.repeatedstringval_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_userid(from._internal_userid());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_bytesval(from._internal_bytesval());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_userembedding()->::RecoSystem_UserEmbedding::MergeFrom(from._internal_userembedding());
    }
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RecoSystem::CopyFrom(const RecoSystem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:RecoSystem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RecoSystem::IsInitialized() const {
  return true;
}

void RecoSystem::InternalSwap(RecoSystem* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  repeatedint32val_.InternalSwap(&other->repeatedint32val_);
  repeatedstringval_.InternalSwap(&other->repeatedstringval_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &userid_, lhs_arena,
      &other->userid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &bytesval_, lhs_arena,
      &other->bytesval_, rhs_arena
  );
  swap(userembedding_, other->userembedding_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RecoSystem::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_common_2eproto_getter, &descriptor_table_common_2eproto_once,
      file_level_metadata_common_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::RecoSystem_UserEmbedding* Arena::CreateMaybeMessage< ::RecoSystem_UserEmbedding >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RecoSystem_UserEmbedding >(arena);
}
template<> PROTOBUF_NOINLINE ::RecoSystem* Arena::CreateMaybeMessage< ::RecoSystem >(Arena* arena) {
  return Arena::CreateMessageInternal< ::RecoSystem >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>