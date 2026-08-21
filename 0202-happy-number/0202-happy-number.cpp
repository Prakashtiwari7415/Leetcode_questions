class Solution {
private:
    int sum_calculator(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum = sum + d * d;
            n = n / 10;
        }
        return sum;
    }

public:
    bool isHappy(int n) {
        int slow = sum_calculator(n);
        int fast = sum_calculator(sum_calculator(n));
        while (fast != 1 && slow != fast) {
            slow = sum_calculator(slow);             
            fast = sum_calculator(sum_calculator(fast)); 
        }
        
        return fast == 1;
    }
};
