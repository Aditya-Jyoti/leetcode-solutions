#include <unordered_map>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        std::unordered_map<int, int> intMap;

        for (int i = 0; i < nums.size(); i++)
        {
            int item = nums[i];
            auto iter = intMap.find(target - item);

            if (iter != intMap.end())
            {
                return {intMap[target - item], i};
            }

            intMap.insert({item, i});
        }

        return {};
    };
};
