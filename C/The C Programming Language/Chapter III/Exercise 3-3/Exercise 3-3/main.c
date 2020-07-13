//
//  main.c
//  Exercise 3-3
//
//  Created by Yilun Yang on 7/11/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>
#define MAX 100

void expand(char s[], char e[]);

int main(int argc, const char * argv[]) {
    char s[MAX], e[MAX];
    printf("Input shorthand notaions here:\n");
    
    char c;
    int i = 0;
    while ((c = getchar()) != EOF) {
        s[i++] = c;
    }
    expand(s, e);
    
    printf("\n%s\n", e);
    return 0;
}

void expand(char s[], char e[])
{
    int len;
    for (len = 0; s[len] > 0; len++) {
        ;
    }
    for (int i = 0; i < len; i++) {
        if (s[i] <= 'z' && s[i] >= 'a') {
            char start = s[i];
            if (s[++i] == '-') {
                i++;
                if (s[i] <= 'z' && s[i] >= 'a') {
                    char end = s[i];
                    for (int j = 0; j < end - start + 1; j++) {
                        e[j] = j + start;
                    }
                    i++;
                }
            }
        }
        else if(s[i] <= 'Z' && s[i] >= 'A') {
            char start = s[i];
            if (s[++i] == '-') {
                i++;
                if (s[i] <= 'Z' && s[i] >= 'A') {
                    char end = s[i];
                    for (int j = 0; j < end - start + 1; j++) {
                        e[j] = j + start;
                    }
                    i++;
                }
            }
        }
        else if (s[i] <= '9' && s[i] >= '0') {
            char start = s[i];
            if (s[++i] == '-') {
                i++;
                if (s[i] <= '9' && s[i] >= '0') {
                    char end = s[i];
                    for (int j = 0; j < end - start + 1; j++) {
                        e[j] = j + start;
                    }
                    i++;
                }
            }
        }
        else
        {
            printf("syntax error.");
        }
    }
}

