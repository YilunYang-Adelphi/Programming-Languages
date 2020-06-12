//
//  main.c
//  Exercise 1-14
//
//  Created by Yilun Yang on 6/8/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

#define MAX_LENGTH 26
#define SCALE 10

int main(int argc, const char * argv[]) {
    
    int c, i = 0, nwords[MAX_LENGTH];
    
    for (i = 0; i < MAX_LENGTH; i++) {
        nwords[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++nwords[c - 'a'];
        }
    }
    
    int max = 0, total = 0;
    
    for (i = 0; i < MAX_LENGTH; i++) {
        if (max <= nwords[i]) {
            max = nwords[i];
        }
        total = total + nwords[i];
    }
    
    int j = 0;
    int a = 'a';
    float temp = 0;
    for (i = 0; i < MAX_LENGTH; i++) {
        printf("%c: ", i + a);
        temp = nwords[i];
        for (j = 0; j < (temp / total) * SCALE; j++) {
            printf("-");
        }
        for (j = 0; j < ((total - temp) / total) * SCALE; j++) {
            printf(" ");
        }
        printf("| %%%f\n", (temp/total));
    }
    return 0;
}
