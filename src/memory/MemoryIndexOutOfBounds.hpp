#pragma once

#include <stdexcept>
#include <string>

class MemoryIndexOutOfBounds : public std::exception {
private:
    std::uint64_t index;

public:
    MemoryIndexOutOfBounds(std::uint64_t index);
    const char* what() const noexcept override;
};