
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4100)
#pragma warning(disable: 4458)
#pragma warning(disable: 4244)
#pragma warning(disable: 4242)
#endif //_MSC_VER

// forward for webrtc can go here
namespace rtc
{
  class Thread;
  class RTCCertificate;
  class IntervalRange;

  enum ECCurve;
  enum KeyType;
}

namespace webRtc
{
  enum class SdpSemantics;
  enum class SdpType;

  class SessionDescriptionInterface;
  class PeerConnectionInterface;
  class PeerConnectionFactoryInterface;

  class AudioSourceInterface;
  class VideoTrackSourceInterface;

  class RTCError;

  class VideoFrame;
}