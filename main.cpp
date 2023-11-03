#include <iostream>
#include <vector>

int getSum(std::vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return sum;
}


int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Sum: " << getSum(numbers) << std::endl;
    return 0;
}
