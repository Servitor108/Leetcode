void fun(int i,int sum,int &m,vector<int>& nums,int &mx)
{
    if(i>=mx)
    {
        if(m<sum)
        m=sum;
    }
    else{
    fun(i+2,sum+nums[i],m,nums,mx);
    fun(i+1,sum,m,nums,mx);
    }
}
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
    int m=0;int mx=nums.size();
        fun(1,0,m,nums,mx);
        mx=mx-1;
        fun(0,0,m,nums,mx);
    return m;
    }
};