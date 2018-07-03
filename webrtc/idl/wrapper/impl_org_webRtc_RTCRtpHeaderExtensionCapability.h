// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCRtpHeaderExtensionCapability.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCRtpHeaderExtensionCapability : public wrapper::org::webRtc::RTCRtpHeaderExtensionCapability
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCRtpHeaderExtensionCapability, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCRtpHeaderExtensionCapability, WrapperImplType);
          RTCRtpHeaderExtensionCapabilityWeakPtr thisWeak_;

          RTCRtpHeaderExtensionCapability() noexcept;
          virtual ~RTCRtpHeaderExtensionCapability() noexcept;
          void wrapper_init_org_webRtc_RTCRtpHeaderExtensionCapability() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

