//Tìm chữ số khác không cuối cùng của n!(giai thừa)
#include<iostream>
#include<cmath>
#include <algorithm>
using namespace std;
int lastDigitDiffZero(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
        while (result % 10 == 0) result /= 10;
        result %= 100;
    }
    return result % 10;
}
int main()
{
    int n;
    cin >> n;
    cout << lastDigitDiffZero(n);
}