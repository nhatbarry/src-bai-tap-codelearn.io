// Chúng ta có một số nguyên dương n. Mỗi một lần ta thay thế n bằng tổng các thừa số 
// nguyên tố của nó (ví dụ 12=2*2*3 thì 12 sẽ được thay thế bằng số 2+2+3=7)
// Chúng ta áp dụng phép toán này vào số hiện tại cho đến khi kết quả thu được giống vs số hiện tại
// Cho một số tự nhiên, hãy tìm kết quả cuối cùng của phép toán trên.
#include <iostream>
int solve(int n){
    int k = 2, sum = 0;
    while (n > 1){
        while (n % k == 0){
            sum += k;
            n /= k;
        }
        k++;
    }
    return sum;
}
int factorSum(int n)
{
    while (n != solve(n))
        n = solve(n);
    return n;
}
int main()
{
    int n;
    std::cin >> n;
    n = factorSum(n);
    std::cout << n << std::endl;
    return 0;
}
