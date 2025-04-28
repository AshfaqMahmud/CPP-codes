public class Solution
{
    public int MyAtoi(string s)
    {
        if (string.IsNullOrEmpty(s)) return 0;

        int i = 0;
        int sign = 1;
        int res = 0;

        // skip whitespaces
        while (i < s.Length && char.IsWhiteSpace(s[i])) i++;

        // handle optional sign
        if (i < s.Length && (s[i] == '+' || s[i] == '-'))
        {
            sign = s[i] == '-' ? -1 : 1;
            i++;
        }

        // convert digits to integer
        while (i < s.Length && char.IsDigit(s[i]))
        {
            int digit = s[i] - '0';

            // check for int overflow
            if (res > (int.MaxValue - digit) / 10) return sign == 1 ? int.MaxValue : int.MinValue;

            res = res * 10 + digit;
            i++;
        }

        return res * sign;
    }
}