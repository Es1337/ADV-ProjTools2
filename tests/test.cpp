#include "../src/header.h"
#include <gtest/gtest.h>

class SampleTest : public ::testing::Test
{
public:
	Sample s;

	void SetUp() override
	{
		s = Sample{ "Test" };
	}

	void TearDown() override
	{

	}

};

TEST_F(SampleTest, TestDefaultConstructor) {
	s = Sample{};
	ASSERT_EQ(s.getLabel(), "Empty");
}

TEST_F(SampleTest, TestLabelConstructor) {
	ASSERT_EQ(s.getLabel(), "Test");
}