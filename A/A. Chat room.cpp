#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::string target = "hello";
    int targetIndex = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == target[targetIndex]) {
            targetIndex++;
        }

        if (targetIndex == 5) {
            break;
        }
    }

    if (targetIndex == 5) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
