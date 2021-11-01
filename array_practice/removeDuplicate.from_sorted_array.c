//Remove Element
//problem link:  https://leetcode.com/explore/featured/card/fun-with-arrays/526/deleting-items-from-an-array/3248/



int removeDuplicates(int* nums, int numsSize){
    int i=0,A[30000],check=0,top=0,s,con=-101;
    for( i=0 ; i<numsSize ; i++ ){
        // is element in stack
        s=0;
        check=0;
        while(s<top){
            if(A[s]==nums[i]){
              check=1; 
               break; 
            }
            s++;
        }
        if(!check){
           A[top++]=nums[i]; 
        }else{
           nums[i]=con; 
        }
    }
    
    // shifting 
     for( i=0 ; i<numsSize ; i++ ){
         if(nums[i]==con){
            int k=i;
            while(k<numsSize-1){
               nums[k]=nums[k+1];
                k++;
            }
             i=i-1;
             numsSize=numsSize-1;
         }
     }
    
    return numsSize;
}