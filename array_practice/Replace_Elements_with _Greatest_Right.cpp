// Replace Elements with Greatest Element on Right Side
//problem link:https://leetcode.com/explore/learn/card/fun-with-arrays/511/in-place-operations/3259/
//c++

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size=arr.size();
        int max=-1;
        while(size){
            int t = arr[size-1];
            arr[size-1] = max;
            if(max<t ){
                max = t;
            }
            size--;
        }
        
        
        return arr;
    }
    
};