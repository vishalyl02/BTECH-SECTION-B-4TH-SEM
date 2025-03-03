class Solution {
    public:
        string defangIPaddr(string add) {
            string res="";
            for(int i=0;i<add.length();i++)
            {
                if(add[i]=='.')
                {
                    string str2="[.]";
                    res.append(str2);
            
                }
                else
                {
                    res.push_back(add[i]);
                }
            }
        return res;
        }
    };
    