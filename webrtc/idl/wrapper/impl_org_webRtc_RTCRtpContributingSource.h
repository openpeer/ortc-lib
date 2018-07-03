// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_RTCRtpContributingSource.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct RTCRtpContributingSource : public wrapper::org::webRtc::RTCRtpContributingSource
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::RTCRtpContributingSource, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCRtpContributingSource, WrapperImplType);
          RTCRtpContributingSourceWeakPtr thisWeak_;

          RTCRtpContributingSource() noexcept;
          virtual ~RTCRtpContributingSource() noexcept;
          void wrapper_init_org_webRtc_RTCRtpContributingSource() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

