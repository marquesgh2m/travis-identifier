#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Payment)
{
  RUN_TEST_CASE(Payment, TestPay1);
  RUN_TEST_CASE(Payment, TestPay2);
  RUN_TEST_CASE(Payment, TestPay3);
}
