gcc - GNU compiler collection, mostly used to compile c,c++ object-c go and d programs.

options;-
-Wall :- his enables all the warnings about constructions that some users consider questionable, and that are easy to avoid (or modify to prevent the warning), even in conjunction with macros
-Werror:-Make all warnings into errors.
-pendantic :-its warnings are also disabled in the expression that follows __extension__. However, only system header files should use these escape routes; application programs should avoid them
-Wextra :- This enables some extra warning flags that are not enabled by -Wall. (This option used to be called -W. The older name is still supported, but the newer name is more descriptive.).Its also used to prints warning messages for the following cases:

A pointer is compared against integer zero with <, <=, >, or >=.
(C++ only) An enumerator and a non-enumerator both appear in a conditional expression.
(C++ only) Ambiguous virtual bases.
(C++ only) Subscripting an array that has been declared register.
(C++ only) Taking the address of a variable that has been declared register.
(C++ only) A base class is not initialized in the copy constructor of a derived class.