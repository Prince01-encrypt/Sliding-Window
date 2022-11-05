#include <bits/stdc++.h>
 
using namespace std;

int main() {
    int t;
    cin >> t;
  
    while(t--) {
        int p1 = 0, p2 = 0;
        int length = nums.size();
        int zeroCount = 0;
        int bestp1 = 0;
        int bestLength = 0;

        while(p2 < length) {
            if(zeroCount <= 2) {
                if(nums[p2] == 0) {
                    zeroCount++;
                }
                p2++;
            }
            if(zeroCount > 2) {
                if(nums[p1] == 0) {
                    zeroCount--;
                }
                p1++;
            }
            if(p2 - p1 < bestLength && zeroCount <= 2) {
                bestLength = p2 - p1;
                bestp1 = p1;
            }
        } 
    }
    return 0;
}
