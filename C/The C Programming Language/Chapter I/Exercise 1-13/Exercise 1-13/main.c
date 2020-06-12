//
//  main.c
//  Exercise 1-14
//
//  Created by Yilun Yang on 6/7/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

#define MAX_LENGTH 26

int main(int argc, const char * argv[]) {
    
    printf("Input words:\n");
    
    int c, nwords[MAX_LENGTH], nothers = 0, i;
    
    for (i = 0; i < MAX_LENGTH; ++i) {
        nwords[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c<= 'z') {
            ++nwords[c - 'a'];
        }
        else if (c >= 'A'&& c <= 'Z') {
            ++nwords[c - 'A'];
        }
        else{
            ++nothers;
        }
    }
    
    
    int a = 'a';
    
    printf("\nHistogram (horizontal):\n");

    for (i = 0; i < MAX_LENGTH; ++i) {
        printf("%c:", a + i);
        for (int j = 0; j < nwords[i]; ++j) {
            printf("-");
        }
        printf("\n");
    }
    
    return 0;
}
