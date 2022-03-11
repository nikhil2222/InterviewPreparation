// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int number1 = -1,number2 = -1,count1 =0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==number1) count1++;
            else if(nums[i]==number2) count2++;
            else if(count1==0) {
                number1 = nums[i];
                count1=1;
            }
            else if(count2==0){
                number2 = nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int> result;
        int c1=0;
        int c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==number1){
                c1+=1;
            }
            else if(nums[i]==number2){
                c2+=1;
            }
        }
        if(c1>nums.size()/3){
            result.push_back(number1);
        }
        if(c2>nums.size()/3){
            result.push_back(number2);
        }
        return result;
        
        
        
    }
};