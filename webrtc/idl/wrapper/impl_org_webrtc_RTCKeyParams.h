// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webrtc_RTCKeyParams.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webrtc {

        struct RTCKeyParams : public wrapper::org::webrtc::RTCKeyParams
        {
          RTCKeyParamsWeakPtr thisWeak_;

          RTCKeyParams() noexcept;
          virtual ~RTCKeyParams() noexcept;

          // methods RTCKeyParams
          void wrapper_init_org_webrtc_RTCKeyParams() noexcept override;
          void wrapper_init_org_webrtc_RTCKeyParams(wrapper::org::webrtc::RTCKeyType key_type) noexcept override;

          // properties RTCKeyParams
          bool get_valid() noexcept override;
          wrapper::org::webrtc::RTCRSAParamsPtr get_rsa() noexcept override;
          wrapper::org::webrtc::RTCECCurve get_ec() noexcept override;
          wrapper::org::webrtc::RTCKeyType get_type() noexcept override;
        };

      } // webrtc
    } // org
  } // namespace impl
} // namespace wrapper
