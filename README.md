# ft_printf

The aim of this project is to replicate the printf function in C.

Prior Knowledge to start the project:

-Variadic funcions
  .Variadic functions are functions that can take a variable number of arguments. In C programming, a variadic function adds flexibility to the program. It takes one fixed argument and then any number of arguments can be passed. The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last parameter.
        Methods                                       Description


va_start(va_list ap, argN)	| This enables access to variadic function arguments.
va_arg(va_list ap, type)	| This one accesses the next variadic function argument.
va_copy(va_list dest, va_list src)	| This makes a copy of the variadic function arguments.
va_end(va_list ap)	| This ends the traversal of the variadic function arguments.
