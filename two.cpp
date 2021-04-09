 int longestValidParentheses(string str) 
    {
     stack<int> s;
        s.push(-1);
        
        int maxi=0,res=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
            s.push(i);
        else
        {
            s.pop();
            if(s.size()==0)
                s.push(i);
            else
            {
             res=i-s.top();
                maxi=max(res,maxi);
            }
        }
    }
        return maxi;
    }