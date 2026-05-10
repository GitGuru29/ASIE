#pragma once
#include <string>
#include <vector>
#include "models/Asset.h"

namespace aerosec {
namespace parsers {

class Parser {
public:
    virtual ~Parser() = default;
    
    // Parse the given file and return a list of normalized Assets
    virtual std::vector<models::Asset> parse(const std::string& filepath) = 0;
};

} // namespace parsers
} // namespace aerosec
