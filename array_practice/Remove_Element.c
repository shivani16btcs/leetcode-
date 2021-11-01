//Remove Element
//problem link:  https://leetcode.com/explore/featured/card/fun-with-arrays/526/deleting-items-from-an-array/3247/



int removeElement(int* nums, int numsSize, int val){
    int i,j,p;
    while(numsSize>0&&nums[numsSize-1]==val){
        numsSize=numsSize-1;
    }
    j=numsSize;
    for(i=0 ; i<j; i++){
        if(nums[i]==val){
          p= nums[i];
          nums[i]= nums[j-1];
          nums[j-1]= p;
          j=j-1;  
        }
        while(j>0&&nums[j-1]==val){
           j=j-1;
        }
    }
    return j;
}