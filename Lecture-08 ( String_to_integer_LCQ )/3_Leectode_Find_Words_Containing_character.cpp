




    //  Question Link:https://leetcode.com/problems/find-words-containing-character/


    class Solution {
        public:
            vector<int> findWordsContaining(vector<string>& wds, char x) {
                
                vector<int>res;
        
                for(int i=0;i<wds.size();i++)
            {
                    for(int j=0;j<wds[i].length();j++)
                    {
                        if(wds[i][j]==x)
                    {
                        res.push_back(i);
                        break;
                    }
                    }
            }
            return res;
            }
        };