/**
 * _memset - function that fills memory with a constant byte.
 * @s: the string
 * @b: char
 * @n: size of bytes
 * Return: return pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
