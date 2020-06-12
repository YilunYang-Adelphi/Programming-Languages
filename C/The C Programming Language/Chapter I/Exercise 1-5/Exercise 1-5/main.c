//
//  main.c
//  Exercise 1-5
//
//  Created by Yilun Yang on 6/6/20.
//  Copyright © 2020 Yilun Yang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float fahr = 0.0;

       for (fahr = 300; fahr >= 0; fahr = fahr - 20)
       {
           printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
       }
    
    return 0;
}

