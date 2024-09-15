class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;//last character in string
        int j = num2.length() - 1;
        int add = 0;//hold the carry during addition
        string ans = "";

        //make sure i/j reach the beginning of string, and there is no carry left
        while (i >= 0 || j >= 0 || add != 0){
            int x = i >= 0 ? num1[i] - '0' : 0;// num1[i] - '0' means convert char to int, return ASCII value
            int y = j >= 0 ? num2[j] - '0' : 0;
            int result = x + y + add;//sum of the current digit position
            ans.push_back('0' + result % 10);
            add = result / 10;
            i -= 1;
            j -= 1;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

/*
More:
Let's take the example of '3' - '0':
The ASCII value of '3' is 51.
The ASCII value of '0' is 48.
Subtracting the ASCII value of '0' from the ASCII value of '3':
51 - 48 = 3.
*/