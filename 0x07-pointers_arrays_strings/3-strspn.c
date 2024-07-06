/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the first parameter
 * @accept: the second parameter
 * Return: return unsignd int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; *accept != '0'; i++)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}
		accept = accept - i;
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
