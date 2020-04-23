/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include <climits>
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

//////////////////////////////////////////////////
//       BEGIN sortDescending HAPPY TESTS       //
//////////////////////////////////////////////////

TEST(PracticeTest, sortDescending_1_2_3)
{
    Practice obj;
    int a = 1;
    int b = 2;
    int c = 3;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, 3);
    ASSERT_EQ(b, 2);
    ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sortDescending_5_2_3)
{
    Practice obj;
    int a = 5;
    int b = 2;
    int c = 3;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, 5);
    ASSERT_EQ(b, 3);
    ASSERT_EQ(c, 2);
}

TEST(PracticeTest, sortDescending_40_10_20)
{
    Practice obj;
    int a = 40;
    int b = 10;
    int c = 20;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, 40);
    ASSERT_EQ(b, 20);
    ASSERT_EQ(c, 10);
}

TEST(PracticeTest, sortDescending_9_20_5)
{
    Practice obj;
    int a = 9;
    int b = 20;
    int c = 5;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, 20);
    ASSERT_EQ(b, 9);
    ASSERT_EQ(c, 5);
}

TEST(PracticeTest, sortDescending_5_20_9)
{
    Practice obj;
    int a = 5;
    int b = 20;
    int c = 9;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, 20);
    ASSERT_EQ(b, 9);
    ASSERT_EQ(c, 5);
}

TEST(PracticeTest, sortDescending_neg3_neg2_neg1)
{
    Practice obj;
    int a = -3;
    int b = -2;
    int c = -1;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, -1);
    ASSERT_EQ(b, -2);
    ASSERT_EQ(c, -3);
}

//////////////////////////////////////////////////
//       BEGIN sortDescending SAD TESTS        //
//////////////////////////////////////////////////

TEST(PracticeTest, sortDescending_2_2_3)
{
    Practice obj;
    int a = 2;
    int b = 2;
    int c = 3;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, 3);
    ASSERT_EQ(b, 2);
    ASSERT_EQ(c, 2);
}

TEST(PracticeTest, sortDescending_neg5_intmin_intmax)
{
    Practice obj;
    int a = -5;
    int b = INT_MIN;
    int c = INT_MAX;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, INT_MAX);
    ASSERT_EQ(b, -5);
    ASSERT_EQ(c, INT_MIN);
}

TEST(PracticeTest, sortDescending_intmin_intmin_intmax)
{
    Practice obj;
    int a = INT_MIN;
    int b = INT_MIN;
    int c = INT_MAX;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, INT_MAX);
    ASSERT_EQ(b, INT_MIN);
    ASSERT_EQ(c, INT_MIN);
}

TEST(PracticeTest, sortDescending_0_1_0)
{
    Practice obj;
    int a = 0;
    int b = 1;
    int c = 0;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, 1);
    ASSERT_EQ(b, 0);
    ASSERT_EQ(c, 0);
}

TEST(PracticeTest, sortDescending_1_1_1)
{
    Practice obj;
    int a = 1;
    int b = 1;
    int c = 1;
    obj.sortDescending(a, b, c);
    ASSERT_EQ(a, 1);
    ASSERT_EQ(b, 1);
    ASSERT_EQ(c, 1);
}