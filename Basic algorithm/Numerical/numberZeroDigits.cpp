// Cho số tự nhiên n.
// Hãy tính số chữ số 0 tận cùng của n! (n! (hay còn gọi là n giai thừa) 
// là tích các số tự nhiên liên tiếp từ 1 tới n)
#include<iostream>
#include<algorithm>
int numberZeroDigits(int n)
{
    int k = 5;
    int res = 0;
    while(k <= n)
    {
        res += n / k;
        k *= 5;
    }
    return res;
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << numberZeroDigits(n);
}