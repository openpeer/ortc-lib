// Generated by zsLibEventingTool

#include "impl_org_webRtc_RTCTrackEvent.h"

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
wrapper::impl::org::webRtc::RTCTrackEvent::RTCTrackEvent() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::RTCTrackEventPtr wrapper::org::webRtc::RTCTrackEvent::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webRtc::RTCTrackEvent>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webRtc::RTCTrackEvent::~RTCTrackEvent() noexcept
{
  thisWeak_.reset();
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webRtc::RTCTrackEvent::wrapper_init_org_webRtc_RTCTrackEvent() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::RTCRtpReceiverPtr wrapper::impl::org::webRtc::RTCTrackEvent::get_receiver() noexcept
{
  wrapper::org::webRtc::RTCRtpReceiverPtr result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::MediaStreamTrackPtr wrapper::impl::org::webRtc::RTCTrackEvent::get_track() noexcept
{
  wrapper::org::webRtc::MediaStreamTrackPtr result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::RTCRtpTransceiverPtr wrapper::impl::org::webRtc::RTCTrackEvent::get_transceiver() noexcept
{
  wrapper::org::webRtc::RTCRtpTransceiverPtr result {};
  return result;
}

