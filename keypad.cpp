 #include<bits/stdc++.h>
 #include<string>
 #include<vector>
 using namespace std;
 vector<string> getKPChelpet(string s,map<int,string>m){
      if(s.size()==0){
       vector<string>temp;
       temp.push_back("");
       return temp;
   }
   char p=s[0];
   int ch=p-'0';
   vector<string>res=getKPChelpet(s.substr(1),m);
   vector<string>final;
   string atmap=m[ch];
   for(auto val:atmap){           for(auto t:res){
              final.push_back(val+t);
          }    }
   return final;
 }
 vector<string> getKPC(string s) {
   //Write your code here
       map<int,string>m;
     m[0]=",;";
     m[1]="abc";
     m[2]="def";
     m[3]="ghi";
     m[4]="jkl";
     m[5]="mno";
     m[6]="pqrs";
     m[7]="tu";
     m[8]="vwx";
     m[9]="yz";
     vector<string>ans=getKPChelpet(s,m);
     return ans;
 }
 int main() {
   string s;
   cin >> s;
   vector<string> ans = getKPC(s);
   int cnt = 0;
   cout << '[';
   for (string str : ans) {
     if (cnt != ans.size() - 1)
       cout << str << ", ";
     else
       cout << str;
     cnt++;
   }
   cout << "]";
   }