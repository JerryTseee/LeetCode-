class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.size()-1;
        
        while(s[length] == ' '){
            length--;//eg: remove the case like this "hello "
        }

        int count = 0;
        while(length >= 0 && s[length] != ' '){
            count++;
            length--;
        }
        return count;
    }
};