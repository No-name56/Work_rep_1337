#include "src/stack.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








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

    UnityAssertEqualNumber((UNITY_INT)((result)), (UNITY_INT)((a)), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}



void test_push_is_pushing(void)

{

    int a = 6;

    push (a);

    UnityAssertEqualNumber((UNITY_INT)((a)), (UNITY_INT)((pick())), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

    pop();

}



void test_init_is_initing(void)

{

    push (6);

    init();

    do {if ((is_empty())) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(37)));}} while(0);

    pop();

}





void test_empty_stack_is_empty(void)

{

    do {if ((is_empty())) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(44)));}} while(0);

}



void test_not_empty_stack_is_not_empty(void)

{

    push(2);

    do {if (!(is_empty())) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(50)));}} while(0);

    int a = pop();

}



void test_empty_stack_is_not_fool(void)

{

    do {if (!(is_fool())) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(56)));}} while(0);

}













void test_full_stack_is_full(void)

{

    push(1);

    push(1);

    push(1);

    push(1);

    push(1);

    do {if ((is_fool())) {} else {UnityFail( ((" Expected TRUE Was FALSE")), (UNITY_UINT)((UNITY_UINT)(71)));}} while(0);

    pop();

    pop();

    pop();

    pop();

    pop();

}



void test_not_empty_stack_is_not_full(void)

{

    do {if (!(is_fool())) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(81)));}} while(0);

}



void test_not_full_stack_is_not_full(void)

{

    push(4);

    do {if (!(is_fool())) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(87)));}} while(0);

    pop();

}



void test_stack_is_working_like_stack (void) {

    int a = 1, b = 2, c = 3;

    push(a);

    push(b);

    push(c);

    UnityAssertEqualNumber((UNITY_INT)((c)), (UNITY_INT)((pop())), (

   ((void *)0)

   ), (UNITY_UINT)(96), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((b)), (UNITY_INT)((pop())), (

   ((void *)0)

   ), (UNITY_UINT)(97), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((a)), (UNITY_INT)((pop())), (

   ((void *)0)

   ), (UNITY_UINT)(98), UNITY_DISPLAY_STYLE_INT);

}
