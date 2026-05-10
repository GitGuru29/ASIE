#pragma once
#include <string>
#include <vector>

namespace aerosec {
namespace models {

struct Service {
    int port;
    std::string protocol;
    std::string service_name;
    std::string version;
};

struct Asset {
    std::string ip_address;
    std::string hostname;
    std::vector<Service> services;
};

} // namespace models
} // namespace aerosec
