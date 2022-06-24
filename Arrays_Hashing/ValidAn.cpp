//
// Created by averagejoe on 6/3/22.
//

#include <unordered_map>
#include "ValidAn.h"

/*
 * For each letter in s, it increases the counter by 1
 * while for each letter in t, it decreases the counter by 1.
 * Finally, all the counters will be 0 if they two are anagrams of each other.
 */

bool ValidAn::isAnagram(std::string s, std::string t) {
    std::unordered_map<char, int> count;

    //we can skip an if+else block by return false if the length is not the same
    if (s.length() != t.length()) return false;

    for (int i = 0; i < s.length(); ++i) {
        count[s[i]]++;
        count[t[i]]--;
    }

    for (auto& it : count) {
        //check if the second value in the keyvalue pair contains a value other than 0
        //e.g. std::pair<first, second>
        if (it.second){ //resulting boolean should be not be true;
            return false;
        }
    }
    return true;
}
