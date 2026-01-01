void rec(int ind,string &s,set<string>&st,string &cur,vector<string>&ans,int n)
{
    if (ind==s.size())
    {
        cur.pop_back();
        ans.push_back(cur);
        return;
    }
    string temp="";
    for (int i=ind;i<n;i++)
    {
        temp+=s[i];
        if (st.find(temp)!=st.end())
        {
         string temp2=cur+temp+" ";
         rec(i+1,s,st,temp2,ans,n);
        }
    }
}

vector<string> getAllValidSentences(string &s, vector<string> &dict)
{
    set<string>st(dict.begin(),dict.end());
    vector<string>ans;
    string cur="";
    int n=s.size();
    rec(0,s,st,cur,ans,n);
    return ans;
}
