// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCRtpDecodingParameters.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCRtpDecodingParameters : public wrapper::org::webRtc::RTCRtpDecodingParameters
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCRtpDecodingParameters, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCRtpDecodingParameters, WrapperImplType);
          RTCRtpDecodingParametersWeakPtr thisWeak_;

          RTCRtpDecodingParameters() noexcept;
          virtual ~RTCRtpDecodingParameters() noexcept;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

