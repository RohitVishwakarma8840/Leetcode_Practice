class Solution {
public:
    int maxSubArray(vector<int>& nums) {

  int sum=0;
  int n=nums.size();
  int maxSum=nums[0];

  for(int i=0;i<n;i++){
   
  sum=sum+nums[i];
  maxSum=max(maxSum,sum);

  if(sum<0)
  sum=0;


  }

  return  maxSum;
        
    }
};