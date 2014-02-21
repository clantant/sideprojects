#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <fcntl.h>

int *sieve(int n)
{
	int i, j; /*counters for sieve */
	static int *prime; /*static so it returns successfully */
	prime = malloc(sizeof(int) * n); /*give enough memory for all the numbers in the array */
	for (i = 3; i < n; i = i + 2){ /*fill odd values of array as true */
		prime[i] = 1;
	}
	prime[2] = 1;
	prime[1] = 0; 
	prime[0] = 0; /*account for special cases */

	for (i = 2; i < n; i++){
		if (prime[i]) { /*if unmarked as true */
			for(j = i; i*j < n; j++){ /*go over the 2m, 3m, ... until square root */
				prime[j * i] = 0; /*mark the non primes as not true */
			}
			
		}
	}
	return prime; /*return pointer to array */
}

int main(int argc, char **argv)
{
	FILE *input;
	char *filename;
	int i, x, c;
	c = 1;
	filename = argv[1];
	input = fopen(filename, "r");
	while(c != EOF){
		c = fscanf(input, "%d", &i);
		if (c == EOF){
			break;
		}
		int *primes;
		primes = (int *) malloc(sizeof(int) * i);
		primes = sieve(i);
		for(x = 0; x < i; x++){
			if(primes[x]){
				printf("%d,", x);
			}
		}
		printf("\n");
	}
	fclose(input);
}
