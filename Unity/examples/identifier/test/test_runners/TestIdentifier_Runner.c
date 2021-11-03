#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Identifier)
{
  RUN_TEST_CASE(Identifier, ValidSize);
  RUN_TEST_CASE(Identifier, MinSize);
  RUN_TEST_CASE(Identifier, MaxSize);
  RUN_TEST_CASE(Identifier, ValidChar);
  RUN_TEST_CASE(Identifier, LettersDigs);
  RUN_TEST_CASE(Identifier, InvalidFirstChar);
  RUN_TEST_CASE(Identifier, InvalidChar);
}
