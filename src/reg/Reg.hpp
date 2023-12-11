#pragma once

#include <cstdint>

class Reg{
private:
	std::uint64_t value{ 0 };

public:
	std::uint64_t getValue();
	void setValue(std::uint64_t value);
};