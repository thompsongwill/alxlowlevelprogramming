#include <stdio.h>
 


/**
 * a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */

void printFibonacciNumbers(int n)
{
    int f1 = 0, f2 = 1, i;
 
    if (n < 1)
        return;
    printf("%d ", f1);
    for (i = 1; i < n; i++) {
        printf("%d, ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
 

int main()
{
    printFibonacciNumbers(7);
    return 0;
}
