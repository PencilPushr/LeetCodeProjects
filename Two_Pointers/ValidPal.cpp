//
// Created by averagejoe on 6/9/22.
//

#include "ValidPal.h"

bool ValidPal::isPalindrome(string s) {

    const uint size = s.size();
    int *p_left = (int * ) calloc(1, sizeof(char));
    int *p_right = (int * ) calloc(1, sizeof(char));

    /*-------------------*/
    /* ASCII             */
    /*  0-9 : 48-57      */
    /*  A-Z : 65-90      */
    /*  a-z : 97-122     */
    /*-------------------*/

    //Solution to ascii problem 1:
    //could use regex to clear everything from the string
    //[^a-zA-Z0-9]

    for (int i = 0; i < size/2; i++) {
        for (int j = size/2; j > 0; j--) {

            //solution to ascii problem 2:
            //still need to worry about if there are digits or whitespace but after research I have become rather depressed at other peoples solutions
            //as they achieved it in much simpler format, thus, I cba.
            if (!('Z' < p_left[i] < 'A' || 'z' < p_left[i] < 'a' || 'Z' < p_right[j] < 'A' || 'z' < p_right[j] < 'a'))
                return false;

            if (p_left[i] != p_right[j]) return false;

            p_left[i];
            p_right[j];
        }
    }
    return true;
}

/*
 * ALT Solution after research:
 *
     bool isPalindrome(string s) {
        for (auto b=s.cbegin(), e=std::prev(s.cend()); b < e; ++b, --e) {
            while (!isalnum(*b)) ++b;
            while (!isalnum(*e)) --e;
            if (b < e && tolower(*b) != tolower(*e))
                return false;
        }
        return true;
    }

    bool isPalindrome(string s){

        //clear non alphanumeric characters
        for (char c : s)
        {
            if(!(c >= 65 && c <= 90)) return false;
            if(!(c >= 97 && c <= 122)) return false;
            if(!(c >= 48 && c <= 57)) return false;
        }

        int left = 0;
        int right = vec.size();
            for(int i = 0; i < vec.size()/2 ; i++){
                if( vec[L] != vec[R] ) return false;

                L++;
                R--;
            }
    }
 *
 */
