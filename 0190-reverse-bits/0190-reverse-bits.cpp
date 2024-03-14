#include <math.h>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long result = 0;
        
        for(int i = 0, j = 30; i < 32; i++, j--)
        {
            int k = (n >> i) & 1;
            if(k)
            {
                if(j < 0)
                {
                    result = abs(result) + 1;
                }
                else
                {
                    result = abs(result) + (2 << j);
                }
            }
        }
        
        return abs(result);
    }
};