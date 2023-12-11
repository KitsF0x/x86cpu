#include <gtest/gtest.h>
#include "Memory.hpp"
#include "MemoryIndexOutOfBounds.hpp"

TEST(MemoryTest, WhenCreated_Size_ShouldBeZero)
{
	// Arrange + Act
	Memory memory;

	// Assert
	EXPECT_EQ(memory.getSize(), 0);
}

TEST(MemoryTest, WhenCalled_Create_ShouldCreateMemoryObjectWithGivenValue)
{
	// Arrange
	Memory memory;

	// Act
	memory.create(20);

	// Assert
	EXPECT_EQ(memory.getSize(), 20);
}

TEST(MemoryTest, WhenCalled_SetValue_ValueShouldBeSetAtGivenIndex)
{
	// Arrange
	Memory memory;
	memory.create(20);

	// Act
	memory.setValue(4, 55);

	// Assert
	EXPECT_EQ(memory.getValue(4), 55);
}


TEST(MemoryTest, WhenCalled_SetValueWithIndexOutOfBounds_ShouldThrowMemoryIndexOutOfBoundsException)
{
	// Arrange
	Memory memory;
	memory.create(20);

	// Act + Assert
	EXPECT_THROW(memory.setValue(12345, 55), MemoryIndexOutOfBounds);
}

TEST(MemoryTest, WhenCalled_GetValueWithIndexOutOfBounds_ShouldThrowMemoryIndexOutOfBoundsException)
{
	// Arrange
	Memory memory;
	memory.create(20);

	// Act + Assert
	EXPECT_THROW(memory.getValue(12345), MemoryIndexOutOfBounds);
}