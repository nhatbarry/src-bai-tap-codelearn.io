//Cho số tự nhiên product
// Hãy tìm số nguyên dương nhỏ nhất (lớn hơn 0) 
// mà tích các chữ số của số đó bằng product. Nếu không có số thỏa mãn, trả ra -1.
#include<iostream>
using namespace std;
int digitsProduct(int n)
{
    if (n == 0) return 10;
    if (n == 1) return 1;
    int answer = 0;
    for (int i = 9; i >= 2; i--){
        while(n % i == 0){
            answer = answer * 10 + i;
            n /= i;
        }
    }
    int ans2 = 0;
    while (answer > 0){
        ans2 = ans2 * 10 + answer % 10;
        answer /= 10;
    }
    return n == 1 ? ans2 : -1;
}
int main()
{
    int n;
    cin >> n;
    cout << digitsProduct(n);
}