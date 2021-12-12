<h1 align=center>ft_printf</h1>

The aim of this project is to replicate the printf function in C.

Prior Knowledge to start the project:

-Variadic funcions
    
    .Variadic functions are functions that can take a variable number of arguments. In C programming, a variadic function adds flexibility to the program. It takes one fixed argument and then any number of arguments can be passed. The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last parameter.
  
  Methods and description

    va_start(va_list ap, argN)  | This enables access to variadic function arguments.

    va_arg(va_list ap, type)  | This one accesses the next variadic function argument.

    va_copy(va_list dest, va_list src)  | This makes a copy of the variadic function arguments.

    va_end(va_list ap)  | This ends the traversal of the variadic function arguments.

<h3>To start the project have in mind some basic steps you will need to consider:</h3>

1 - Create a loop in ft_printf:
    
    . Since your ft_printf will iterate over a string, it needs to loop until it founds a % character. When it finds a % it will know's there is a variable to print.


2 - Create another loop to check for conversion specifiers:
    
    .In the project you will be given a number of specifiers to convert (cspdiuxX%), so the program needs to iterate over then and see wich one will be printed.


3 - Create an structure of if/elses to check what conversion specifier it will choose:
    
    . pretty straight foward in this part, just create a bunch of if/elses to check what specifier will be chosen

