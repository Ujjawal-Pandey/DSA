class Solution {
public:
    int mySqrt(int n) {
            if (n < 0) return -1; 
    if (n == 0 || n == 1) return n;

    long long low = 1;
    long long high = n;
    long long ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;

        if (square == n) {
            return mid; 
        } 
        else if (square < n) {
            ans = mid;     
            low = mid + 1; 
        } 
        else {
            high = mid - 1; 
        }
    }
    return ans; 
}
        
    
};