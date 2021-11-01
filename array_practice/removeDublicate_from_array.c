//Remove Duplicates from  Array


int removeDuplicates(int* nums, int numsSize){
    int A[30000],i=0;
    int in=0,sl=0,p=0,check=0;
    for(i=0;i<numsSize;i++){
        in=0,p=0;
        //check nums[i] exist in stack
        while(in<sl){
            if(A[in]==nums[i])
            {
                p=1;
                break;
            }
            in=in+1;
        };
        printf("present EL%d\n",p);
        //p=0 means not exist in stack
        if(p==0){
          A[sl++]=nums[i];  
          continue;  
        }else{
            check=0;
            if(i==numsSize-1){
              numsSize=numsSize-1; 
              check=1; 
            }
            while(check!=1){
                in=0,p=0;
                while(in<sl){
                    if(A[in]==nums[numsSize-1])
                    {
                        p=1;
                        break;
                    }
                    in=in+1;
                };
                if(p==0){
                     check=1;
                     A[sl++]=nums[numsSize-1];
                     int t=A[i];
                     nums[i]=nums[numsSize-1];
                     nums[numsSize-1]=t;
                     numsSize=numsSize-1;
                }else{
                    numsSize=numsSize-1; 
                }
            }
        }
    }
    
    return numsSize;

}