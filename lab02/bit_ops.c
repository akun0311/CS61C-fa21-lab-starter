#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    unsigned  num = 1 << n;
    return (num & x) >> n;
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {    
    unsigned num = 1 << n;
    if(v == 1){
        (*x) |= num;    
    }else if (v == 0){
        (*x) &= (~num);
    }
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    unsigned v = get_bit(*x, n); //get the value of nth    
    //if v == 1, v ^ 1 = 0
    //if v == 0, v ^ 1 = 1
    set_bit(x, n, v ^ 1);
}
