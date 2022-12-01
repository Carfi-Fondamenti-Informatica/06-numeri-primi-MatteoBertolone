#include "lib.h"

bool numprimo(int i, int a){
    if((a%i)==0){
        if(a==i) {
            return true;
        }else{
            return false;
        }
    }
    numprimo(i+1,a);
}
