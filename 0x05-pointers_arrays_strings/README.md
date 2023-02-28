C - Pointers, arrays and strings.

0. Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
	0.1. Prototype: void reset_to_98(int *n);

1. Write a function that swaps the values of two integers.
	1.0. Prototype: void swap_int(int *a, int *b);

2. Write a function that returns the length of a string.
	2.0. Prototype: int _strlen(char *s);
	2.1. FYI: The standard library provides a similar function: strlen. Run man strlen to learn more

3. Write a function that prints a string, followed by a new line, to stdout.
	3.0. Prototype: void _puts(char *str);
	3.1. FYI: The standard library provides a similar function: puts. Run man puts to learn more.

4. Write a function that prints a string, in reverse, followed by a new line.
	4.0. Prototype: void print_rev(char *s);

5. Write a function that reverses a string.
	5.0. Prototype: void rev_string(char *s);

6. Write a function that prints every other character of a string, starting with the first character, followed by a new line.
	6.0. Prototype: void puts2(char *str);

7. Write a function that prints half of a string, followed by a new line.
	7.0. Prototype: void puts_half(char *str);
	7.1. The function should print the second half of the string.
	7.2. If the number of characters is odd, the function should print the last n characters of the string, 
		where n = (length_of_the_string - 1) / 2

8. Write a function that prints n elements of an array of integers, followed by a new line.
	8.0. Prototype: void print_array(int *a, int n);
	8.1. where n is the number of elements of the array to be printed
	8.2. Numbers must be separated by comma, followed by a space
	8.3. The numbers should be displayed in the same order as they are stored in the array
	8.4. You are allowed to use printf

9. Write a function that copies the string pointed to by src, including the terminating null byte (\0), 
	to the buffer pointed to by dest.
	9.0. Prototype: char *_strcpy(char *dest, char *src);
	9.1. Return value: the pointer to dest
	9.2. FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

10. Write a function that convert a string to an integer.
	10.0. Prototype: int _atoi(char *s);
	10.1. The number in the string can be preceded by an infinite number of characters
	10.2. You need to take into account all the - and + signs before the number
	10.3. If there are no numbers in the string, the function must return 0
	10.4. You are not allowed to use long
	10.5. You are not allowed to declare new variables of “type” array
	10.6. You are not allowed to hard-code special values
	10.7. We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
	10.8. FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

11. Create a program that generates random valid passwords for the program 101-crackme.
	11.0. You are allowed to use the standard library
	11.1. You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
	11.2. man srand, rand, time
	11.3. gdb and objdump can help
