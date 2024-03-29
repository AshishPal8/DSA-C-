#include <bits/stdc++.h>

using namespace std;

int count(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        cnt = cnt + 1;
        n = n / 10;
    }
    cout << cnt;
    return cnt;
}
int revNum(int n)
{
    // 1. modulo with the 10
    // 2. divide the n with 10
    // 3. revN = (revN * 10) + last digit
    int revN = 0;
    bool isNegative = false;

    if (n < 0)
    {
        isNegative = true;
        n = -n;
    }

    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        revN = (revN * 10) + lastDigit;
    }

    if (isNegative)
    {
        revN = -revN;
    }
    cout << revN;

    return revN;
}
int isPalindrome(int n)
{
    // take duplicate of n and compare it with the reverse number
    int revN = 0;
    int dup = n;

    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        revN = (revN * 10) + lastDigit;
    }
    if (revN == dup)
        cout << "true";
    else
        cout << "false";

    // cout << revN;

    return revN;
}
int isArmstrong(int n)
{
    int dup, remainder, result, sum = 0;
    dup = n;

    while (dup != 0)
    {
        remainder = dup % 10;
        sum += round(pow(remainder, n));
        result += sum;
        dup /= 10;
    }
    if (result == n)
        cout << n << "true";
    else
        cout << n << "false";

    return sum;
}
int divisible(int n)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (n / i) * i;
    }
    cout << sum;
    return sum;
}
bool isPrime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
            count++;
        if ((n / i) != i)
            count++;
    }
    if (count == 2)
    {
        cout << "True";
        return true;
    }
    else
    {
        cout << "False";
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    isPrime(n);
}