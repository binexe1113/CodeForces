#include <iostream>
#include <vector>

int main(){
  int n;
  std::cin >> n;
  
  int v;

  int count1 = 0;
  int count2 = 0;
  int count3 = 0;
  int count4 = 0;
  
  int numCars = 0;

  std::vector<int> vetor;

  for (int i = 0; i < n; i++)
  {
    std::cin >> v;
    vetor.push_back(v);
  }

  for (int value : vetor )
  {
    if (value == 4){
      count4++;
    }
    else if(value == 3){
      count3++;
    }
    else if(value == 2){
      count2++;
    }
    else{
      count1++;
    }
  }

  numCars += count4;
  
  int m = std::min(count3,count1);
  numCars += m;
  count3 -= m;
  count1 -= m;

  numCars += count3;

  numCars += count2 / 2;
  
  if (count2 % 2 != 0){
    numCars++;
    count1 -= std::min(2,count1);

  }

  if (count1 > 0){
    numCars += (count1 + 3) / 4;
  }

  std::cout << numCars; 
  
  
}

