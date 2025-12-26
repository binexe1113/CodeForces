#include <cctype>
#include <iostream>
#include <string>
#include <algorithm>

bool isConsonant (char c){
    c = std::tolower(c);
    return std::isalpha(c) && (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i');
}

int main(){
    std::string dotter;
    std::string word;
    std::cin >> word;

    //Lógica de remover as vogais
    word.erase(std::remove_if(word.begin(), word.end(), isConsonant), word.end());

    //Lógica para transformar upper em lower
    std::transform(word.begin(), word.end(), word.begin(),
    [](unsigned char z) {return std::tolower(z); });

    //Lógica de adicionar os pontos
    for (char x : word){
        dotter += '.';
        dotter += x;
    }

    std::cout << dotter;
}