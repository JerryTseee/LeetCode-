class Solution {
public:
    int romanToInt(string s) {
        //if current number is larger than next number -> we add
        //if current number is smaller than next number -> we subtract
        int length = s.size();
        int result = 0;
        map<char, int> mp;//create a map
        mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        if(length == 1){
            return mp[s[0]];
        }
        else{
            for(int i = 0; i < length; i++){
                if(mp[s[i]] < mp[s[i+1]] && i != length-1){//use number to compare
                    result -= mp[s[i]];
                }
                else{
                    result += mp[s[i]];
                }
            }
        }
        return result;
    }
};