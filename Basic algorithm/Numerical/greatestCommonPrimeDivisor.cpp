//GCPD (Greatest Common Prime Divisor) được định nghĩa là số nguyên tố lớn nhất 
//là ước của các số nguyên dương cho trước. 
//Nhiệm vụ của bạn là tìm GCPD của hai số nguyên a và b
#include<iostream>
#include<stdbool.h>
#include<cmath>
bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
    if (!n % i) return false;
    return true;
}
int min(int a, int b){
    return (a < b) ? a : b;
}
int greatestCommonPrimeDivision(int a, int b)
{
    int temp;
    for (int i = 0; i < min(a, b); i++){
        if(isPrime(i)==false) continue;
        else if(a % i == 0 & b % i == 0)
        temp = i;
    }
    return temp;
}

int main(){
    int a,b;
    std :: cin >> a >> b;
    std :: cout << greatestCommonPrimeDivision(a,b);
}