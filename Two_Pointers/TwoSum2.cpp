//
// Created by averagejoe on 6/11/22.
//

/*
 * Input: numbers = [2,7,11,15], target = 9
 * Output: [1,2]
 * Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
 */

#include "TwoSum2.h"

vector<int> TwoSum2::twoSum(vector<int> &numbers, int target) {

    //utility variables
    const int size = numbers.size();
    int i = 0;
    int j = size;

    //we assume there is a solution therefore the case where n[i] > n[j] doesn't exist.
    while(numbers[i] + numbers[j] != target){

        //if our sum is greater than target we count down from the right
        //as the array is sorted, smallest to largest.
        if (numbers[i] + numbers[j] > target)
            numbers[j]--;

        //if our sum is smaller, count up from the right to a larger number.
        if (numbers[i] + numbers[j] < target)
            numbers[i]++;
    }

    //because we return the indices, we need to add 1 to both values.
    return {i+1, j+1};
}
