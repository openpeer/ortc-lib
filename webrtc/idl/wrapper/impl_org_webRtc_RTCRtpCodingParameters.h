// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCRtpCodingParameters.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCRtpCodingParameters : public wrapper::org::webRtc::RTCRtpCodingParameters
        {
          RTCRtpCodingParametersWeakPtr thisWeak_;

          RTCRtpCodingParameters() noexcept;
          virtual ~RTCRtpCodingParameters() noexcept;
          void wrapper_init_org_webRtc_RTCRtpCodingParameters() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper
