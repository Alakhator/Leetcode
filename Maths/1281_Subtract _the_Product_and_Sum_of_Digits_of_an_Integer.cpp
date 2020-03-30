class Solution {
public:
    int subtractProductAndSum(int n) {
        int t=n;
        int sum=0;
        while(t!=0)
        {
            int l=t%10;
            sum+=l;
            t=t/10;
        }
        int m=n;
        int prod=1;
        while(m!=0)
        {
            int l=m%10;
            prod*=l;
            m=m/10;
        }
        return prod-sum;        
    }
};
