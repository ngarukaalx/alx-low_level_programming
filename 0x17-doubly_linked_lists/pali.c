#include <stdio.h>
#include <stdbool.h>

bool ispalindrome(int num)
{
	int original = num;
	
	int reversed = 0;

	while (num > 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return original == reversed;
}

int findlargest()
{
	int largestpa = 0;

	int i, j, product;

	for (i = 999; i >= 100; i--)
	{
		for (j = i; j >= 100; j--)
		{
			product = i * j;
			if (product > largestpa && ispalindrome(product))
			{
				largestpa = product;
			}
		}
	}
	return (largestpa);
}

int main()
{
	int large = findlargest();
	printf("%d\n", large);

	return (0);
}
