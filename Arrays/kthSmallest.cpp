#include<bits/stdc++.h>
using namespace std;

void kthsmallest(int arr[],int n,int k){
   set<int> s;
   for (int i = 0; i < n; i++)
   {
   s.insert(arr[i]);
   }
   auto it = s.begin();
   for(int i=0;i<k-1;i++){
      it++;
   }

   cout<<*it<<endl;


}


int main(){
 int arr[] = { 7, 10, 4, 3, 3, 15};
 int n = sizeof(arr) / sizeof(arr[0]), k = 2;
 kthsmallest(arr,n,2);
}
