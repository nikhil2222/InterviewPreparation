// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.
soltuion :
bruteforce: o(n logn)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int temp = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]){
                temp= nums[i];
            }
        }
        return temp;
    }
};

