#include <bits/stdc++.h> 

void solve(string str,string output,int idx,vector<string>& ans){
    
//     basecase
    if(idx>=str.length()){
       if(output.length()>0){
          ans.push_back(output);     
       }
       return ;
    }
    //     exclude
    solve(str,output,idx+1,ans);
    //     include
    char element=str[idx];
    output.push_back(element);
    solve(str,output,idx+1,ans);
}

vector<string> subsequences(string str){
    vector<string> ans;
    string output="";
    int idx=0;
    solve(str,output,idx,ans);
	return ans;
}
