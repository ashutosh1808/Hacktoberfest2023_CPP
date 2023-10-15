#include<bits/stdc++.h>
class Solution {
public:
    int firstOcc(vector<int>& nums,int ele)
{
    int n=nums.size();
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(nums[mid]==ele)
        {
            ans=mid;
            e=mid-1;
        }
        else if(nums[mid]>ele)
            e=mid-1;
        else
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}
    int lastOcc(vector<int>& nums,int ele)
{
    int n=nums.size();
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(nums[mid]==ele)
        {
            ans=mid;
            s=mid+1;
        }
        else if(nums[mid]>ele)
            e=mid-1;
        else
            s=mid+1;
        mid=s+(e-s)/2;
    }
    return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstOcc(nums,target));
        ans.push_back(lastOcc(nums,target));
        return ans;
    }
};
