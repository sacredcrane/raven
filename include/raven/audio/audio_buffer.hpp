#ifndef AUDIO_AUDIO_BUFFER_HPP
#define AUDIO_AUDIO_BUFFER_HPP

#include <cstddef>
#include <cstdint>
#include <stdfloat>
#include <vector>

using Sample = float;

enum class Channels : std::int32_t { MONO = 1, STEREO = 2 };

class AudioFormat {
  public:
    AudioFormat(std::uint32_t sample_rate, Channels chans)
        : sample_rate(sample_rate), chans(chans) {}

    std::uint32_t sample_rate = 0;
    Channels chans = Channels::MONO;
};

class AudioBlock {

  private:
    std::vector<Sample> _samples;
};

class AudioBuffer {
  public:
    AudioBuffer(std::size_t block_size, const AudioFormat& format)
        : _format(format), _block_size(block_size) {}

    AudioBuffer(const AudioBuffer&) = delete;
    AudioBuffer(const AudioBuffer&&) = delete;

  private:
    AudioFormat _format;
    std::size_t _block_size = 0;
}

#endif
