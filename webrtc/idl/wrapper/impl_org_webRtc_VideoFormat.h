// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webRtc_VideoFormat.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webRtc {

        struct VideoFormat : public wrapper::org::webRtc::VideoFormat
        {
          ZS_DECLARE_TYPEDEF_PTR(wrapper::org::webRtc::VideoFormat, WrapperType);
          ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::VideoFormat, WrapperImplType);
          VideoFormatWeakPtr thisWeak_;

          VideoFormat() noexcept;
          virtual ~VideoFormat() noexcept;

          // methods VideoFormat
          bool IsPixelRateLess(wrapper::org::webRtc::VideoFormatPtr other) noexcept override;
          void wrapper_init_org_webRtc_VideoFormat() noexcept override;
          void wrapper_init_org_webRtc_VideoFormat(wrapper::org::webRtc::VideoFormatPtr source) noexcept override;

          // properties VideoFormat
          int get_width() noexcept override;
          void set_width(int value) noexcept override;
          int get_height() noexcept override;
          void set_height(int value) noexcept override;
          ::zsLib::Nanoseconds get_interval() noexcept override;
          void set_interval(::zsLib::Nanoseconds value) noexcept override;
          uint32_t get_fourcc() noexcept override;
          void set_fourcc(uint32_t value) noexcept override;
          int get_framerate() noexcept override;
          float get_framerateFloat() noexcept override;
          bool get_isSize0x0() noexcept override;
        };

      } // webRtc
    } // org
  } // namespace impl
} // namespace wrapper

