#include"main.h"
/**
 *last_index - find the last index of a string
 *@s: the string
 *Return:the last index
 *
 *
 */
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
 *check - checker for the palindrome
 *@s: the string to be checked
 *@start: int moves from the right to left
 *@end: int moves from left to right
 *@mod: int
 *Return: 0 or 1
 */
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
/**
 *is_palindrome - check the palindrome
 *@s: the string
 *Return: 0 or 1
 *
 *
 *
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));

}
