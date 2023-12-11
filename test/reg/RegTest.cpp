#include <gtest/gtest.h>
#include "Reg.hpp"

TEST(RegTest, WhenCreated_DefaultValue_ShouldBeZero)
{
	// Arrange + Act
	Reg reg;

	// Assert
	EXPECT_EQ(reg.getValue(), 0);
}

TEST(RegTest, WhenCalled_SetValue_NewValueShouldBeSet)
{
	// Arrange
	Reg reg;

	// Act
	reg.setValue(20);

	// Assert
	EXPECT_EQ(reg.getValue(), 20);
}

TEST(RegTest, WhenCalled_GetValue_ShouldReturnValue)
{
	// Arrange
	Reg reg;
	reg.setValue(20);

	// Act
	auto val = reg.getValue();

	// Assert
	EXPECT_EQ(reg.getValue(), val);
}
