#include <iostream>
#include <string>

int main(){

    int n;
    std::cin >> n;
    std::cin.ignore();


    int result = 0;

    do{
        int c = 0;
        std::string s;
        
        std::getline(std::cin, s);

        if (s[0] == '1'){
            c++;
        }
        if (s[2] == '1'){
            c++;
        }
        if (s[4] == '1'){
            c++;
        }

        if (c >= 2){
            result += 1;
            n--;
        }else{
            n--;
        }


    }while (n !=0);

    std::cout << result;

}