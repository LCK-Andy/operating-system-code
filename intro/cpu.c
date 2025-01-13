#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char* argv[]){
    if ( argc != 2){
        fprintf(stderr, "usage: cpu <string>\n");
	    exit(1);
    }
    char* str = argv[1];
    int counter = 0;
    while (1)
    {
        // concatenate the string with the counter
        char holder[100];
        sprintf(holder, "%s %d", str, counter);
        printf("%s\n", holder);
        Spin(1);
        counter++;
    }
    return 0;
}