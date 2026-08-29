/* 1st Square has 1 Grain (keep it aside)
 * 2nd Indexed Square has 2^(2-1)
 * 64th Indexed Square has 2^(64-1)
 *
 * Any particular Index Square will contain 2^(Index-1) Grains
 *
 * Total Grains is going to be [1 + 2^(2-1) + 2^(3-1) + ... + 2^(63-1) + 2^(64-1)]
 * i.e. [1 + 2^1 + 2^2 + ... + 2^62 + 2^63] 
 * and [2^1 + 2^2 + ... + 2^62 + 2^63 is equals to 2^64 - 2]
 *
 * Suppose, S = 2^1 + 2^2 + ... + 2^62 + 2^63    ---- (1) [Let's multiply both sides by 2]
 * Then,   2S = 2^2 + 2^3 + ... + 2^63 + 2^64    ---- (2)
 * Let's do (2) - (1)
 * 2S - S = 2^64 + 2^63 - 2^63 + 2^62 - 2^62 + ... + 2^2 - 2^2 - 2^1
 * Hence S = 2^64 - 2
 * So, Total Grains on the Chess Board is  [1 + 2^64 -2] i.e. 2^64 -1
 */

#include "grains.h"

uint64_t square(uint8_t index) { 
    if (index >= 1 && index <= 64) {
         return UINT64_C(1) << (index - 1);
     } else {
         return 0; // Handling 2's power smaller than 0 and greater than 63*
     }
}
uint64_t total(void) {
    return UINT64_MAX;
}