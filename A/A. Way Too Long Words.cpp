#include <iostream>
#include <string>

int main(){

    int n;

    std::string word;

    std::cin >> n;

    do{
        std::cin >> word;

        if (word.size() > 10){
            std::cout <<  word[0] 
                    << word.size() - 2 
                    << word[word.size()-1]
                    <<"\n";
                    n--;
        }else{
            std::cout << word <<"\n";
            n--;
        }

    }while(n !=0);
}