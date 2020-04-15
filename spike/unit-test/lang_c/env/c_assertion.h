#ifndef _C_ASSERTION_H_
#define _C_ASSERTION_H_

#include "dev_serial.h"

#define C_ASSERT(expr)	\
do {	\
	if (expr) {	\
		test_print_line("PASSED <" #expr "> " __FILE__ ":", __LINE__);	\
	}	\
	else {	\
		test_print_line("FAILED <" #expr "> " __FILE__ ":", __LINE__);	\
	}	\
} while (0)

#define C_TEST_START()	\
do {	\
    test_print(__FUNCTION__);test_print("():\n");	\
} while (0)

#endif /* _C_ASSERTION_H_ */