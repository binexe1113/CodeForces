#include <iostream>

int main(){

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++){

        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;

        std::cin >> a;
        std::cin >> b;
        std::cin >> c;
        std::cin >> d;

        if(a == b && b == c && c == d)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }






    }

}
