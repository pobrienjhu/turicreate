// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Normalizer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Normalizer.pb.h"

#include <algorithm>

#include <protobuf/stubs/common.h>
#include <protobuf/stubs/port.h>
#include <protobuf/stubs/once.h>
#include <protobuf/io/coded_stream.h>
#include <protobuf/wire_format_lite_inl.h>
#include <protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace CoreML {
namespace Specification {

void protobuf_ShutdownFile_Normalizer_2eproto() {
  Normalizer_default_instance_.Shutdown();
}

void protobuf_InitDefaults_Normalizer_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Normalizer_default_instance_.DefaultConstruct();
  Normalizer_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_Normalizer_2eproto_once_);
void protobuf_InitDefaults_Normalizer_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_Normalizer_2eproto_once_,
                 &protobuf_InitDefaults_Normalizer_2eproto_impl);
}
void protobuf_AddDesc_Normalizer_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_Normalizer_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Normalizer_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Normalizer_2eproto_once_);
void protobuf_AddDesc_Normalizer_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Normalizer_2eproto_once_,
                 &protobuf_AddDesc_Normalizer_2eproto_impl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Normalizer_2eproto {
  StaticDescriptorInitializer_Normalizer_2eproto() {
    protobuf_AddDesc_Normalizer_2eproto();
  }
} static_descriptor_initializer_Normalizer_2eproto_;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

bool Normalizer_NormType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Normalizer_NormType Normalizer::LMax;
const Normalizer_NormType Normalizer::L1;
const Normalizer_NormType Normalizer::L2;
const Normalizer_NormType Normalizer::NormType_MIN;
const Normalizer_NormType Normalizer::NormType_MAX;
const int Normalizer::NormType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Normalizer::kNormTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Normalizer::Normalizer()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_Normalizer_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:CoreML.Specification.Normalizer)
}

void Normalizer::InitAsDefaultInstance() {
}

Normalizer::Normalizer(const Normalizer& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.Normalizer)
}

void Normalizer::SharedCtor() {
  normtype_ = 0;
  _cached_size_ = 0;
}

Normalizer::~Normalizer() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.Normalizer)
  SharedDtor();
}

void Normalizer::SharedDtor() {
}

void Normalizer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Normalizer& Normalizer::default_instance() {
  protobuf_InitDefaults_Normalizer_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Normalizer> Normalizer_default_instance_;

Normalizer* Normalizer::New(::google::protobuf::Arena* arena) const {
  Normalizer* n = new Normalizer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Normalizer::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.Normalizer)
  normtype_ = 0;
}

bool Normalizer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CoreML.Specification.Normalizer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .CoreML.Specification.Normalizer.NormType normType = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_normtype(static_cast< ::CoreML::Specification::Normalizer_NormType >(value));
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
  // @@protoc_insertion_point(parse_success:CoreML.Specification.Normalizer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CoreML.Specification.Normalizer)
  return false;
#undef DO_
}

void Normalizer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CoreML.Specification.Normalizer)
  // optional .CoreML.Specification.Normalizer.NormType normType = 1;
  if (this->normtype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->normtype(), output);
  }

  // @@protoc_insertion_point(serialize_end:CoreML.Specification.Normalizer)
}

size_t Normalizer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.Normalizer)
  size_t total_size = 0;

  // optional .CoreML.Specification.Normalizer.NormType normType = 1;
  if (this->normtype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->normtype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Normalizer::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Normalizer*>(&from));
}

void Normalizer::MergeFrom(const Normalizer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.Normalizer)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Normalizer::UnsafeMergeFrom(const Normalizer& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.normtype() != 0) {
    set_normtype(from.normtype());
  }
}

void Normalizer::CopyFrom(const Normalizer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.Normalizer)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Normalizer::IsInitialized() const {

  return true;
}

void Normalizer::Swap(Normalizer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Normalizer::InternalSwap(Normalizer* other) {
  std::swap(normtype_, other->normtype_);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string Normalizer::GetTypeName() const {
  return "CoreML.Specification.Normalizer";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Normalizer

// optional .CoreML.Specification.Normalizer.NormType normType = 1;
void Normalizer::clear_normtype() {
  normtype_ = 0;
}
::CoreML::Specification::Normalizer_NormType Normalizer::normtype() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.Normalizer.normType)
  return static_cast< ::CoreML::Specification::Normalizer_NormType >(normtype_);
}
void Normalizer::set_normtype(::CoreML::Specification::Normalizer_NormType value) {
  
  normtype_ = value;
  // @@protoc_insertion_point(field_set:CoreML.Specification.Normalizer.normType)
}

inline const Normalizer* Normalizer::internal_default_instance() {
  return &Normalizer_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)
