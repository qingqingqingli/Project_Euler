
/*
** If we list all the natural numbers below 10
** that are multiples of 3 or 5, we get 3, 5, 6 and 9.
** The sum of these multiples is 23.
** Find the sum of all the multiples of 3 or 5 below 1000.
*/

/* ORIGINAL VERSION */
/* to test if the number can be divided by 3 or 5 */
/* add those numbers up */
/* PROBLEM: not scalable*/

#include <stdio.h>

// int main(void)
// {
// 	int number = 1;
// 	int sum = 0;

// 	while (number < 1000)
// 	{
// 		if (number % 3 == 0 || number % 5 == 0)
// 			sum += number;
// 		number++;
// 	}
// 	printf("sum is %d\n", sum);
// 	return (0);
// }

/* VERSION 2*/
/* sum up all numbers that can be divided by 3 and 5, minus 15 */
/* required operation is way less than version 1 */ 

long long int ft_sum_divided_by(long long int limit, long long int divider)
{
	long long int p;
	long long int output = 0;

	p = limit / divider;
	output = divider*(p*(p+1)) / 2;
	return(output);
}

int main(void)
{
	long long int final_output = 0;
	long long int limit = 9999999; /*not including 1000 */

	final_output = ft_sum_divided_by(limit, 3) + ft_sum_divided_by(limit, 5)\
	- ft_sum_divided_by(limit, 15);
	printf("sum is %lli\n", final_output);
	return (0);
}