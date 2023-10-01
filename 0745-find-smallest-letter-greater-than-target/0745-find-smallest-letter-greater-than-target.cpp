class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left=0;
        int right=letters.size()-1;
        while(left<=right){
            if(letters[left]>target){
                return letters[left];
            }
            else{
                left++;
            }
        }   
        return letters[0];
    }
};