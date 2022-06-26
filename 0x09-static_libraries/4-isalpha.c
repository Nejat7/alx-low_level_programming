#include "main.h"
/**
 *_isalpha - controls if a character is a letter
 *@c: character to be verified
 * Return: 1 or 0 depending on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

