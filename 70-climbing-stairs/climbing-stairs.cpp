class Solution {
public:
    int climbStairs(int n) {
        // if(n<=2){
        // return n;
        // }
        // return climbStairs(n-1)+climbStairs(n-2);
     if(n<=2)
     return n;
     else
     {
        int first=1;
        int second =2;
        for(int i=3;i<=n;i++)
        {
          
			int temp = first + second;
			first = second;
			second = temp;
        }
        return second;
     }


    }
};