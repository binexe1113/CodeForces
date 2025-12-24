#include <iostream>

int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();

    int x = 0;

   for (size_t i = 0; i < n; i++ ){
        std::string s;
        std::cin >> s;

        if(s[0] == '+' && s[1] == '+'){
            x++;
        }else if(s[1] == '+' && s[2] == '+'){
            x++;
        }

        if(s[0] == '-' && s[1] == '-'){
            x--;
        }else if(s[1] == '-' && s[2] == '-'){
            x--;
        }

} 

std::cout << x;
    
}