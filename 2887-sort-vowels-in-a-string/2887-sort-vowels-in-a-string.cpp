class Solution {
public:
    string sortVowels(string s) {
        vector<char>v;
        for(auto x:s){
            if(x=='A' ||  x=='E' || x=='I' || x=='O' || x=='U' || x=='a'|| x=='e' || x=='i'||x=='o' || x=='u'){
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' ||  s[i]=='E' || s[i]=='I' || s[i]=='O' || 
            s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || 
            s[i]=='u'){
                s[i]=v[j++];
            }
        }
        return s;
    }
};