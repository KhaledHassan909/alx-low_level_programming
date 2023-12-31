/**
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
	unsigned int len = 0;
	const char *ptr = str;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	return (len);
}
