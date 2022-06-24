//
// Created by averagejoe on 6/12/22.
//

/*
 * Input: n = 3
 * Output: 3
 * Explanation: There are three ways to climb to the top.
 * 1. 1 step + 1 step + 1 step
 * 2. 1 step + 2 steps
 * 3. 2 steps + 1 step
 */

#include "ClimbingStairs.h"

int ClimbingStairs::climbStairs(int n) {

    //base cases
    int step1 = 1, step2 = 1;
    int temp;

    for (int i = n; i > n; --i) {
        temp = step1;
        step1 += step2;
        step2 = temp;
    }
    return step1;
}
