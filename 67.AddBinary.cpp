/* Given two binary strings a and b, return their sum as a binary string. 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

*/

class Solution {
public:
    string addBinary(string a, string b) {
        string c = "";
        bool carry = false;
        string a2 = a;
        string b2 = b;
        int i = a.length() - 1;
        int j = b.length() - 1;

        if(i > j){
            int k = i - j;
            string d = ""; 
            for(int p = 0; p < k; p++){
                d += '0';
            }
            b2 = d + b2;
            //j = b2.length()-1;
            
            cout << a2 << endl;
            cout << b2 << endl;
        }

        else if(j > i){
            int k = j - i;
            string d = ""; 
            for(int p = 0; p < k; p++){
                d += '0';
            }
            a2 = d + a2;
            

            
            cout << a2 << endl;
            cout << b2 << endl;

        }

        i = a2.length() - 1;
        j = b2.length() - 1;

        
        while(i >= 0){
            if(a2[i] == '0' && b2[j] == '0'){
                if(carry){
                    c += '1';
                    carry = false;
                }
                else{
                    c += '0';
                }
            }

            else if((a2[i] == '1' && b2[j] == '0') || (a2[i] == '0' && b2[j] == '1')){
                if(carry){
                    c += '0';
                    carry = true;
                }
                else{
                    c += '1';
                }
            }
            else if(a2[i] == '1' && b2[j] == '1'){
                if(carry){
                    c += '1';
                    carry = true;
                }
                else{
                    c += '0';
                    carry = true;
                }
            }
        i--;
        j--;
        }

        if(carry == true){
            c += '1';
        }
    
        reverse(c.begin(), c.end());

    return c;
    }
};

