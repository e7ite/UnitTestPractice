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

//////////////////////////////////////////////////
//        BEGIN isPalindrome HAPPY TESTS        //
//////////////////////////////////////////////////

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

TEST(PracticeTest, is_palindrome_pullup)
{
    Practice obj;
    bool actual = obj.isPalindrome("pullup");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_devoted)
{
    Practice obj;
    bool actual = obj.isPalindrome("devoted");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_palindrome_hello)
{
    Practice obj;
    bool actual = obj.isPalindrome("hello");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_palindrome_giraffe)
{
    Practice obj;
    bool actual = obj.isPalindrome("giraffe");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_racecar)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

//////////////////////////////////////////////////
//         BEGIN isPalindrome SAD TESTS         //
//////////////////////////////////////////////////

TEST(PracticeTest, is_palindrome_empty)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_racecar_mixed_case)
{
    Practice obj;
    bool actual = obj.isPalindrome("RaCecaR");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_hello_mixed_case)
{
    Practice obj;
    bool actual = obj.isPalindrome("heLLo");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_pullup_mixed_with_symbols)
{
    Practice obj;
    bool actual = obj.isPalindrome("$@!pullup!@$");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_pullup_with_exclamation)
{
    Practice obj;
    bool actual = obj.isPalindrome("pullup!");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_with_12321)
{
    Practice obj;
    bool actual = obj.isPalindrome("12321");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_with_31293120)
{
    Practice obj;
    bool actual = obj.isPalindrome("31293120");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome_with_symbols)
{
    Practice obj;
    bool actual = obj.isPalindrome("$!%!^*^!%!$");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome_with_symbols)
{
    Practice obj;
    bool actual = obj.isPalindrome("#@!#*$#@&!!#@");
    ASSERT_FALSE(actual);
}