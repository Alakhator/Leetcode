class Solution {
public:
    static bool check(pair<int,int>&p1,pair<int,int>&p2)
    {
        if(p1.first==p2.first)
            return p1.second<p2.second;
        else
            return p1.first<p2.first;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>vec;
        vector<int>ans;
		/*For each row count the number of ones it has. Then create a pair of(index, no of ones) and push it in vector. 
		Finally sort the vector on the basis of no of ones. In case the no of ones are equal sort on basis of index*/ 
        for(int i=0;i<mat.size();i++)
        {
              int l=0;
              int r=mat[i].size()-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(mat[i][mid]==1)
                    l=mid+1;
                if(mat[i][mid]==0)
                    r=mid-1;
            }
            pair<int,int>p=make_pair(r+1,i);
            vec.push_back(p);
            
        }
        sort(vec.begin(),vec.end(),check);
        for(int i=0;i<k;i++)
        {
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};
