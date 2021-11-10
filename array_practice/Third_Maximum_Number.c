//Third Maximum Number
//problem link : https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3231/

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int i=0,max,A[3],s=0;
         sort(nums.begin(), nums.end());
         if(nums.size()<3){
             return nums[nums.size()-1];
         }else{
             max=nums[nums.size()-1];
             i=nums.size()-1;
             while(i>=0){
                 printf("%d",nums[i]);
                 int j=0,check=0;
                 while(j<s){
                     if(nums[i]==A[j]){
                       check=1;   
                     }   
                       j++;
                 }
                 if(check!=1){
                    A[s++] = nums[i] ;  
                 }
                 if(s==3){
                     return A[2];
                 }
                 i--;
             }
             return A[0];
         }
        
        return 0;
    }
};