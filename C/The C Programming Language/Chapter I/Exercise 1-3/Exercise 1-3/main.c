//
//  main.c
//  Exercise 1-3
//
//  Created by Yilun Yang on 6/6/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, const char * argv[]) {
    float fahr;
    float celsius = 0;

    fahr = LOWER;

    printf("Fahrenheit-Celsius\n");

    while (fahr <= UPPER)
    {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }

    return 0;
}
