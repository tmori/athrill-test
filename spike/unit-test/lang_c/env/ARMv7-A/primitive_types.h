#ifndef _PRIMITIVE_TYPES_H_
#define _PRIMITIVE_TYPES_H_

typedef char c_sint8;
typedef short c_sint16;
typedef int c_sint32;
typedef long long c_sint64;

typedef unsigned char c_uint8;
typedef unsigned short c_uint16;
typedef unsigned int c_uint32;
typedef unsigned long long c_uint64;

typedef float c_float32;
typedef double c_float64;

typedef int	c_bool;
typedef c_uint32 Std_ReturnType;


#ifndef C_NULL
#define C_NULL	((void*)0)
#endif

#ifndef C_TRUE
#define C_TRUE	(1U)
#endif

#ifndef C_FALSE
#define C_FALSE	(0U)
#endif

#endif /* _PRIMITIVE_TYPES_H_ */
