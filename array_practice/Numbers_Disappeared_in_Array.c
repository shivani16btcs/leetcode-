//Find All Numbers Disappeared in an Array
// problem link : https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3270/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
       int i=0,t;
       int* a;
        a= (int *)malloc( numsSize * sizeof(int)); 
       // set all index missing value =0 
       while(i<numsSize){
            if(nums[i]!=i+1&&nums[i]!=0){
                t=nums[i];
                if(nums[t-1]!=t){
                     nums[i]=nums[t-1];
                     nums[t-1]=t;
                }else{
                    nums[i]=0;
                    i++;
                }
            }else{
              i++;   
            }
        }
        // set index of all value = 0  as, missing values
        t=0;
        for(i=0;i<numsSize;i++){
            if(nums[i]==0){
                a[t++]=i+1;
            }
        }
      
      // set size of returned array
      *returnSize=t;
        
        return a;
}