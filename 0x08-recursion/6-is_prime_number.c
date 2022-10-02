#include "main.h"
#include <stdio.h>


/**
 * is_prime_number - returns the 1 if n is prime
 * @n: number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)

{

		
			if (n < 2)

			return (0);
			
			if (n < 4)

				return (1);

			return (is_prime(n, 2));

}



/**
 * is_prime - returns the 1 if n is prime
 * @n: number to be checked
 * @start: number to start checking from
 * Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int n, int start)

{

			if (n % start == 0)

			return (0);

			else if (_sqrt(n, 1) < start)

			return (1);

			else

			return (is_prime(n, start + 1));
}
