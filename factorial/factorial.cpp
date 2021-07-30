#include <iostream>
using namespace std;

// space complexity is more in this solution
int findFactorialRecursively(int num)
{
    if (num == 0 || num == 1)
        return 1;
    return findFactorialRecursively(num - 1) * num;
}

// space complexity is less in this solution
int findFactorialIteratively(int num)
{
    int res = 1;
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
    int recursiveOutput = findFactorialRecursively(number);
    int iterativeOutput = findFactorialIteratively(number);
    cout << recursiveOutput << endl;
    cout << iterativeOutput;
}