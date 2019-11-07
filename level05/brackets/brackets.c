#include <unistd.h>

int bracket_cmp(char a, char b)
{
	if (a == '(' && b == ')')
		return (1);
	else if (a == '[' && b == ']')
		return (1);
	else if (a == '{' && b == '}')
		return (1);
	else
		return (0);
}

int brackets(char *str)
{
	int stack[4096];
	int i = 0;

	while (*str)
	{
		if (*str == '(' || *str == '[' || *str == '{')
			stack[++i] = *str;
		else if (*str == ')' || *str == ']' || *str == '}')
			if (!bracket_cmp(stack[i--], *str))
				return (0);
		str++;
	}
	return (!i);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[++i])
		if (brackets(av[i]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
	return (0);
}
