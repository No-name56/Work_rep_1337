/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_pop_is_poping(void);
extern void test_push_is_pushing(void);
extern void test_init_is_initing(void);
extern void test_empty_stack_is_empty(void);
extern void test_not_empty_stack_is_not_empty(void);
extern void test_empty_stack_is_not_fool(void);
extern void test_full_stack_is_full(void);
extern void test_not_empty_stack_is_not_full(void);
extern void test_not_full_stack_is_not_full(void);
extern void test_stack_is_working_like_stack (void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_stack.c");
  run_test(test_pop_is_poping, "test_pop_is_poping", 16);
  run_test(test_push_is_pushing, "test_push_is_pushing", 25);
  run_test(test_init_is_initing, "test_init_is_initing", 33);
  run_test(test_empty_stack_is_empty, "test_empty_stack_is_empty", 42);
  run_test(test_not_empty_stack_is_not_empty, "test_not_empty_stack_is_not_empty", 47);
  run_test(test_empty_stack_is_not_fool, "test_empty_stack_is_not_fool", 54);
  run_test(test_full_stack_is_full, "test_full_stack_is_full", 64);
  run_test(test_not_empty_stack_is_not_full, "test_not_empty_stack_is_not_full", 79);
  run_test(test_not_full_stack_is_not_full, "test_not_full_stack_is_not_full", 84);
  run_test(test_stack_is_working_like_stack , "test_stack_is_working_like_stack ", 91);

  return UnityEnd();
}