class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<char>st;
        for(char c:s)
        {
           if(st.empty())
           {
              st.push(c);
           }
           else if(c=='(')
           st.push(c);
           else
           {
            if(st.top()=='(')
            st.pop();
            else
            st.push(c);
           }
        }
        // vector<char>sym;
        // while(!st.empty())
        // {
        //     sym.push_back(st.top());
        //     st.pop();
        // }
        // int count_a=0;
        // int count_b=0;
        // for(int i=0;i<sym.size();i++)
        // {
        //     if(sym[i]=='(')
        //     count_a++;
        //     else{
        //         count_b++;
        //     }
        // }
        // return abs(count_a-count_b);
        return st.size();
        
    }
};