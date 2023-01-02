#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer;
    if (num%2==0){
        answer = "Even";
    }
    else answer = "Odd";
    return answer;
}