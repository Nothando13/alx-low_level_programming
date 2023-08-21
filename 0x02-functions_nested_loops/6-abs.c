#include "main.h"

/**
 * _abs - get the absolute value of a member
 *
 * @abs_num: convert to absolute value if negative
 * Return: return absolute valu if negaative
 */
int _abs(int abs_num)
{
	int num = abs_num;

	if (num < 0)
	{
		num = -num;
		return (num);
	}
	else
	{
		return (num);
	}

	return (0);
}
