#include "main.h"

/**
 * ev_print_func - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */
int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex}, {"X", print_upx},
		{"S", print_usr}, {"p", print_add}, {"li", printint},
		{"ld", printint}, {"lu", printunt}, {"lo", printoct},
		{"lx", printhex}, {"lX", printupx}, {"hi", printint},
		{"hd", printint}, {"hu", printunt}, {"ho", printoct},
		{"hx", printhex}, {"hX", printupx}, {"#o", printoct},
		{"#x", printhex}, {"#X", printupx}, {"#i", print_int},
		{"#d", print_int}, {"#u", print_unt}, {"+i", printint},
		{"+d", printint}, {"+u", print_unt}, {"+o", print_oct},
		{"+x", print_hex}, {"+X", print_upx}, {" i", printint},
		{" d", printint}, {" u", print_unt}, {" o", print_oct},
		{" x", print_hex}, {" X", print_upx}, {"R", print_rot},
		{"r", print_rev}, {"%", print_prg}, {"l", print_prg},
		{"h", print_prg}, {" +i", printint}, {" +d", printint},
		{"+ i", printint}, {"+ d", printint}, {" %", print_prg},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
