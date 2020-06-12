//
//  main.c
//  Exercise 1-4
//
//  Created by Yilun Yang on 6/6/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, const char * argv[]) {
    
    float fahr, celsius;

    fahr=LOWER;
    celsius=0;

    printf("Celsius-Fahrenheit\n");

    while (fahr<=UPPER) {
        fahr= (9.0 * celsius)/5.0 + 32;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius=celsius+STEP;
    }
    
    return 0;
}
