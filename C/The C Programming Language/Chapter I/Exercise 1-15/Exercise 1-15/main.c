//
//  main.c
//  Exercise 1-15
//
//  Created by Yilun Yang on 6/8/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

float TemperatureConverter(float, float, int);

int main(int argc, const char * argv[]) {
    TemperatureConverter(0, 300, 20);
    return 0;
}

float TemperatureConverter(float lower, float upper, int step) {
    
    float cels = 0;
    for (int i = lower; i <= upper ;i = i + step) {
        printf("Fahrenheit: %d\n", i);
        cels = (5.0 / 9.0) * (i - 32);
        printf("Celsius: %f\n", cels);
    }
    return cels;
}
