class Solution {
public:
    bool isPalindrome(int x) {
        //if you convert x to string, anc check the palindrome, it wastes space
        /*
        we use below method:
        get the last half of the number,
        reverse it,
        compare it with the first half of the number;
        eg: 1221, get 21, change to 12, then 12 = 12, so it is palindrome
        
        space complexity = O(1)
        time complexity = O(logn) -> T(n) = T(n/2) + constant
        */

        if(x < 0 || (x % 10 == 0 && x != 0)){
            return false;
        }
        //reminder: if the converted number is greater than remaining number -> already half
        int number = 0;
        while(number < x){
            number = number*10 + x%10;
            x = x/10;
        }

        if(number == x){
            return true;
        }
        else if(number/10 == x){
            return true;
        }
        else{
            return false;
        }
    }
};