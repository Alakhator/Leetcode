class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int l=0;
        int r=A.size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(A[mid]>A[mid-1] && A[mid]>A[mid+1])
                return mid;
            else if(A[mid]<A[mid-1] && mid!=0)
                r=mid-1;
            else
                l=mid+1;
        }
        return r;
    }
};