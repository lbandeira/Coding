class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        bool n = false;

        if(x < 0) {
           x=abs(x);
           n = true;
        }

        while(x!=0){
            if(reverse > INT_MAX/10 || reverse < INT_MIN/10){ return 0;}
            reverse = reverse*10;
            reverse += (x%10);
            x=x/10;

        }
        if(n) reverse = reverse*(-1);

         return reverse;
    }
};
