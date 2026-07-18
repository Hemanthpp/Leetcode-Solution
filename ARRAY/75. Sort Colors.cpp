class Solution {
public:
    void sortColors(vector<int>& nums) {
    int countzero=0;
    int countone=0;
    int counttwo=0;

      for(int i=0;i<nums.size();i++){
        if (nums[i]==0)
         countzero++ ;
        else if(nums[i]==1)
         countone++ ;
         else
          counttwo++ ;
      }
      int i=0  ;
      while(countzero>0){
        nums[i]=0;
        countzero--;
        i++;
      }
      while(countone>0){
        nums[i]=1;
        countone--;
        i++;
        
      }
        while(counttwo>0){
         nums[i]=2;
         counttwo--;
         i++;
        }
    }
};