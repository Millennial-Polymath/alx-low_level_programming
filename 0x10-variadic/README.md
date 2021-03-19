#0x10. C - Variadic functions

###Learning Objectives
* Understand what variadic function are
* How to use va_start, va_arg and va_end macros
* Why an how use the const type qualifier

## Tasks
###0. Beauty is variable, ugliness is constant
A functio that returns the sum of all its parameters
* prototype: `int sum_them_all(const unsigned int n, ...);`
* if n == 0, return 0