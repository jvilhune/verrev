include <stdio.h>

long calculateAddition(long a, long b)

int main(void)
{
	long retVal = 0;
	printf("\n");
	printf("\n");
	printf("\nHello World");
	printf("\n");

        retVal = calculateAddition(40, 20);
	printf("\nretVal = ", retVal);

	return 0;
}


long calculateAddition(long a, long b)
{
	long retVal = 0;

	retVal = a + b;
	return retVal;
}






