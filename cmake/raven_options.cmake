option(
    RAVEN_BUILD_VISUALIZER
    "Build Raven audio visualizer"
    ON
)

add_library(raven_project_options INTERFACE)

add_library(
    raven::project_options
    ALIAS raven_project_options
)

target_compile_features(
    raven_project_options
    INTERFACE
        cxx_std_23
)

target_compile_options(
    raven_project_options
    INTERFACE
        $<$<CXX_COMPILER_ID:Clang>:
            -Wall
            -Wextra
            -Wpedantic
            -Wshadow
        >

        $<$<CXX_COMPILER_ID:GNU>:
            -Wall
            -Wextra
            -Wpedantic
            -Wshadow
        >
)
