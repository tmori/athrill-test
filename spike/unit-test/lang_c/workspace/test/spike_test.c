#include "primitive_types.h"
#include "primitive_data.h"
#include "c-primitive-ops/arithmetic/c_primitive_ops_arithmetic.h"
#include "c_assertion.h"

void do_test(void)
{
    int result;
    int op1;

    op1 = 30;
    result = C_OPS_ADD(op1, 10);
    C_ASSERT(result == 40);
    return;
}