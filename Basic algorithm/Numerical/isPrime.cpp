//Một số nguyên tố là một số tự nhiên lớn hơn 1 và không thể tạo thành từ tích
//của hai số tự nhiên nhỏ hơn.
//Ví dụ số 2, 3, 5 được gọi là số nguyên tố
//Viết một hàm xác định xem một số nguyên dương đã cho có phải là số nguyên tố hay không.
#include<iostream>
#include<stdbool.h>
#include<cmath>
bool isprime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
    if (!n % i) return false;
    return true;
}
int main()
{
    int n;
    std :: cin >> n;
    std :: cout << std :: boolalpha << isprime(n);
}