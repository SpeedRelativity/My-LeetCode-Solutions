// 1071. Greatest Common Divisor of Strings

// The logic is that: we find the smallest string.
// We use the smaller string as a candidate, if string1 % candidate and string2 % candidate is zero, move onn
//  then we check if those candidates

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        // we find the smallest string length
        int minLength = min(str1.length(), str2.length());

        // we set the smallest strinng's substring to candidate ( our potential answer )
        for (int i = minLength; i > 0; i--)
        {
            string candidate = str1.substr(0, i);

            // if the substring divides both strings without remainders, it is a candidate
            // else delete the last character and try again.
            if (str1.size() % i == 0 && str2.size() % i == 0)
            {
                string repeated1 = "", repeated2 = "";

                // we devide the string by i, to only get the repeated substring of substr1, not the whole string.
                for (int j = 0; j < str1.size() / i; j++)
                {
                    repeated1 += candidate;
                }
                // we devide the string by i, to only get the repeated substring substr2, not the whole string.
                for (int j = 0; j < str2.size() / i; j++)
                {
                    repeated2 += candidate;
                }

                // if they both match, then we found our candidate, otherwise we decrement i and try again.
                if (repeated1 == str1 && repeated2 == str2)
                {
                    return candidate;
                }
            }
        }
        // if we reach here then return empty string, no candidate matches.
        return "";
    }
};