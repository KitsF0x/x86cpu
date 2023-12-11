#include "MemoryIndexOutOfBounds.hpp"

MemoryIndexOutOfBounds::MemoryIndexOutOfBounds(std::uint64_t index)
    : index(index) {}

const char* MemoryIndexOutOfBounds::what() const noexcept {
    return std::string("Memory index out of bounds(" + std::to_string(index) + ").").c_str();
}