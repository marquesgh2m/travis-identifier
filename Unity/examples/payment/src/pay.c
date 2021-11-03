
#include "pay.h"
#include <stdio.h>
#include <stdlib.h>

int payment(float value, char status[15]){
    if(value < 0.0099999 || value > 99999.00) return 1;
    if (strcmp(status, "regular")!=0 &&
        strcmp(status, "estudante")!=0 &&
        strcmp(status, "aposentado")!=0 &&
        strcmp(status, "VIP")!=0) return 2;
    return 0;
}

