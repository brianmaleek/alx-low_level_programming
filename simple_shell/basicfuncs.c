
/**
 * *_strcpy - copies the string pointed to by src
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int l, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (l = 0; l <= length ; l++)
	{
		dest[l] = src[l];
	}
	return (dest);
}


/**
 * _strlen - returnthe length of a string.
 *
 *@s: the string to calculate.
 * Return: returns length of a string.
 */

int _strlen(char *s)
{
	int x;

	int length = 0;

	for (x = 0 ; s[x] != '\0'; x++)
	{
		length++;
	}
	return (length);
}
