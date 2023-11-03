#include <iostream>
#include <vector>

int getSum(std::vector<int> vec)
{
    int sum = 0;
    for (int num : vec)
    {
        sum += num;
    }
    return sum;
}

float getAvg(std::vector<int> vec)
{
    float sum = getSum(vec);
    return sum / vec.size();
}
int getmin(std::vector<int> vec)
{
    int mn = 1e5;
    for (int i = 0; i < vec.size(); i++)
    {
        if (mn > vec[i])
            mn = vec[i];
    }
    return mn;
}
int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Sum: " << getSum(numbers) << std::endl;
    std::cout << "Avg: " << getAvg(numbers) << std::endl;
    return 0;
}
