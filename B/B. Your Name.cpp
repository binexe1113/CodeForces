#include <iostream>
#include <string>
#include <algorithm>


int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int stringSize = 0;
        std:: cin >> stringSize;

        std::string s;
        std:: cin >> s;

        std::string t;
        std:: cin >> t;

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if (s == t){
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }

    }
}
