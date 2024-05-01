class Solution {
public:
    void moveZeroes(vector<int>& nums) {

  int i=0; // pointer for iterating the array 
  int n=nums.size();


  for(int j=0; j<n;j++){
   if(nums[j]!=0){
    nums[i]=nums[j];
    i++;
   }

  }

// let say i=3 hai so what we would do 
// we will be upto the size adding zeroes 

  while(i<nums.size()){
    nums[i]=0;
    i++;
  }
    }
};