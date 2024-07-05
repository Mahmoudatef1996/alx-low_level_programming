/**
 * string_toupper -  function that changes all lowercase
 * letters of a string to uppercase.
 * @ch: the only argument
 * Return: pointer of char
 */
char *string_toupper(char *ch)
{
	int i = 0;

	while (*ch != '\0')
	{
		if (*ch >= 'a' && *ch <= 'z')
		{
			*ch = *ch - 32;
		}
		ch++;
		i++;
	}
	while (i > 0)
	{
		ch--;
		i--;
	}
	return (ch);
}
