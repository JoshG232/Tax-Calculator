#include <iostream>
#include <vector>

std::vector<int> primeFactors(int n) {
    std::vector<int> factors;

    // Handle the case of 2 separately as it's the only even prime
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    // Check for other prime factors starting from 3
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    // If n is still greater than 1, it's a prime factor itself
    if (n > 1) {
        factors.push_back(n);
    }

    return factors;
}

int main() {
    int n = ;


    std::vector<int> factors = primeFactors(n);

    std::cout << "Prime factors of " << n << " are: ";
    for (int factor : factors) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;

    return 0;
}
