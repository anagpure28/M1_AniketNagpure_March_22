#include "unity.h"
#include "function.h"

void setUp()
{

}
void tearDown()
{
  
}
void test_changedprice(void)
{
    int price1=700;
    TEST_ASSERT_EQUAL(700,changedprice(price1));
    
}

int main(void)
{
  UNITY_BEGIN();
  
  RUN_TEST(test_changedprice);
  return UNITY_END();
}
