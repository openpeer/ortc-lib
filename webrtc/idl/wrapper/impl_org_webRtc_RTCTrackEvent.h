// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCTrackEvent.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCTrackEvent : public wrapper::org::webRtc::RTCTrackEvent
        {
          RTCTrackEventWeakPtr thisWeak_;

          RTCTrackEvent() noexcept;
          virtual ~RTCTrackEvent() noexcept;
          void wrapper_init_org_webRtc_RTCTrackEvent() noexcept override;

          // properties RTCTrackEvent
          wrapper::org::webRtc::RTCRtpReceiverPtr get_receiver() noexcept override;
          wrapper::org::webRtc::MediaStreamTrackPtr get_track() noexcept override;
          wrapper::org::webRtc::RTCRtpTransceiverPtr get_transceiver() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper
