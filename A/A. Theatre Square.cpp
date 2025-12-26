#include<iostream>

int main(){
    long long n;
    long long m;
    long long a;
    long long min;

    std::cin >> n;
    std::cin >> m;
    std::cin >> a;

    min = ((n+a-1)/a) * ((m+a-1)/a);

    std::cout << min;
}