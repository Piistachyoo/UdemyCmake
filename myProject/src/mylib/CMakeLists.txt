set(LIBRARY_SOURCES
    "mylib.cpp")
set(LIBRARY_HEADERS
    "mylib.h")
set(LIBRARY_INCLUDES
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include")

add_library(${LIBRARY_NAME} STATIC ${LIBRARY_SOURCES}
    ${LIBRARY_HEADERS})

target_include_directories(${LIBRARY_NAME} PUBLIC ${LIBRARY_INCLUDES})
target_link_libraries(${LIBRARY_NAME} PUBLIC
    cxxopts::cxxopts
    fmt::fmt
    spdlog::spdlog
    nlohmann_json::nlohmann_json)
