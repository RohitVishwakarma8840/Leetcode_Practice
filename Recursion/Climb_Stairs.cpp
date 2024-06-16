class Solution {
public:
    int climbStairs(int n) {

  int ans=0;
      if(n<=1)
    return 1;

    if(n==2)
    return 2;
    
  int first=1;
  int second=2;
   int third;

   for(int i=3;i<=n;i++){

  third=first + second;
  first=second;
  second=third;
  



   }


   
return second;


    }
};