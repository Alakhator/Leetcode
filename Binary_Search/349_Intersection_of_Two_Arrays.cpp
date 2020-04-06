class Solution {
public:
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int>ans;
	   // bucket[i] represents wether that element is present or not
        int bucket[10000]={0};
        for(int i=0;i<nums1.size();i++)
        {
            bucket[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++)
        {
		// once the elemnt is found push in ans vector and make bucket[num]=0 since only unique elements in ans
            if(bucket[nums2[i]])
                ans.push_back(nums2[i]);
            bucket[nums2[i]]=0;
        }
        return ans;
    }
};