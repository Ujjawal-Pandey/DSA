class Solution {
public:
    int addDigits(int num) {
        if(num<=9){
                return num;
            }
        
        int a = num%10;
        int b = num/10;
        int x= a+b;
        while(x>9){
            if(x<=9){
                return x;
            }
            a = x%10;
            b = x/10;
            x = a+b;

        }
        return x ; 

    }
};