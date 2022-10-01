// Author: imshubh69
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        
        // initializing start, end and sum
        int s, e, sum = 0;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        // for loop to fix the first element of the triplet
        for(int i = 0; i < n; i++){
            //if the very first element of the array is greater than 0(which is smallest element after sorting), then triplet cannot be formed
            if(nums[i] > 0){
                break;
            }
            
            // to avoid duplicacy skip the iteration if to adjacent element are equal
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            
            //After fixing first element, we are left with TWO SUM problem
            s = i + 1; 
            e = n - 1;
            while(s < e){
                sum = nums[i] + nums[s] + nums[e];
                if(sum < 0){
                    s++;
                }
                else if(sum > 0){
                    e--;
                }
                else{
                    ans.push_back({nums[i], nums[s], nums[e]});
                    s++, e--;
                    
                    //increment s and e, to the new positions
                    while(s < e && nums[s] == nums[s-1])
                        s++;
                    while(s < e && nums[e] == nums[e+1])
                        e--;
                }
            }
        }
        
        return ans;
