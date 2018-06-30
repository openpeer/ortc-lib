// Generated by zsLibEventingTool

#include "impl_org_webrtc_RTCKeyParams.h"

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
wrapper::impl::org::webrtc::RTCKeyParams::RTCKeyParams() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCKeyParamsPtr wrapper::org::webrtc::RTCKeyParams::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webrtc::RTCKeyParams>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webrtc::RTCKeyParams::~RTCKeyParams() noexcept
{
  thisWeak_.reset();
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCKeyParams::wrapper_init_org_webrtc_RTCKeyParams() noexcept
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCKeyParams::wrapper_init_org_webrtc_RTCKeyParams(wrapper::org::webrtc::RTCKeyType key_type) noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCKeyParamsPtr wrapper::org::webrtc::RTCKeyParams::createRsa() noexcept
{
  wrapper::org::webrtc::RTCKeyParamsPtr result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCKeyParamsPtr wrapper::org::webrtc::RTCKeyParams::createRsaWithParams(wrapper::org::webrtc::RTCRSAParamsPtr params) noexcept
{
  wrapper::org::webrtc::RTCKeyParamsPtr result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCKeyParamsPtr wrapper::org::webrtc::RTCKeyParams::createEcdsa() noexcept
{
  wrapper::org::webrtc::RTCKeyParamsPtr result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCKeyParamsPtr wrapper::org::webrtc::RTCKeyParams::createEcdsaWithCurve(wrapper::org::webrtc::RTCECCurve curve) noexcept
{
  wrapper::org::webrtc::RTCKeyParamsPtr result {};
  return result;
}

//------------------------------------------------------------------------------
bool wrapper::impl::org::webrtc::RTCKeyParams::get_valid() noexcept
{
  bool result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCRSAParamsPtr wrapper::impl::org::webrtc::RTCKeyParams::get_rsa() noexcept
{
  wrapper::org::webrtc::RTCRSAParamsPtr result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCECCurve wrapper::impl::org::webrtc::RTCKeyParams::get_ec() noexcept
{
  wrapper::org::webrtc::RTCECCurve result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCKeyType wrapper::impl::org::webrtc::RTCKeyParams::get_type() noexcept
{
  wrapper::org::webrtc::RTCKeyType result {};
  return result;
}


