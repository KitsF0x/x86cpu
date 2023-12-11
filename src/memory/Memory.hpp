#pragma once

#include <cstdint>
#include <vector>

#include "MemoryIndexOutOfBounds.hpp"


class Memory {
private:
	std::vector<std::uint8_t> buffer;

	void checkIndexAndThrowIfOutOfBounds(std::uint64_t index);

public:
	void create(std::uint64_t size);
	std::uint64_t getSize();
	
	void setValue(std::uint64_t index, std::uint8_t value);
	std::uint64_t getValue(std::uint64_t index);
};