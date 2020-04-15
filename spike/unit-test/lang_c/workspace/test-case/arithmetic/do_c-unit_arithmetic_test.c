#include "primitive_types.h"
#include "primitive_data.h"
#include "c-primitive-ops/arithmetic/c_primitive_ops_arithmetic.h"
#include "c_assertion.h"


static void do_c_unit_athrithmetic_test_add_min(void)
{
    c_uint8 result;
    c_uint8 op1 = C_UINT8_MIN;
    result = C_OPS_ADD(op1, 1);
    C_ASSERT(result == C_UINT8_MIN_PLUS_1);
    return;
}
static void do_c_unit_athrithmetic_test_add_min_minus_1(void)
{
    c_uint8 result;
    c_uint8 op1 = C_UINT8_MIN_MINUS_1;
    result = C_OPS_ADD(op1, 1);
    C_ASSERT(result == C_UINT8_MIN);
    return;
}
static void do_c_unit_athrithmetic_test_add_min_plus_1(void)
{
    c_uint8 result;
    c_uint8 op1 = C_UINT8_MIN_PLUS_1;
    result = C_OPS_ADD(op1, 1);
    C_ASSERT(result == (C_UINT8_MIN_PLUS_1 + 1));
    return;
}

static void do_c_unit_athrithmetic_test_add_max(void)
{
    c_uint8 result;
    c_uint8 op1 = C_UINT8_MAX;
    result = C_OPS_ADD(op1, 1);
    C_ASSERT(result == C_UINT8_MAX_PLUS_1);
    return;
}
static void do_c_unit_athrithmetic_test_add_max_minus_1(void)
{
    c_uint8 result;
    c_uint8 op1 = C_UINT8_MAX_MINUS_1;
    result = C_OPS_ADD(op1, 1);
    C_ASSERT(result == C_UINT8_MAX);
    return;
}
static void do_c_unit_athrithmetic_test_add_max_plus_1(void)
{
    c_uint8 result;
    c_uint8 op1 = C_UINT8_MAX_PLUS_1;
    result = C_OPS_ADD(op1, 1);
    C_ASSERT(result == (C_UINT8_MAX_PLUS_1 + 1));
    return;
}

void do_c_unit_athrithmetic_test(void)
{
    do_c_unit_athrithmetic_test_add_min_minus_1();
    do_c_unit_athrithmetic_test_add_min();
    do_c_unit_athrithmetic_test_add_min_plus_1();
    do_c_unit_athrithmetic_test_add_max_minus_1();
    do_c_unit_athrithmetic_test_add_max();
    do_c_unit_athrithmetic_test_add_max_plus_1();
    return;
}