class Solution {
public:
   // This function just extracts the digits and check if the number is divisible by it or not. If not flag=1 is set and the while is broken immediately
    bool divisible(int l)
    {
        int a=l;
        int flag=0;
        while(a>0)
        {
            int m=a%10;
            if(m==0)
            {
                flag=1;
                break;
            }
            if(l%m!=0 && m!=0)
            {
                flag=1;
                break;
            }
            a=a/10;
        }
        if(flag==0)
            return true;
        else
            return false;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            if(divisible(i))
                ans.push_back(i);
                
        }
        return ans;
    }
};