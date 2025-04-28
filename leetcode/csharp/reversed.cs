public class Solution {
    public int Reverse(int x) {
        if (x == Int32.MinValue)
        {
            return 0;
        }
        int reversed = 0;
        int sign = x > 0 ? 1 : -1;
        x = Math.Abs(x);

        while (x!=0)
        {
            int digit = x % 10;
            x = x / 10;

            if (reversed > (Int32.MaxValue / 10) || (reversed == Int32.MaxValue / 10)) return 0;

            reversed = reversed * 10 + digit;
        }

        return reversed * sign;
    }
}