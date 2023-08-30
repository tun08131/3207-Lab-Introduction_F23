#include <stdio.h>
#include <stdlib.h>

char randchar(){
    int n = rand() % 26;
    char c = (char)(n+65);
    return c;

}