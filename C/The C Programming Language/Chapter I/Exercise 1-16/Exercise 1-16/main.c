//
//  main.c
//  Exercise 1-16
//
//  Created by Yilun Yang on 6/8/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#define MAXLINE 1000 /* Maximum input line size */

int getnxline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, const char * argv[]) {
    int len; /* The current line length */
    int max; /* Maximum length seen so far */
    
    char line[MAXLINE]; /* Current input line */
    char longest[MAXLINE]; /* Longest line saved here */
    
    max = 0;
    
    printf("Input lines:");
    
    while ((len = getnxline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) { /* There was a line */
        printf("The longest line is: \n%s", longest);
        printf("The length is: %d", max);
    }
    
    return 0;
}

/// Read a line into s, return length
/// @param s the line that read will be putted into s
/// @param lim the length of the line
int getnxline(char s[], int lim)
{
    int c = 0, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; // an empty mark will be added into the array, that is why the loop only loops lim-1 times.
    return i;
}

/// Copy 'from' to 'to'. Assume 'to' is big enough
/// @param to copy to
/// @param from copy from
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
/* How to understand the sentence "When the name of an array is used as an argument, the value passed to the function is the location or address of the beginnin gof the array -- there is no copying of array elements." ?*/
/// The operations in the function will operate the original value of the array when the array be used as an argument.
