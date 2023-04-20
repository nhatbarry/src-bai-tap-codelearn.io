// Cho biết số trang sách của 1 quyển sách
// Hãy tìm số lượng các chữ số dùng để đánh số trang của quyển sách đó
#include<cmath>
#include<iostream>
using namespace std;
int pagesNumbering(int n)
{
    if(n > 0 && n < 10) return n;
    int k = n;
    int cnt = 0;
    while(k > 0){
        k /= 10;
        cnt ++;
    }
    k = 0;
    for (int i = 1; i < cnt; i++)
    for (int j = pow(10, i - 1); j <= pow(10, i) - 1; j++)
    k += i;
    int k2 = 0;
    for (int i = pow(10, cnt-1); i <= n; i++)
    {
        k2 += cnt;
    }
    return k + k2;
}
int main()
{
    int n;
    cin >> n;
    cout << pagesNumbering(n);
}