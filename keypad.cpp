// int sum(Node* root){
//         if(root==NULL) return 0;
//         return sum(root->left)+sum(root->right)+root->data;
//     }
//     bool isSumTree(Node* root)
//     {
//          // Your code here
//          if(root==NULL) return true;
         
//          bool left=isSumTree(root->left);
//          bool right=isSumTree(root->right);
//          int sumt=sum(root->left)+sum(root->right);
//          bool fg=sumt==root->data? true:false;
//          if(left and right and fg) return true;
//          return false;
//     }
// // #include<bits/stdc++.h>
// // using namespace std;
// // class node{
// //     public :
// //     int data;
// //     node* left;
// //     node* right;
// //     node(int data){
// //         this->data = data;
// //         this->left =NULL;
// //         this->right =NULL;
// //     }
// // };

// // node* buildtree(node* root){
// //     int data;
// //     cout<<"enter data"<<endl;
// //     cin>>data;
// //     if(data==-1) return NULL;
// //     node* newnode = new node(data);
// //     root= newnode;
// //     cout<<"indsert the value at left of"<<data<<endl;
// //     buildtree(root->left);
// //     cout<<"indsert the value at right of"<<data<<endl;
// //     buildtree(root->right);
// //     return root;
// // }

// int main(){
    
//     node* root=buildtree(NULL);
// }






// // #include <iostream>
// // #include <vector>
// // #include <climits>

// // using namespace std;


// // void transactions(vector<int> arr) {
// //   // write your code here
// //   int n=arr.size();
// //   if(n==0 || n==1)
// //     return ;
    
// //     vector<int>lp(n);
// //     lp[0]=0;
// //     int lmin=arr[0];
// //     for(int i=1;i<n;i++){
// //         if(arr[i]<lmin) lmin=arr[i];
// //         int profit=arr[i]-lmin;
// //         if(profit>lp[i-1]) lp[i]=profit;
// //         else lp[i]=lp[i-1];
// //     }
    
// //     vector<int>rp(n);
// //     rp[n-1]=0;
// //     int rmax=arr[n-1];
// //     for(int i=n-2;i>=0;i--){
// //         if(arr[i]>rmax) rmax=arr[i];
// //          int profit=rmax-arr[i];
// //         if(profit>rp[i+1]) rp[i]=profit;
// //         else rp[i]=rp[i+1];
// //     }
   
    
// //     int res=0;
// //     for(int i=0;i<n;i++){
// //         int a=lp[i]+rp[i];
// //         if(a>res) res=a;
// //     }
// //     cout<<res;
// // }

// // int main() {
// //   int n ;
// //   cin >> n;
// //   vector<int> arr(n, 0);
// //   for (int i = 0; i < arr.size(); i++) {
// //     cin >> arr[i] ;
// //   }

// //   transactions(arr);

// //   return 0;
// // }
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //   string str;
// // //   //cin>>str;

// // //   getline(cin, str);
// // //   cout<<str<<endl;
// // //   cout<<"new"<<endl;
// // //   for(auto val:str){
// // //     cout<<val<<endl;
// // //   }
// // // }

// // //    res+= f(m,n,maxMove-1,startRow,startColumn+1,v)%mod+f(m,n,maxMove-1,startRow,startColumn-1,v)%mod+f(m,n,maxMove-1,startRow+1,startColumn,v)%mod+f(m,n,maxMove-1,startRow-1,startColumn,v)%mod;
// // //         res=res%mod;


// // //      int a=f(m,n,maxMove-1,startRow,startColumn+1,v)%mod;
// // //      int b=



// // //       int a= f(m,n,maxMove-1,startRow,startColumn+1,v)%mod;
// // //       int b=f(m,n,maxMove-1,startRow,startColumn-1,v)%mod;
// // //       int c=f(m,n,maxMove-1,startRow+1,startColumn,v)%mod;
// // //       int d=f(m,n,maxMove-1,startRow-1,startColumn,v)%mod;
// // //       int a=(a+b)%mod;
// // //       int c=(c+d)%mod;
// // //       int c=(c+a)%mod;


// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int solve(vector<int>&v,int k){
// // // //   // base case to check possibility to be happen or not 
// // // //      if(v.size()==0|| k>v.size()) return-1;

// // // //      // now we make two hash map one for count frequecy and other for store index

// // // //      map<int,int>fq ;// frequecy map
// // // //      map<int,int>index;  // index map
// // // //     // initaialize freq map and index map
// // // //     for(int i=0;i<v.size();i++){
// // // //         fq[v[i]]++;
// // // //         if(!index[v[i]]){
       
// // // //            index[v[i]] =i+1;
// // // //         } 
// // // //     }

// // // //     int res=-1;
// // // //     int res_index=INT_MAX;
// // // //   // traverse and update the res if its fullfil the condition

// // // //    for(auto val:fq){
// // // //        if(val.second>=k and index[val.first]<res_index)
// // // //         {
// // // //              res=val.first;
// // // //              res_index=index[val.first];
// // // //         }
// // // //    }
 
  
// // // //   return res;

// // // // }
// // // // int main(){
// // // //    int n;
// // // //    cin>>n;
// // // //    vector<int>v(n);
// // // //    for(int i=0; i<n;i++) cin>>v[i];
// // // //    int k;
// // // //    cin>>k;
// // // //   cout<<solve(v,k);
// // // // return 0;
// // // // }

// // // // #include<bits/stdc++.h>
// // // // #include<string>
// // // // #include<vector>
// // // // using namespace std;
// // // // vector<string> getKPChelpet(string s,map<int,string>m){
// // // //      if(s.size()==0){
// // // //       vector<string>temp;
// // // //       temp.push_back("");
// // // //       return temp;
// // // //   }
  
// // // //   char p=s[0];
// // // //   int ch=p-'0';
// // // //   vector<string>res=getKPChelpet(s.substr(1),m);
// // // //   vector<string>final;
// // // //   string atmap=m[ch];
// // // //   for(auto val:atmap){
      
// // // //          for(auto t:res){
// // // //              final.push_back(val+t);
// // // //          }
      
// // // //   }
// // // //   return final;
// // // // }
// // // // vector<string> getKPC(string s) {
// // // //   //Write your code here
// // // //       map<int,string>m;
// // // //     m[0]=",;";
// // // //     m[1]="abc";
// // // //     m[2]="def";
// // // //     m[3]="ghi";
// // // //     m[4]="jkl";
// // // //     m[5]="mno";
// // // //     m[6]="pqrs";
// // // //     m[7]="tu";
// // // //     m[8]="vwx";
// // // //     m[9]="yz";
// // // //     vector<string>ans=getKPChelpet(s,m);
// // // //     return ans;

// // // // }


// // // // int main() {
// // // //   string s;
// // // //   cin >> s;
// // // //   vector<string> ans = getKPC(s);
// // // //   int cnt = 0;

// // // //   cout << '[';
// // // //   for (string str : ans) {
// // // //     if (cnt != ans.size() - 1)
// // // //       cout << str << ", ";
// // // //     else
// // // //       cout << str;
// // // //     cnt++;
// // // //   }
// // // //   cout << ']';
// // // // }