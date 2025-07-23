// class Solution {
// public:
//     int reverse(int x) {
        
//         if(x>=0)
//         {
//             int ans=0;
//             while(x>0)
//             {
//                 int rem=x%10;
//                 ans=ans*10+rem;
//                 x=x/10;
//             }
//             return ans;

//         }
//         else{
//             x=x*(-1);
//             int ans=0;
//             while(x>0)
//             {
//                 int rem=x%10;
//                 ans=ans*10+rem;
//                 x=x/10;
//             }
//             return 0-ans;


//         }
        
//     }
// };



class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int rem = x % 10;

            
            if (ans > INT_MAX / 10 ) return 0;
            if (ans < INT_MIN / 10 ) return 0;

            ans = ans * 10 + rem;
            x = x / 10;
        }
        return ans;
    }
};
