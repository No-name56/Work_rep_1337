#ifdef TEST

#include "unity.h"

#include "stack.h"

void setUp(void)
{
}

void tearDown(void)
{
}


void test_pop_is_poping(void)
{
    int res = 6;
    push(res);
    int result = pick();
    int a = pop();
    TEST_ASSERT_EQUAL_INT (result, a);
}

void test_push_is_pushing(void)
{
    int a = 6;
    push (a);
    TEST_ASSERT_EQUAL_INT (a, pick());
    pop();
}

void test_init_is_initing(void)
{
    push (6);
    init();
    TEST_ASSERT_TRUE (is_empty());
    pop();
}

//empty
void test_empty_stack_is_empty(void)
{
    TEST_ASSERT_TRUE(is_empty());
}

void test_not_empty_stack_is_not_empty(void)
{
    push(2);
    TEST_ASSERT_FALSE(is_empty());
    int a = pop();
}

void test_empty_stack_is_not_fool(void)
{
    TEST_ASSERT_FALSE(is_fool());
}



//full


void test_full_stack_is_full(void)
{
    push(1);
    push(1);
    push(1);
    push(1);
    push(1);
    TEST_ASSERT_TRUE(is_fool());
    pop();
    pop();
    pop();
    pop();
    pop();
}

void test_not_empty_stack_is_not_full(void)
{
    TEST_ASSERT_FALSE(is_fool());
}

void test_not_full_stack_is_not_full(void)
{
    push(4);
    TEST_ASSERT_FALSE(is_fool());
    pop();
}

void test_stack_is_working_like_stack (void) {
    int a = 1, b = 2, c = 3;
    push(a);
    push(b);
    push(c);
    TEST_ASSERT_EQUAL_INT (c, pop());
    TEST_ASSERT_EQUAL_INT (b, pop());
    TEST_ASSERT_EQUAL_INT (a, pop());
}


#endif // TEST
