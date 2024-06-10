class Solution
{
public:
    bool isPalindrome(string s)
    {
        int j = s.length() - 1;
        bool t = true;

        for (int i = 0; i < (s.length() / 2); i++)
        {

            if (s[i] == s[j])
            {
                j--;
            }
            else
            {
                t = false;
                break;
            }
        }
        return t;
    }
};
