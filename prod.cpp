#include <iostream>
#include <vector>

std::vector<int> productExceptSelf(std::vector<int> &nums)
{
    int n = nums.size();
    std::vector<int> result(n, 1);

    // Compute the left products
    int leftProduct = 1;
    for (int i = 0; i < n; ++i)
    {
        result[i] *= leftProduct;
        leftProduct *= nums[i];
    }

    // Compute the right products and multiply with the left products
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; --i)
    {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return result;
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> result = productExceptSelf(nums);

    std::cout << "Result: ";
    for (int num : result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
