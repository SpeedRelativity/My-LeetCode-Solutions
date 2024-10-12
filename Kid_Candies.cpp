// 1431. Kids With the Greatest Number of Candies

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {

        // empty array to store answers.
        vector<bool> result = {};

        // initializing to first kid.
        int greatestNum = candies[0];

        // if we find a bigger number, set that to greatest.
        for (int j = 0; j < candies.size(); j++)
        {
            if ((candies[j]) > greatestNum)
            {
                greatestNum = candies[j];
            }
        }

        // if some kid has more candies than greatestNum when we add extraCandies to it, then
        // we set that kid to true. else false.
        for (int i = 0; i < candies.size(); i++)
        {
            if ((candies[i] + extraCandies) >= greatestNum)
            {
                cout << ((candies[i] + extraCandies));
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};