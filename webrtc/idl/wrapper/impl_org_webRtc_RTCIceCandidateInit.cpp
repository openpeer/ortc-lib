// Generated by zsLibEventingTool

#include "impl_org_webrtc_RTCIceCandidateInit.h"

using ::zsLib::String;
using ::zsLib::Optional;
using ::zsLib::Any;
using ::zsLib::AnyPtr;
using ::zsLib::AnyHolder;
using ::zsLib::Promise;
using ::zsLib::PromisePtr;
using ::zsLib::PromiseWithHolder;
using ::zsLib::PromiseWithHolderPtr;
using ::zsLib::eventing::SecureByteBlock;
using ::zsLib::eventing::SecureByteBlockPtr;
using ::std::shared_ptr;
using ::std::weak_ptr;
using ::std::make_shared;
using ::std::list;
using ::std::set;
using ::std::map;

//------------------------------------------------------------------------------
wrapper::impl::org::webrtc::RTCIceCandidateInit::RTCIceCandidateInit() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCIceCandidateInitPtr wrapper::org::webrtc::RTCIceCandidateInit::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webrtc::RTCIceCandidateInit>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webrtc::RTCIceCandidateInit::~RTCIceCandidateInit() noexcept
{
  thisWeak_.reset();
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCIceCandidateInit::wrapper_init_org_webrtc_RTCIceCandidateInit() noexcept
{
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCIceCandidateInit::get_candidate() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCIceCandidateInit::set_candidate(String value) noexcept
{
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCIceCandidateInit::get_sdpMid() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCIceCandidateInit::set_sdpMid(String value) noexcept
{
}

//------------------------------------------------------------------------------
Optional< unsigned short > wrapper::impl::org::webrtc::RTCIceCandidateInit::get_sdpMLineIndex() noexcept
{
  Optional< unsigned short > result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCIceCandidateInit::set_sdpMLineIndex(Optional< unsigned short > value) noexcept
{
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCIceCandidateInit::get_usernameFragment() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCIceCandidateInit::set_usernameFragment(String value) noexcept
{
}


