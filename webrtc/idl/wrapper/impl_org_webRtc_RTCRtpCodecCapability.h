// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCRtpCodecCapability.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCRtpCodecCapability : public wrapper::org::webRtc::RTCRtpCodecCapability
        {
          RTCRtpCodecCapabilityWeakPtr thisWeak_;

          RTCRtpCodecCapability() noexcept;
          virtual ~RTCRtpCodecCapability() noexcept;
          void wrapper_init_org_webRtc_RTCRtpCodecCapability() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper
