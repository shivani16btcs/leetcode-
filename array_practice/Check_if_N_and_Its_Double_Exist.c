//Check If N and Its Double Exist
// problem link:https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/


bool checkIfExist(int* arr, int arrSize){
    int A[10000],s=0,top=0,i=0,check=0,j=0;
    for(i=0;i<arrSize;i++){
        check=0;
        j=0;
        while(j<top){
            if((arr[i]*2==A[j])||(arr[i]%2==0&&(arr[i]/2)==A[j])){
                 check=1; 
            }
            j++;
        }
        if(check==1){
            return true;
        }else{
            A[top++]=arr[i];
        }
    }
    return false;
}