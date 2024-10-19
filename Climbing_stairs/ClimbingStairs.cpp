/*
(this method exceed the time limit!)
class Solution {
public:
    int climbStairs(int n) {
        if(n == 1){
            return 1;
        }
        else if(n == 2){
            return 2;
        }
        else{
            return climbStairs(n-1)+climbStairs(n-2);//recursion
        }
    }
};*/

//using dynamic programming
class Solution {
public:
    int climbStairs(int n) {
        
        //base case
        if(n == 1){
            return 1;
        }
        else if(n == 2){
            return 2;
        }

        int first = 1;
        int second = 2;
        int result = 0;
        for(int i = 3; i <= n; i++){
            //for the remaning steps;
            result = first + second;
            first = second;
            second = result;
        }
        return result;
    }
};