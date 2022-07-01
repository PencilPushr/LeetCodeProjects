//
// Created by averagejoe on 6/22/22.
//
#include "MinCostCS.h"

int MinCostCS::minCostClimbingStairs(vector<int> &cost) {

    const int size = cost.size();

    //go backwards because, we are solving for the sub problems
    //size-3 because we need to check the two jumps after
    for (int i = size-3; i >= 0; --i) {
        cost[i] += std::min(cost[i + 1], cost[i + 2]);
    }

    std::cout << std::min(cost[0], cost[1]) << '\n';
    return std::min(cost[0], cost[1]);
}
