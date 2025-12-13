class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int copy = x;
        int sum =0;
        while (copy > 0)
        {
            int temp = copy%10;
            sum += temp;
            copy /= 10;
        }
        if((x%sum) == 0) return sum;
        else return -1;
    }
};