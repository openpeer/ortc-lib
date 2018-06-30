
#pragma once

#include "types.h"
#include "generated/org_webrtc_RTCCertificate.h"

#include "impl_org_webrtc_pre_include.h"
#include "rtc_base/scoped_ref_ptr.h"
#include "impl_org_webrtc_post_include.h"

namespace wrapper {
  namespace impl {
    namespace org {
      namespace webrtc {

        struct RTCCertificate : public wrapper::org::webrtc::RTCCertificate
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webrtc::RTCCertificate, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webrtc::RTCCertificate, WrapperImplType);
          ZS_DECLARE_TYPEDEF_PTR(::rtc::RTCCertificate, NativeType);

          typedef ::rtc::scoped_refptr<NativeType> NativeTypeScopedPtr;

          NativeTypeScopedPtr native_;
          RTCCertificateWeakPtr thisWeak_;

          RTCCertificate() noexcept;
          virtual ~RTCCertificate() noexcept;

          // properties RTCCertificate
          ::zsLib::Time get_expires() noexcept override;
          shared_ptr< list< wrapper::org::webrtc::RTCDtlsFingerprintPtr > > get_fingerprints() noexcept override;

          ZS_NO_DISCARD() static WrapperImplTypePtr toWrapper(NativeType *native) noexcept;
          ZS_NO_DISCARD() static NativeTypeScopedPtr toNative(WrapperTypePtr wrapper) noexcept;
        };

      } // webrtc
    } // org
  } // namespace impl
} // namespace wrapper

