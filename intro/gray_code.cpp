#include <bits/stdc++.h>

// Function to generate Gray codes recursively
void generateGrayCode(int n, std::vector<std::string> &grayCodes) {
    // Base case
    if (n == 0) {
        grayCodes.push_back("");
        return;
    }
    
    // Recursively generate gray codes for n-1
    generateGrayCode(n - 1, grayCodes);
    
    // Create a copy of the current gray codes
    std::vector<std::string> reversedGrayCodes = grayCodes;
    
    // Reverse the copy
    std::reverse(reversedGrayCodes.begin(), reversedGrayCodes.end());

    // Append '0' to the original gray codes
    for (std::string &code : grayCodes) {
        code = "0" + code;
    }
    
    // Append '1' to the reversed gray codes
    for (std::string &code : reversedGrayCodes) {
        code = "1" + code;
    }
    
    // Combine both vectors
    grayCodes.insert(grayCodes.end(), reversedGrayCodes.begin(), reversedGrayCodes.end());
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<std::string> grayCodes;
    generateGrayCode(n, grayCodes);
    
    for (const std::string &code : grayCodes) {
        std::cout << code << std::endl;
    }
    
    return 0;
}
