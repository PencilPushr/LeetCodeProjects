//
// Created by averagejoe on 6/9/22.
//

#include "ValidPal.h"

bool ValidPal::isPalindrome(string s) {

    const uint size = s.size();
    int *p_left     = (int * ) calloc(1, sizeof(char));
    int *p_right    = (int * ) calloc(1, sizeof(char));

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
            //while the values are not alphanumeric, skip them to compare the next alphanumeric characters
            while (!isalnum(*p_left)) ++p_left;
            while (!isalnum(*p_right)) --p_left;

            //consider using tolower() as it would therefore ignore capitals
            if (tolower(p_left[i]) != tolower(p_right[j])) return false;

            p_left[i];
            p_right[j];
        }
    }
    return true;
}
