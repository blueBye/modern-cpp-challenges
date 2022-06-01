#include <iostream>
#include <set>
#include <numeric>

int main() {
    std::set<int> numbers {};
    int limit {};

    std::cout << "limit: ";
    std::cin >> limit;

    for (int i = 3; i < limit; ++i) {
        if (i % 3 == 0) 
            numbers.insert(i);
        if (i % 5 == 0) 
            numbers.insert(i);
    }

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "sum: " << sum << std::endl;
    return 0;
}