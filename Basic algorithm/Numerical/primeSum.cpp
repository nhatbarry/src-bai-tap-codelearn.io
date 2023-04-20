// Một bài nâng cao từ bài kiểm tra số nguyên tố:
// Cho số nguyên n, hãy tính tổng các số nguyên tố nhỏ hơn hoặc bằng n
#include<stdbool.h>
#include<iostream>
#include<cmath>
int mod = 22082018;
bool a[10000005];
void prime(int n)
{
    for(int i = 0; i <= n; i++)
    a[i] = true;
    a[0] = false;
    a[1] = false;
    for(int i = 2; i <= n; i++)
    if(a[i])
        for(int j = 2 * i; j <= n; j += i)
        a[j] = false;
}
int primeSum(int n)
{
    prime(n);
    int d = 0;
    for(int i = 2; i <= n; i++)
    {
        if(a[i]){
            d = (d + i % mod) % mod;
        }
    }
    return d;
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << primeSum(n);
}