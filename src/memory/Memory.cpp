﻿#include "Memory.hpp"

void Memory::create(std::uint64_t size) {
	this->buffer = std::vector<std::uint8_t>(size);
}

std::uint64_t Memory::getSize() {
	return buffer.size();
}

void Memory::checkIndexAndThrowIfOutOfBounds(std::uint64_t index) {
	if (index > getSize()) {
		throw MemoryIndexOutOfBounds(index);
	}
}


void Memory::setValue(std::uint64_t index, std::uint8_t value) {
	checkIndexAndThrowIfOutOfBounds(index);
	buffer.at(index) = value;
}

std::uint64_t Memory::getValue(std::uint64_t index) {
	checkIndexAndThrowIfOutOfBounds(index);
	return buffer.at(index);
}