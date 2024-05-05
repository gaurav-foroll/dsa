#include <stdio.h>
#include <unordered_map>

using namespace std;

bool dup(int *nums, int numsSize)
{

    unordered_map<int, int> ump;

    for (int i = 0; i < numsSize; i++)
    {
        if (ump[nums[i]] > 0)
        {
            return true;
        }
        ump[nums[i]]++;
    }

    return false;
}