class Solution
{
    public:
        string capitalizeTitle(string title)
        {
            vector<string> v;
            string temp;
            int n = title.size();
            int i = 0;

            while (i < n)
            {
                if (title[i] == ' ')
                {
                    v.push_back(temp);
                    temp = "";
                }
                else
                {
                    title[i] = tolower(title[i]);
                    temp += title[i];
                }
                i++;
            }
            v.push_back(temp);

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i].size() > 2)
                {
                    v[i][0] -= 32;
                }
            }

            string ans;
            for (auto x: v)
            {
                ans += " " + x;
            }
            ans.erase(ans.begin());
            return ans;
        }
};