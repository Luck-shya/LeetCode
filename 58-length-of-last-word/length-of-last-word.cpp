class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool foundWord = false;
        
        // Traverse the string from the end
        for (int i = s.size() - 1; i >= 0; i--) {
            // If the character is not a space, it's part of the word
            if (s[i] != ' ') {
                foundWord = true;
                length++;
            } 
            // If the character is a space and we've already found a word,
            // it means the last word has ended, so return its length
            else if (foundWord) {
                return length;
            }
        }
        
        // If no word was found, return 0
        return length;
    }
};
