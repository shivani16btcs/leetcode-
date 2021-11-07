//Sort Array By Parity
// problwm link: https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3260/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,start=0,t;
        for(i=nums.size()-1;i>start;i--){
            if(nums[i]%2==0){
                t=nums[start];
                nums[start]=nums[i];
                nums[i]=t;
                i++;
                start++;
            }
        }
        return nums;
    }
};