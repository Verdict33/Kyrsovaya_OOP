#include "libs/data_structures/bitset/bitset.h"
#include <stdio.h>
int main(){
    bitset a = bitset_create(31);
    printf("%d", bitset_checkValue(&a,31));

}