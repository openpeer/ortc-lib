
#pragma once

#include "types.h"
#include "generated/org_webrtc_RTCSessionDescriptionInit.h"

namespace wrapper {
  namespace impl {
    namespace org {
      namespace webrtc {

        struct RTCSessionDescriptionInit : public wrapper::org::webrtc::RTCSessionDescriptionInit
        {
          RTCSessionDescriptionInitWeakPtr thisWeak_;

          RTCSessionDescriptionInit() noexcept;
          virtual ~RTCSessionDescriptionInit() noexcept;
          void wrapper_init_org_webrtc_RTCSessionDescriptionInit() noexcept override;
        };

      } // webrtc
    } // org
  } // namespace impl
} // namespace wrapper
