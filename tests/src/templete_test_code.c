#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(TempleteTestCode);

TEST_SETUP(TempleteTestCode)
{

}

TEST_TEAR_DOWN(TempleteTestCode)
{
}

TEST(TempleteTestCode, test_function_should_doBlahAndBlah)
{
    TEST_ASSERT_EQUAL_STRING_MESSAGE("aaa", "aab", "assertion message");
}
