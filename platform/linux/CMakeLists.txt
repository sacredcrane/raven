find_package(PkgConfig REQUIRED)

pkg_check_modules(
    ALSA
    REQUIRED
    IMPORTED_TARGET
    alsa
)

add_library(raven_alsa)

add_library(
    raven::alsa
    ALIAS raven_alsa
)

target_sources(
    raven_alsa
    PRIVATE
        alsa_capture.cpp
)

target_link_libraries(
    raven_alsa
    PUBLIC
        raven::core

    PRIVATE
        raven::project_options
        PkgConfig::ALSA
)
