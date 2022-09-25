#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[]={1,2,1,2,3};

	
	int n=sizeof(arr)/sizeof(int);
	// cout<<n<<endl;
	// findmax	
	int min=0;
	for (int i = 0; i <n ; ++i)
	{
		if(arr[i]>min){
			min=arr[i];
		}
	}
	// cout<<min<<endl;

	int counter[min]={0};
	int size=sizeof(counter)/sizeof(int);

	for (int i = 0; i <= size; ++i)
		{
			counter[i]=0;
		}	
for (int i = 0; i <= size; ++i)
		{
		cout<<counter[i]<<" ";
		}	

for (int i = 0; i < n; ++i)
	{
		counter[arr[i]]++;
	}
	cout<<endl;
		
	for (int i = 0; i <= size; ++i)
	{
		cout<<counter[i]<<" ";
	}


for (int i = 1; i <= size; ++i)
	{
		counter[i]+=counter[i-1];
	}
	cout<<endl;

for (int i = 0; i <= size; ++i)
	{
		cout<<counter[i]<<" ";
	}
	cout<<endl;
	int output[n];
	for (int i =n-1;i>=0; i--)
	{
		output[--counter[arr[i]]]=arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<output[i]<<" ";
	}


	







}