# Raven

Raven is an experimental audio processing and local voice assistant project
written in modern C++.

The project starts from low-level audio I/O and signal processing and is
intended to evolve towards real-time voice processing and interaction.

## Goals

- Learn and experiment with digital audio processing
- Capture and generate audio through native platform APIs
- Visualize waveforms and spectra in real time
- Build reusable audio processing primitives
- Experiment with voice activity detection and wake-word recognition
- Eventually build a local voice assistant

## License

Raven is licensed under the GNU General Public License v3.0 or later.
See [LICENSE](LICENSE) for details.

## Current status

Early development.

Current work focuses on:

- audio buffers
- signal generation
- ALSA integration
- basic audio visualization

## Tech stack

- C++23
- Clang
- libstdc++
- CMake
- Ninja
- ALSA
- Dear ImGui
- GLFW / OpenGL
- Catch2

Development environment:

- Fedora Linux
- Zed
- clangd
- clang-format
- LLDB / CodeLLDB

## Building

### Requirements

On Fedora:

```bash
sudo dnf install \
    clang \
    clang-tools-extra \
    lldb \
    cmake \
    ninja-build \
    alsa-lib-devel \
    alsa-utils \
    glfw-devel \
    mesa-libGL-devel
