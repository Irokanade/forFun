//
//  main.c
//  forFun
//
//  Created by michaelleong on 10/10/2021.
//

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>

uint16_t flipHex(uint16_t flipNum);

int main(int argc, const char * argv[]) {
    uint16_t num;
    
    printf("Please enter an unsigned  16-bits number: ");
    scanf("%" SCNu16, &num);
    
    printf("Before Flip:\n");
    printf("%" PRIu16 "_10 = %x_16\n", num, num);
    
    uint16_t flipNum = flipHex(num);
    printf("After Flip:\n");
    printf("%" PRIu16"_10 = %x_16\n", flipNum, flipNum);
    
    
    
    return 0;
}
uint16_t flipHex(uint16_t flipNum) {
    char hex[5] = {0};
    
    sprintf(hex, "%x", flipNum);
    
    char flipHex[5] = {0};
    
    for(size_t i = 0; i < 4; i++) {
        flipHex[3-i] = hex[i];
    }
    
    //printf("fliphex: %s\n", flipHex);
    
    uint16_t result = (uint16_t)strtol(flipHex, NULL, 16);
    
    //printf("result: %u\n", result);
    
    return result;
    
}
