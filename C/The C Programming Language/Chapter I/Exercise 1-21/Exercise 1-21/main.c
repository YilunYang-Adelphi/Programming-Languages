//
//  main.c
//  Exercise 1-21
//
//  Created by Yilun Yang on 6/12/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#define MAX 1000
#define TAB 3

int getnxline(char line[], int maxline);
void entab(char in[], char out[]);

int main(int argc, const char * argv[]) {
    printf("Input lines here: \n");
    
    int len;
    char line[MAX];
    char output[MAX];
    
    while ((len = getnxline(line, MAX)) > 0) {
        entab(line, output);
        printf("%s\n", output);
    }
    return 0;
}

int getnxline(char s[], int lim)
{
    int c = 0, i = 0;
    for (i = 0; i< lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void entab(char from[], char to[])
{
    int i = 0, j = 0, blanks = 0, tabs = 0, spaces = 0;
    while (from[i] != '\0') {
        if (from[i] != ' ') {
            blanks = 0;
            to[j] = from[i];
            ++j;
            ++i;
        }
        else if (from[i] == ' ')
        {
            blanks = 0;
            for (int k = 0; from[i+k] == ' '; k++) {
                ++blanks;
            }
            
            tabs = blanks / TAB;
            for (int k = 0; k < tabs; k++) {
                to[j+k] = '\t';
            }
            j = j + tabs;
            
            spaces = blanks % TAB;
            for (int k = 0; k < spaces; k++) {
                to[j+k] = ' ';
            }
            j = j + spaces;
            
            i = i + blanks;
        }
    }
}
