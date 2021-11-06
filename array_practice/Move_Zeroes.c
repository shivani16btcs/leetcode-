//Move Zeroes
//problem link:https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3157/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,top=nums.size(),t=0;
        for(i=0;i<top;i++){
            if(nums[i]==0){
                t=nums[i];
                int j=i;
                while(j<top-1){
                    nums[j]=nums[j+1];
                    j++;
                }
                nums[top-1]=t;
                top=top-1;
                i=i-1;
            }
        }
    }
};
