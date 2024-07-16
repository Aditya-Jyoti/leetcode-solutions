#include <unordered_map>
#include <vector>

class Solution
{
public:
    bool isValid(string s)
    {

        std::unordered_map<char, char> parenMap = {
            {'}', '{'},
            {')', '('},
            {']', '['},
        };

        std::vector<char> paren;

        for (char p : s)
        {
            if (parenMap.find(p) != parenMap.end())
            {

                if (paren.empty() || parenMap[p] != paren.back())
                {
                    return 0;
                }

                paren.pop_back();
            }
            else
            {
                paren.push_back(p);
            }
        }

        if (paren.empty())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};