class Solution
{

    private:
        bool compare(vector<int> &selected, string currstring)
        {
            vector<int> selfCheck(26, 0);

            for (int i = 0; i < currstring.size(); i++)
            {
                if (selfCheck[currstring[i] - 'a'] == 1)
                {
                    return false;
                }
                selfCheck[currstring[i] - 'a'] = 1;
            }

            for (int i = 0; i < currstring.size(); i++)
            {
                if (selected[currstring[i] - 'a'] == 1)
                {
                    return false;
                }
            }
            return true;
        }

    int help(int i, vector<string> &arr, vector<int> &selected, int len)
    {

        if (i == arr.size())
        {
            return len;
        }

        string currstring = arr[i];

        if (compare(selected, currstring) == false)
        {

            return help(i + 1, arr, selected, len);
        }
        else
        {

            for (int j = 0; j < currstring.size(); j++)
            {
                selected[currstring[j] - 'a'] = 1;
            }
            len += currstring.size();

            int opt1 = help(i + 1, arr, selected, len);

            for (int j = 0; j < currstring.size(); j++)
            {
                selected[currstring[j] - 'a'] = 0;
            }
            len -= currstring.size();

            int opt2 = help(i + 1, arr, selected, len);

            return max(opt1, opt2);
        }
    }
    public:
        int maxLength(vector<string> &arr)
        {
            vector<int> selected(26, 0);

            return help(0, arr, selected, 0);
        }
};