add_library(GLAD)

target_sources(GLAD
PRIVATE
    src/gl.c
)

target_include_directories(GLAD
PUBLIC
    include
)