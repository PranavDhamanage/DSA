#include <iostream>
using namespace std;

bool findIfPalindrome(int number)
{
    int inputNumber = number;
    if (number % 10 == 0)
        return true;
    int rev = 0;
    while (number != 0)
    {
        int rem = number % 10;
        number = number / 10;
        rev = rev * 10 + rem;
    }
    return rev == inputNumber;
}

int main()
{
    int number;
    cin >> number;
    bool isPalindrome = findIfPalindrome(number);
    cout << isPalindrome;
}
