/*Cada brinquedo tem um valor, e a sequencia de brinquedos deve estar do menos para o menor, o ponto eh que devemos iterar sobre esse array a fim
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t = 0;
        std:: cin >> t;

        std::vector <long long> a(t);
        bool hasEven = false, hasOdd = false;


        for (int i = 0; i < t; i++)
        {
            std::cin >> a[i];
            if (a[i] % 2 == 0)
            {
                hasEven = true;
            }
            else
            {
                hasOdd = true;
            }
        }

        if (hasEven && hasOdd)
        {
            sort(a.begin(), a.end());
        }

        for (long long number : a)
        {
            std::cout << number << " ";
        }

        std::cout << "\n";
    }

}
