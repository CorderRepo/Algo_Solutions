class FindSumPairs {
public:
    std::vector<int> numsOne;
    std::vector<int> numsTwo;
    std::unordered_map<int, int> log;

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        numsOne = nums1;
        numsTwo = nums2;

        for (int j : numsTwo) {
            ++log[j]; 
        }
    }
    
    void add(int index, int val) {
        --log[numsTwo[index]];
        ++log[numsTwo[index] + val];
        numsTwo[index] += val;
    }
    
    int count(int tot) {
        int solution = 0;

        for (int i : numsOne) {
            solution += log[tot - i];
        }

        return solution;
    }

};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */