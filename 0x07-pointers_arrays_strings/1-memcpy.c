/**
 * _memcpy - function that copies memory area.
 * @dest: the fisrst argumnent
 * @src: the second argument
 * @n: ths size
 * Return: return pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
