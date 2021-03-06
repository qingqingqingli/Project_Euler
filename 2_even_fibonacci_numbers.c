/*
** Each new term in the Fibonacci sequence is generated by adding
** the previous two terms. By starting with 1 and 2, 
** the first 10 terms will be:
** 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
**
** By considering the terms in the Fibonacci sequence 
** whose values do not exceed four million,
** find the sum of the even-valued terms.
*/

#include <stdio.h>

/* VERSION 1 */

// int main(void)
// {
// 	int limit = 4000000;
// 	int sum = 0;
// 	int a = 1;
// 	int b = 1;
// 	int value_hold = 0;

// 	while (b < limit)
// 	{
// 		if (b % 2 == 0)
// 			sum = sum + b;
// 		value_hold = a + b;
// 		a = b;
// 		b = value_hold;
// 	}
// 	printf("sum is %d\n", sum);
// 	return (0);
// }

/* VERSION 2 */
/* to add up every third value */

int main(void)
{
	int limit = 4000000;
	int sum = 0;
	int a = 1;
	int b = 1;
	int c = a + b;

	while (b < limit)
	{
		sum = sum + c;
		a = b + c;
		b = c + a;
		c = a + b;
	}
	printf("sum is %d\n", sum);
	return (0);
}