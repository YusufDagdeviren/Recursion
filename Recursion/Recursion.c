#include<stdio.h>
#include<stdlib.h>
int factorial(int n) {
	if (n == 0) {
		return 0;
	}

	if (n == 1)
		return 1;

	else
		return n * factorial(n - 1);

}
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}
void printFun(int test)
{
    if (test < 1)
        return;
    else {
		printf("%d\t",test);
        printFun(test - 1); // statement 2
		printf("%d\t", test);
        return;
    }
}
int main() {

	printf("5 is factorial = %d", factorial(17));
	//printf("%d", fib(4));
	//printFun(3);
	return 0;
}