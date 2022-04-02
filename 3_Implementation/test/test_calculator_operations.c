#include "unity.h"
#include <calculator_operations.h>

#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

void setUp(){}
void tearDown(){}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  return UNITY_END();
}
 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}
