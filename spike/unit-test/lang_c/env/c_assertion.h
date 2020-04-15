#ifndef _C_ASSERTION_H_
#define _C_ASSERTION_H_

#include "dev_serial.h"

#define ASSERT(expr)	\
do {	\
	if (expr) {	\
		test_print_line("PASSED <" #expr "> " __FILE__ ":", __LINE__);	\
	}	\
	else {	\
		test_print_line("FAILED <" #expr "> " __FILE__ ":", __LINE__);	\
	}	\
} while (0)

#endif /* _C_ASSERTION_H_ */