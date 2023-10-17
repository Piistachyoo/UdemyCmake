#include "config.hpp"
#include "mylib.h"
#include <cxxopts.hpp>
#include <fmt/format.h>
#include <iostream>
#include <nlohmann/json.hpp>
#include <spdlog/spdlog.h>

int main()
{
    std::cout << project_name << std::endl;
    std::cout << project_version << std::endl;

    print_hello_world();

    std::cout << "JSON Lib Version: " << NLOHMANN_JSON_VERSION_MAJOR << '.' << NLOHMANN_JSON_VERSION_MINOR << '.'
              << NLOHMANN_JSON_VERSION_PATCH << '.' << std::endl;

    std::cout << "FMT: " << FMT_VERSION << std::endl;

    std::cout << "CXXOPTS Version: " << CXXOPTS__VERSION_MAJOR << '.' << CXXOPTS__VERSION_MINOR << '.'
              << CXXOPTS__VERSION_PATCH << '.' << std::endl;

    std::cout << "SPDLOG: " << SPDLOG_VER_MAJOR << '.' << SPDLOG_VER_MINOR << '.' << SPDLOG_VER_PATCH << '.'
              << std::endl;

    return 0;
}
