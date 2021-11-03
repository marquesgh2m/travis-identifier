#include "unity.h"
#include "unity_fixture.h"
#include <time.h>
#include <stdlib.h>
#include "identifier.h"

TEST_GROUP(Identifier);

// Antes do teste unitario
TEST_SETUP(Identifier)
{

}

// Depois do teste unitario
TEST_TEAR_DOWN(Identifier)
{
    
}

TEST(Identifier, ValidSize)
{
	TEST_ASSERT_EQUAL(identifier("bola"), 0);
}

TEST(Identifier, MinSize)
{
	TEST_ASSERT_EQUAL(identifier(""), 1);
}

TEST(Identifier, MaxSize)
{
	TEST_ASSERT_EQUAL(identifier("carteira"), 1);
}

TEST(Identifier, ValidChar)
{
	TEST_ASSERT_EQUAL(identifier("flor"), 0);
}

TEST(Identifier, LettersDigs)
{
	TEST_ASSERT_EQUAL(identifier("flor2"), 0) ;
}

TEST(Identifier, InvalidFirstChar)
{
	TEST_ASSERT_EQUAL(identifier("2flor"), 1);
}

TEST(Identifier, InvalidChar)
{
	TEST_ASSERT_EQUAL(identifier("flor#"), 1);
}




