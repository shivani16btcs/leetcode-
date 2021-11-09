//Height Checker
// problem link: https://leetcode.com/explore/learn/card/fun-with-arrays/523/conclusion/3228/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ex(heights);
        int i=0,count=0;
        sort(ex.begin(), ex.end());
        for(i=0 ; i<ex.size() ; i++){
           if(ex[i]!=heights[i]){
               count++;
           }
        }
        
    return count;
    }
};