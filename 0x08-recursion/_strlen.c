
/**
 * _strlen - calculate string length
 * @s: string
 *
 * Return: length of given string.
 */
int _strlen(char *s)
{
unsigned int str_len = 0;
while (*s != '\0')
{
str_len += 1;
s++;
}
return (str_len);
}
