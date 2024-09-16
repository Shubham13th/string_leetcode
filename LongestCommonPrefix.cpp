#include <iostream>
#include <string>
#include <vector>

using namespace std;

class solution
{
public:
    string LongestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 0)
            return "";
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            while (strs[i].find(prefix) != 0)
            {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty())
                    return "";
            }
        }
        return prefix;
    }
};

int main()
{
    solution obj;
    vector<string> strs = {"flower", "flow", "flight","friya"};

    string result = obj.LongestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
