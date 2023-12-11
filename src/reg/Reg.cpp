#include "Reg.hpp"

std::uint64_t Reg::getValue() {
	return value;
}

void Reg::setValue(std::uint64_t value) {
	this->value = value;
}
