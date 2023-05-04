#include <stdio.h>

/** main -prints ascii
 *
 * return always 0
 */

int main(void)
{
	char c;

	printf("enter a character:,");
	scanf("%c",&c);
	{
		printf("ASCII value of %c = %d", c,c);
	}
	return (0);

}
