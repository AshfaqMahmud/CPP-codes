#include <stdio.h>
#include <string.h>

int main()
{
    char str[][5] = {"R2D2", "R2F2", "C3P0", "D4C2"};
    /*str is a 2D array of characters (a list of strings), where each string is an array of char.
        The size of each string is 5 characters, which is enough to hold 4 characters plus the null-terminator ('\0'), which marks the end of the string.
        "R2D2" → ['R', '2', 'D', '2', '\0']
        "R2F2" → ['R', '2', 'F', '2', '\0']
        "C3P0" → ['C', '3', 'P', '0', '\0']
        "D4C2" → ['D', '4', 'C', '2', '\0']
        Thus, str is a 2D array with 4 rows and 5 columns.
        The rows correspond to each string in the array,
        and each column corresponds to a character in the string
        (plus the null terminator).
    */
    puts("Looking for R2xx robots...");
    for (int i = 0; i < 4; i++)
    {
        if (strncmp(str[i], "R2xx", 2) == 0)
            puts(str[i]);
        /*
            The loop: The for loop iterates 4 times, once for each string in the str array. The variable i starts from 0 and goes up to 3 (because there are 4 elements in the array).
            strncmp(str[i], "R2xx", 2):

            The function strncmp() compares the first n characters of two strings (str[i] and "R2xx").
            Here, n = 2, so it only compares the first 2 characters of str[i] with "R2".
            
            This function returns:
                0 if the first n characters of both strings are equal.
                A non-zero value if they are different.

            Comparison: The code is checking if the first two characters of each string in str[i] match "R2".
                "R2D2" starts with "R2", so the comparison will return 0 and the string will be printed.
                "R2F2" starts with "R2", so the comparison will also return 0 and this string will also be printed.
                "C3P0" starts with "C3", so the comparison will return a non-zero value, and it will not be printed.
                "D4C2" starts with "D4", so the comparison will return a non-zero value, and it will not be printed.

        */

    }
    return 0;
}