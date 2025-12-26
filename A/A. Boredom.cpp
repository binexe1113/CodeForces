#include<iostream>
#include<vector>


int main(){
    int n;
    int x;
    int pontuacao = 0;
    std::cin >> n;
    std::vector<int> vetor; 

    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        vetor.push_back(x);
    }

    while(!vetor.empty())
    {
        int indiceEncontrado = 0; 
        int maiorValor = 0;


        for (int value : vetor )
        {
            if (value > maiorValor)
            {
                maiorValor = value;
            }
        }


        for (int i = 0; i < vetor.size(); ++i)
        {
            if (vetor[i] == maiorValor) 
            {
            indiceEncontrado = i;
            break; 
            }
        

        }
        
        vetor.erase(vetor.begin() + indiceEncontrado);


        std::erase(vetor, maiorValor + 1);
        std::erase(vetor, maiorValor - 1);

        pontuacao += maiorValor;


        
    }

    std::cout << pontuacao;
}