// Remove Element
// problem link : https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3575/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,l=nums.size(),t;
        for(i=0;i<l;i++){
            if(nums[i]==val){
                t= nums[l-1];
                nums[l-1]=nums[i];
                nums[i]=t;
                l--;
                i--;
            }
        }
        // l=nums.size();
        // for(i=0;i<l;i++){
        //    printf(" %d",nums[i]); 
        // }
        return l;
    }
};