#include <iostream>
#include <cmath>


using namespace std;

//Task - 1
int fib(int n)
{
    if (n == 0)
    {
         return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

//Task - 2
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

//Task - 3
int sumOfDigits(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return x + sumOfDigits(x - 1);
    }
}

//Task - 4
int findMin(int a[], int size)
{
    int minimum = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < minimum)
        {
            minimum = a[i];
        }
    }
    return minimum;
}

//Task - 5
int DecToBin(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return dec % 2 + 10 * DecToBin(dec / 2);
    }
}

//Task - 6
double sumOfSeries(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 1.0 / pow(2, n) + sumOfSeries(n - 1);
    }
}

int main()
{
    cout << "1. Fibonacci number: " << fib(6) << endl;
    cout << "2. Factorial number: " << factorial(4) << endl;
    cout << "3. Sum of the digits: " << sumOfDigits(5) << endl;

    int a[10] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9};

    cout << "4. Minimum element in an array: " << findMin(a, 10) << endl;
    cout << "5. Conversion of a decimal number to binary number: " << DecToBin(10) << endl;
    cout << "6. Sum of the series: " << sumOfSeries(2) << endl;
    return 0;
}
