//
// Created by averagejoe on 6/22/22.
//

#include "MinCostCS.h"

int MinCostCS::minCostClimbingStairs(vector<int> &cost) {

    const int size = cost.size();
    int finalCost[size];

    //consider using past the end iterator to make a more generalised case
    if (size == 1) return (cost[0]);
    if (size == 2) return std::min(cost[0], cost[1]);

    //go backwards because, we are solving for the sub problems
    //size-3 because we need to check the two jumps
    for (int i = size-3; i >= 0; --i) {
        finalCost[i] += std::min(cost[i + 1], cost[i + 2]);
    }

    return finalCost[size];
}
