#include <assert.h>
#include "../src/math_function.h"

int addition(int a, int b)
{
	return 12;
}

int main()
{
	printf("test 1");
	int inputX = 5;
	int inputY = 7;
	int expectedValue=11;
 	assert(addition(inputX, inputY)== expectedValue);

	printf("The test is successful");
	return 0;
}
