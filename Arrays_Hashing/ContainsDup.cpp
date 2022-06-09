//
// Created by averagejoe on 6/2/22.
//

#include "ContainsDup.h"

bool ContainsDup::containsDuplicate(std::vector<int> &nums) {

    std::unordered_set<int> set;

    for (int i = 0; i < nums.size(); ++i) {
        if (set.contains(nums[i])){
            return true;
        } else {
            set.insert(nums[i]);
        }
    }
    return false;
}
