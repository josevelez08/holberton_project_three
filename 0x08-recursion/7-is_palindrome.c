/**
 * _strlen_recursion - returns the leght of a string
 * @s: the string
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
		int tamano = 0;

		if (*s != '\0')
		{
			tamano = 1 + _strlen_recursion(s + 1);
		}
		return (tamano);
}

	int find_palindrom(char *word, int i, int size)
	{
		int last;

		last = size - i - 1;
		if (word[i] != word[last])
		{
			return (0);
		} else if (size / 2 > i)
		{
			return (1);
		}
		return (find_palindrom(word, i + 1, size));
	}

	int is_palindrome(char *s)
	{
	return (find_palindrom(s, 0, _strlen_recursion(s)));
	}
