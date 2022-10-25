#include<bits/stdc++.h>
using namespace std;
void insert(int arr[], int n, int k, int item){
   for (int i=n-1;i>=k;i--)
   {
      arr[i+1]=arr[i];
   }
   n++;
   arr[k]=item;

   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
}
void deletion(int arr[],int n,int k){

   for (int i=k; i<n; i++)
   {
         arr[i]=arr[i+1];
   }
   n--;
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
}

bool linearSearch(int *arr,int n,int k)
{
   for (int i = 0; i < n-1; i++)
   {
      if(arr[i]==k){
         return true;
         break;
      }
   }
   return false;
}

int binarysearch(int arr[],int n,int key){

   int low=0;
   int high=n-1;
   while (low<=high)
   {
      int mid=(low+(high-low)/2);
      if(arr[mid]==key){
         return mid;
      }
      else if(arr[mid]<key){
         low=mid+1;
      }else{
         high=mid=1;
      }
   }
   return -1;

}

void bubblesort(int arr[],int n){
   for (int i = 0; i < n-1; i++)
   {
      for (int j = 0; j<n-1;j++)
      {
         if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
         }
      }
   }

   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }

}
//! quicksort

int partition(int arr[],int start,int end){
   int pivotvalue=arr[start];
   int pivotposition=start;
   for (int i = start+1; i <=end; i++)
   {
      if(pivotvalue>arr[i]){
         swap(arr[pivotposition+1],arr[i]);
         swap(arr[pivotposition],arr[pivotposition+1]);
         pivotposition++;
      }
   }
   return  pivotposition;
}
void quickSort(int arr[], int low, int high){

   if(low<high){
      int pi=partition(arr,low,high);
      quickSort(arr,low,pi+1);
      quickSort(arr,pi+1,high);
   }

 }
int main(){

   int arr[]={1,55,3,4,5};
   int n=5;
   int pos=2;
   // int element=100;
   // insert(arr,n,pos,element);
   // deletion(arr,n,2);
   /* if(linearSearch(arr,n,2)){
      cout<<"found"<<endl;
   }else{
      cout<<"Not found"<<endl;
   } */
   // cout<<binarysearch(arr,n,3);
   // bubblesort(arr,n);
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
   quickSort(arr,0,n-1);
   for (int i = 0; i <n; i++)
   {
      cout<<arr[i]<<" ";
   }
    
   

}
