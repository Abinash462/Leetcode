class Solution
{
    public:
        string longestCommonPrefix(vector<string> &strs)
        {
            string prefix = strs[0];
            if (strs.size() == 0)
            {
                return "";
            }
            for (int i = 0; i < strs.size(); i++)
            {
                string s = strs[i];

                if (strs.size() == 0 || prefix == "")
                {
                    return "";
                }
                prefix = prefix.substr(0, min(s.length(), prefix.length()));

                for (int j = 0; j < s.size() && j < prefix.size(); j++)
                {
                    if (s[j] != prefix[j])
                    {
                        prefix = prefix.substr(0, j);
                        break;
                    }
                }
            }
            return prefix;
        }
};