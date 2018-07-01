// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCAudioSenderStats.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCAudioSenderStats : public wrapper::org::webRtc::RTCAudioSenderStats
        {
          RTCAudioSenderStatsWeakPtr thisWeak_;

          RTCAudioSenderStats() noexcept;
          virtual ~RTCAudioSenderStats() noexcept;

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

          // properties RTCAudioHandlerStats
          double get_audioLevel() noexcept override;
          double get_totalAudioEnergy() noexcept override;
          bool get_voiceActivityFlag() noexcept override;
          double get_totalSamplesDuration() noexcept override;

          // properties RTCAudioSenderStats
          Optional< double > get_echoReturnLoss() noexcept override;
          Optional< double > get_echoReturnLossEnhancement() noexcept override;
          unsigned long long get_totalSamplesSent() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper
