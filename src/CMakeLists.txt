add_library(raven_core)

add_library(
    raven::core
    ALIAS raven_core
)

target_sources(
    raven_core
    PRIVATE
        audio/audio_buffer.cpp
)

target_include_directories(
    raven_core
    PUBLIC
        "${PROJECT_SOURCE_DIR}/include"
)

target_link_libraries(
    raven_core
    PRIVATE
        raven::project_options
)
