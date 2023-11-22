# C – printf


### TEAM PROJECT:

[![Static Badge](https://img.shields.io/badge/build-Oana-brightgreen?logo=github&label=Github&labelColor=e80c0c&color=191919
)](https://github.com/OanaFun)

[![Static Badge](https://img.shields.io/badge/build-José-brightgreen?logo=github&label=Github&labelColor=#2937c&color=191919
)](https://github.com/MagicEmperador)


### COMPILATION:

	    All the files will be compiled on Ubuntu 20.04 LTS using gcc command, and the options -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format.


### DESCRIPTION OF FUNCTION _printf:

	    _printf function is a custom function designed to emulate the behavior of the standard 'printf' function.

	    It takes a 'format' string and a variable number of arguments similar to 'printf'.

	    It iterates through a 'format' string, indentifying format specifiers (those preceded by '%') and prints characters or interprets specifiers accordingly.


### PARAMETERS:

	    'format': A pointer to a character string representing the format string. This string contains both text to be printed as-is and format specifiers for variable
	    	      substitution.


### RETURN VALUE:

	    'int': The function returns the number of characters printed (excluding the null byte used to end output to strings)


### USAGE:

	    The function uses a variable argument list ('va_list' and related functions from 'stdarg.h' library) to handle the variable number of arguments passed after
	    the 'format' parameter.

	    It initializes a 'print_t' array, 'p_functions[]', which contains structs with format specifiers and corresponding function pointers ('p_char', 'p_str',
	    'p_int', etc.)

	    It iterates through the 'format' string, identifying format specifiers (e.g., '%c', '%s', '%i', '%d') and calling the appropriate function to handle each
	    specifier.

	    If an unsupported or unrecognized specifier is encountered, it falls back to printing the specifier as a regular character.

	    The function returns the total count of characters printed.


### NOTES:

	    The supporting set of functions: 'p_char', 'p_str', 'p_int' used within the function can be found in file print_functions.c

	    The function handles both valid format specifiers and the literal '%%'escape sequence, printing a '%' character.

	    It checks for null pointers and incomplete format string to ensure proper function behaviour.


### FLOWCHART:

![Flowchart Printf](https://github.com/MagicEmperador/holbertonschool-printf/assets/144609420/2078e8e2-fac7-4842-b91e-6d18932e1913).
