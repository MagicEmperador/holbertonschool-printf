C – printf

Team Project: José Duarte Marcos, Oana Fundatureanu


Compilation:

All the files will be compiled on Ubuntu 20.04 LTS using gcc command, and the options -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format.

Task 0:

1) Start _printf() program to produce output according to a format string and write output to stdout (the standard output stream).
2) Parse the format string with while loop until not at end.
3) Use if statement to specify if '%' character is found and check next character after '%'.
       3.1) If the next character is 'c' specifier, then print character argument.
       3.2) If the next character is 's' specifier, then print string argument.
       3.3) If the next character is '%' specifier, then print '%' character.
4) End the while loop.
5) Return: the number of characters printed, excluding the null byte used to end output to strings.