class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int i=0;
       int j= numbers.size()-1;
        while(i<j){
            int sum=numbers[j]+numbers[i];
            if(sum==target)
                return {i+1,j+1};

                else if (sum>target)
                 j--;

                else
                    i++;
        }
       
    return{};
    }
};