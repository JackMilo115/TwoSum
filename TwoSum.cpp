// Challenge:
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.



#include <iostream>
#include <vector>



std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> answer;
    for (int i = 0; i < nums.size(); i++) {
        for (int ii = i + 1; ii < nums.size() + i; ii++) {
            if (nums[i] + nums[(ii % nums.size())] == target) {
                answer.push_back(i);
                answer.push_back(ii % nums.size());
                return answer;
            }
        }
    }
    return answer;
}

bool testTwoSum(std::vector<int> input, int target, std::vector<int> expected) {
    if (twoSum(input, target) == expected) {
        std::cout << "Success\n";
        return true;
    }
    else
    {
        std::cout << "Failure\n";
        return false;
    }
}



int main()
{
    testTwoSum({ 2, 7, 11, 15 }, 9, { 0, 1 });
    testTwoSum({ 3, 2, 4 }, 6, { 1, 2 });
    testTwoSum({ 3, 3 }, 6, { 0, 1 });
}