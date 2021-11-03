#include "pay.h"
#include "unity.h"
#include "unity_fixture.h"
#include <time.h>
#include <stdlib.h>

TEST_GROUP(Payment);

// Antes do teste unitario
TEST_SETUP(Payment)
{

}

// Depois do teste unitario
TEST_TEAR_DOWN(Payment)
{
    
}

// Testa classes de equivalencia validas
TEST(Payment, TestPay1)
{
    TEST_ASSERT_EQUAL(0, payment(0.01, "regular"));
    TEST_ASSERT_EQUAL(0, payment(0.01, "estudante"));
    TEST_ASSERT_EQUAL(0, payment(0.01, "aposentado"));
    TEST_ASSERT_EQUAL(0, payment(0.01, "VIP"));
    TEST_ASSERT_EQUAL(0, payment(99999.00, "regular"));
    TEST_ASSERT_EQUAL(0, payment(99999.00, "estudante"));
    TEST_ASSERT_EQUAL(0, payment(99999.00, "aposentado"));
    TEST_ASSERT_EQUAL(0, payment(99999.00, "VIP"));
}

// Testa classes de equivalencia invalidas
TEST(Payment, TestPay2)
{
    TEST_ASSERT_EQUAL(1, payment(0, "regular"));
    TEST_ASSERT_EQUAL(1, payment(-0.01, "regular"));
    TEST_ASSERT_EQUAL(1, payment(-99999.00, "regular"));

    TEST_ASSERT_EQUAL(2, payment(0.01, "bla"));
    TEST_ASSERT_EQUAL(2, payment(0.01, "regular1"));
    TEST_ASSERT_EQUAL(2, payment(0.01, "Regular"));
}

// Testa valores limites 
TEST(Payment, TestPay3)
{
    TEST_ASSERT_EQUAL(1, payment(0.00099, "regular"));
    TEST_ASSERT_EQUAL(1, payment(99999.01, "regular"));
    TEST_ASSERT_EQUAL(2, payment(0.01, "abcdefghijklmno"));
}