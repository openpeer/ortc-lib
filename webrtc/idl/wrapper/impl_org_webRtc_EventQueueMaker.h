
#pragma once

#include "types.h"
#include "generated/org_webrtc_EventQueueMaker.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webrtc {

        struct EventQueueMaker : public wrapper::org::webrtc::EventQueueMaker
        {
          virtual ~EventQueueMaker() noexcept;
        };

      } // webrtc
    } // org
  } // namespace impl
} // namespace wrapper

