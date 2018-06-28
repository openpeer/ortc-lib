// Generated by zsLibEventingTool

#include "impl_org_webrtc_RTCIceCandidateAttributes.h"

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
wrapper::impl::org::webrtc::RTCIceCandidateAttributes::RTCIceCandidateAttributes() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCIceCandidateAttributesPtr wrapper::org::webrtc::RTCIceCandidateAttributes::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webrtc::RTCIceCandidateAttributes>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webrtc::RTCIceCandidateAttributes::~RTCIceCandidateAttributes()
{
}

//------------------------------------------------------------------------------
::zsLib::Time wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_timestamp() noexcept
{
  ::zsLib::Time result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< wrapper::org::webrtc::RTCStatsType > wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_statsType() noexcept
{
  Optional< wrapper::org::webrtc::RTCStatsType > result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_statsTypeOther() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_id() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCIceCandidateAttributes::wrapper_init_org_webrtc_RTCIceCandidateAttributes() noexcept
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCIceCandidateAttributes::wrapper_init_org_webrtc_RTCIceCandidateAttributes(wrapper::org::webrtc::RTCIceCandidateAttributesPtr source) noexcept
{
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_relatedId() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_ipAddress() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_portNumber() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_transport() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCIceCandidateType wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_candidateType() noexcept
{
  wrapper::org::webrtc::RTCIceCandidateType result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_priority() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCIceCandidateAttributes::get_addressSourceUrl() noexcept
{
  String result {};
  return result;
}

