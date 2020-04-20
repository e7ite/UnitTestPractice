/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_noon)
{
    Practice obj;
    bool actual = obj.isPalindrome("noon");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_repaper)
{
    Practice obj;
    bool actual = obj.isPalindrome("repaper");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_rpullup)
{
    Practice obj;
    bool actual = obj.isPalindrome("pullup");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_devoted)
{
    Practice obj;
    bool actual = obj.isPalindrome("devoted");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_hello)
{
    Practice obj;
    bool actual = obj.isPalindrome("hello");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_giraffe)
{
    Practice obj;
    bool actual = obj.isPalindrome("giraffe");
    ASSERT_TRUE(actual);
}