/**
 * cap_string -  function that capitalizes all words of a string.
 * * @ch: the string
 * Return: return the srting
 */
char *cap_string(char *ch)
{
	int i = 0;
	int len = 0;

	while (*ch != '\0')
	{
		if (i == 0 && *ch >= 'a' && *ch <= 'z')
		{
			*ch = *ch - 32;
			i++;
		}
		else if (*ch == ',' || *ch == ';' || *ch == '.' || *ch == '!'
				|| *ch == '?' || *ch == '"' || *ch == ' '
				|| *ch == '(' || *ch == ')' || *ch == '{'
				|| *ch == '}' || *ch == '\n' || *ch == '\t')
		{
			i = 0;
		}
		else
		{
			if (*ch >= 'A' && *ch <= 'Z' && i != 0)
				*ch = *ch + 32;
			i++;
		}
		if (*ch == '\t')
			*ch = ' ';
		ch++;
		len++;
	}
	while (len > 0)
	{
		len--;
		ch--;
	}
	return (ch);
}
