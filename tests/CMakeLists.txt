add_executable(raven_tests)

target_sources(
    raven_tests
    PRIVATE
        first_test.cpp
)

target_link_libraries(
    raven_tests
    PRIVATE
        # raven::core
        raven::project_options
        Catch2::Catch2WithMain
)

include(Catch)

catch_discover_tests(raven_tests)
