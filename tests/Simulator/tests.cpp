#include "CppUTest/TestHarness.h"

extern "C"
{
	#include "Simulator.hpp"
}

TEST_GROUP(mapHandler_test_group)
{
	void setup()
	{
	}

	void teardown()
	{
	}
};

TEST(mapHandler_test_group, simple_test)
{
	CHECK_EQUAL(1,1);
}

