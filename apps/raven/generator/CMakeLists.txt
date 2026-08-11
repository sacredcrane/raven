add_executable(raven_generator)

target_sources(
    raven_generator
    PRIVATE
        main.cpp
)

target_link_libraries(
    raven_generator
    PRIVATE
        raven::core
        raven::alsa
        raven::project_options
)
