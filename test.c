#include <stdio.h>
#include <stdlib.h>

#include "p.h"

int main() {
    int i;
    for(i=0; i<100; i++){
        if(i % 3 == 2) P("Hit Event:%d\n", i);
    }
    P("Complete!\n");
    return 0;
}









