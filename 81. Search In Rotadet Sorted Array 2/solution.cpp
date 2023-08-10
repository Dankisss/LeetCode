class Solution {
public:

    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[high];

        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (nums[j] >= pivot) {
                i++;
                swap(nums[j], nums[i]);
            }
        }    

        std::swap(nums[i + 1], nums[high]);
        return (i + 1);
    }

    bool search(vector<int>& nums, int target) {
        int pi = partition(nums, 0, nums.size() - 1);

    
        if (nums[pi] == target) {
            return true;
        }else if (target < nums[pi]) {

            for(int i = pi +  1; i < nums.size(); i++) {
                if (nums[i] == target) {
                    return true;
                }
            }

        }else {
            for (int i = 0; i < pi; i++) {
                if (nums[i] == target) {
                    return true;
                }
            }
        }

        return false;
    }
};
