/*Take each vector from grid and count the number of -ive numbers in each vectors and return sum of -ive numbers*/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum=0;
        for(int i=0;i<grid.size();i++)
        {
            sum+=c(grid[i]);
        }
        return sum;
    }
	/*For -ive numbers in each vector l points to first -ive number so count=size-l. If no -ive number in vector l points to g.size()*/
	int c(vector<int>g)
    {
        int l=0;
        int r=g.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(g[mid]>=0)
                l=mid+1;
            else
                r=mid-1;
            
        }
        if(l<g.size() && g[l]<0)
        return g.size()-l;
        else
            return 0;
    }
};
