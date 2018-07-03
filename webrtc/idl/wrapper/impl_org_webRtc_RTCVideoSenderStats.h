// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCVideoSenderStats.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCVideoSenderStats : public wrapper::org::webRtc::RTCVideoSenderStats
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCVideoSenderStats, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCVideoSenderStats, WrapperImplType);
          RTCVideoSenderStatsWeakPtr thisWeak_;

          RTCVideoSenderStats() noexcept;
          virtual ~RTCVideoSenderStats() noexcept;

          // properties RTCStats
          ::zsLib::Time get_timestamp() noexcept override;
          Optional< wrapper::org::webRtc::RTCStatsType > get_statsType() noexcept override;
          String get_statsTypeOther() noexcept override;
          String get_id() noexcept override;

          // properties RTCMediaHandlerStats
          String get_trackIdentifier() noexcept override;
          Optional< bool > get_remoteSource() noexcept override;
          bool get_ended() noexcept override;
          String get_kind() noexcept override;
          wrapper::org::webRtc::RTCPriorityType get_priority() noexcept override;

          // properties RTCVideoHandlerStats
          unsigned long get_frameWidth() noexcept override;
          unsigned long get_frameHeight() noexcept override;
          double get_framesPerSecond() noexcept override;

          // properties RTCVideoSenderStats
          unsigned long get_framesCaptured() noexcept override;
          unsigned long get_framesSent() noexcept override;
          unsigned long get_hugeFramesSent() noexcept override;
          unsigned long get_keyFramesSent() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

