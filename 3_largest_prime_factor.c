/* The prime factors of 13195 are 5, 7, 13 and 29. */
/* What is the largest prime factor of the number 600851475143? */

#include <stdio.h>
#include <math.h>

long long int ft_check_prime(long long int next_prime)
{
	long long int divider = next_prime - 1;
	while(divider > 1)
	{
		if (next_prime % divider == 0)
			return (0);
		divider--;
	}
	return (1);	
}

long long int ft_next_prime(long long int prime_number)
{
	long long int next_prime = prime_number + 1;
	while (ft_check_prime(next_prime) != 1)
		next_prime++;
	return (next_prime);
}

int main(void)
{
	long long int number = 600851475143000;
	long long int prime_number = 2;
	long long int divider = 0;
	double largest_prime_factor = 0;
	
	largest_prime_factor = sqrt((double)number);

	/* number needs to be bigger than 1, as when number == prime_number
	number / prime_number == 1, it will go into an infinite loop */
	while (number > 1)
	{
		divider = number % prime_number;
		if (divider == 0)
		{
			printf("prime_number is %lli\n", prime_number);
			while (divider == 0)
			{
				number = number / prime_number;
				divider = number % prime_number;
			}
		}
		else if (divider != 0)
			prime_number = ft_next_prime(prime_number);
	}
	/* need to figure out how to incorporate the largest prime factor */
	
	// if ((double)prime_number > largest_prime_factor)
	// {
		
	// 	printf("here\n");
	// 	if (number == prime_number)
	// 		printf("prime_number is %lli\n", prime_number);
	// 	else if (number != prime_number)
	// 		printf("prime_number is %lli\n", number);
	// }
	return(0);
}
