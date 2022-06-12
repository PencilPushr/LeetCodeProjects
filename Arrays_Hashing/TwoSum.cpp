//
// Created by averagejoe on 6/8/22.
//


#include "TwoSum.h"


/*
//solution 1: bruteforce with arrays

std::vector<int> TwoSum::twoSum(std::vector<int> &nums, int target) {

    int* p_twoSums = (int *) calloc(2, sizeof(int));
    const int size = nums.size();

    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size; ++j) {
            if (nums[i] + nums[j] == target){
                p_twoSums[i] = i;
                p_twoSums[i] = j;
                return reinterpret_cast<const std::vector<int> &>(p_twoSums);
            }
        }
    }

    return reinterpret_cast<const std::vector<int> &>(p_twoSums);
}
*/

//solution 2: Hashmap
std::vector<int> TwoSum::twoSum(std::vector<int> &nums, int target) {

    std::unordered_map<int, int> map; //maps value to index
    std::vector<int> result;
    const u_int16_t size = nums.size();

    for (int i = 0; i < size; ++i) {
        //if we have a target 5, at we find 3, now we need 2, we check if the difference exists in the map.
        int diff = target - map[i];

            //map.count(diff) is more understandable
        if(map.find(diff) != map.end()){ //checks if the value exists in hashmap
            result.push_back(i);
            result.push_back(map.find(diff)->second);
            return result;
        }else{
            //if the value doesn't exist in the hashmap add it
            map[nums[i]] = i;
        }
    }

    return result;

}