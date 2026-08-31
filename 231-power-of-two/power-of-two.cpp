class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n%2 != 0){
            return false;
        }
        if(n <= 0){
            return false;
        }
        int x=n;
        while(x>1){
            
            if(x%2 ==1){
                return false;
            }
            x=x/2;
        }
        return true;


        
    }
};