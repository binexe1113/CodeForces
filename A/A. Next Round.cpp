#include <iostream>
#include <vector>

int main(){
    
    int n;
    int k;
    std::cin >> n;
    std::cin >> k;
    
    int count = 0;

    std::vector<int> participants = {};

    for (int i = 0; i < n; i++){
        int x = 0;
         std::cin >> x;
         participants.push_back(x);
    }
    
    int  minValue = participants[k - 1];

    for (int participant : participants){
    
        if (participant >= minValue && participant >= 1 ){
        count++;
        }
    }

    std::cout << count;

}
