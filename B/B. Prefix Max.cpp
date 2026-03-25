#include <iostream>
#include <vector>
#include <algorithm> // For std::max_element
#include <iterator>  // For std::distance

int main() {
    int n; // Number of test cases
    std::cin >> n;

    // Loop through all 'n' test cases
    for (int i = 0; i < n; i++) {

        int x; // Size of the array
        std::cin >> x;

        // Use a std::vector instead of a standard array
        // This automatically makes it size 'x'
        std::vector<int> a(x);

        // Read exactly 'x' elements into the vector
        for (int j = 0; j < x; j++) {
            std::cin >> a[j];
        }

        // NOW that the vector is full, find the MAXIMUM element
        auto max_it = std::max_element(a.begin(), a.end());

        // Find the index of that maximum element
        int indexMax = std::distance(a.begin(), max_it);

        // If the max element isn't already at index 0, swap it
        if (indexMax != 0) {
            std::swap(a[0], a[indexMax]);
        }

        // Calculate the final answer: size of array * the new first element
        int answer = x * a[0];

        // Print the answer for this test case
        std::cout << answer << "\n";
    }

    return 0;
}
