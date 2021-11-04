// Valid Mountain Array
//problem link: https://leetcode.com/explore/learn/card/fun-with-arrays/527/searching-for-items-in-an-array/3251/

bool validMountainArray(int* arr, int arrSize){
int icheck=0, dcheck=0,i=0;
    if(arrSize<3){
        return false;
    }
    for(i=2;i<arrSize;i++){
        
        if((arr[i-2]<arr[i-1])&&(arr[i-1]<arr[i])){
            icheck=1;
        }else if((arr[i-2]>arr[i-1])&&(arr[i-1]>arr[i])){
            dcheck=1;
        }else if((arr[i-2]<arr[i-1])&&(arr[i-1]>arr[i])){
            dcheck=1;
             icheck=1;
        }
        else{
            dcheck=0;
            icheck=0;
            break;
        }
        
    }
    if(dcheck&&icheck){
        return true;
    }
    else {
        return false;
    }
}