// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCDataChannel.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCDataChannel : public wrapper::org::webRtc::RTCDataChannel
        {
          RTCDataChannelWeakPtr thisWeak_;

          RTCDataChannel() noexcept;
          virtual ~RTCDataChannel() noexcept;

          // methods RTCStatsProvider
          shared_ptr< PromiseWithHolderPtr< wrapper::org::webRtc::RTCStatsReportPtr > > getStats(wrapper::org::webRtc::RTCStatsTypeSetPtr statTypes) noexcept(false) override; // throws wrapper::org::webRtc::RTCErrorPtr

          // methods RTCDataChannel
          void close() noexcept override;
          void send(String text) noexcept(false) override; // throws wrapper::org::webRtc::RTCErrorPtr
          void send(SecureByteBlockPtr data) noexcept(false) override; // throws wrapper::org::webRtc::RTCErrorPtr
          void wrapper_init_org_webRtc_RTCDataChannel() noexcept override;

          // properties RTCDataChannel
          unsigned short get_id() noexcept override;
          String get_label() noexcept override;
          bool get_ordered() noexcept override;
          ::zsLib::Milliseconds get_maxPacketLifeTime() noexcept override;
          unsigned short get_maxRetransmits() noexcept override;
          String get_protocol() noexcept override;
          bool get_negotiated() noexcept override;
          wrapper::org::webRtc::RTCPriorityType get_priority() noexcept override;
          wrapper::org::webRtc::RTCDataChannelState get_readyState() noexcept override;
          uint64_t get_bufferedAmount() noexcept override;
          uint64_t get_bufferedAmountLowThreshold() noexcept override;
          void set_bufferedAmountLowThreshold(uint64_t value) noexcept override;
          String get_binaryType() noexcept override;
          void set_binaryType(String value) noexcept override;

          void wrapper_onObserverCountChanged(size_t count) noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper
