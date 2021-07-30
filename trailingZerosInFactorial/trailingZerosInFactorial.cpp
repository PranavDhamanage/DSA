#include <iostream>
using namespace std;

int findTrailingZeros(unsigned long long int factorialValue)
{
    int zeroCount = 0;
    while (factorialValue % 10 == 0)
    {
        zeroCount++;
        factorialValue = factorialValue / 10;
    }
    return zeroCount;
}

unsigned long long int findFactorialIteratively(int num)
{
    unsigned long long int res = 1;
    for (int i = 2; i <= num; i++)
    {
        res = res * i;
    }
    return res;
}

int main()
{
    int number;
    cin >> number;
    unsigned long long int factorialValue = findFactorialIteratively(number);
    cout << factorialValue << endl;
    int totalZeros = findTrailingZeros(factorialValue);
    cout << totalZeros;
}