#include <iostream>

int main(){

    int n;
    int t;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cin >> t;
        for (int j = 1; j<= t; j++){
            std::cout << j << " ";
        }

        std::cout << "\n";


    }
    return 0;
}
