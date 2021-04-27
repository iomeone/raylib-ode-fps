#include <stdio.h>
#include <stdlib.h>
#include "unity.h"

void setUp(void) {
  // set stuff up here
}

void tearDown(void) {
  // clean stuff up here
}

void test_function_should_doAlsoDoBlah(void) {
  TEST_ASSERT_EQUAL_STRING("A", "A");
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_doAlsoDoBlah);
    return UNITY_END();
}
