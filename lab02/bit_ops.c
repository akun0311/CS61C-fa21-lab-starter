#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    // 1    2    3    4    5    6    7    8
    // xxxx xxxx xxxx xxxx xxxx xxxx xxxx xxxx 
    // 0100 1110
    //        10      
    unsigned  num = 1 << n;
    return (num & x) >> n;
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {    
    unsigned num = 1 << n;
    if(v == 1){

    }else if (v == 0){
        (*x) & (~num);
    }
    //old: 0100 1110
//               ^
//    tmp: 1111 1011
/   //exp: 0100 1010   

    //new: 0100 1110     
  
  

}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /* YOUR CODE HERE */
}

