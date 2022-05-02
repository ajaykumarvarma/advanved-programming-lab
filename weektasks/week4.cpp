Rod cutting problem
Given a rod of length n inches and an array of prices that includes prices of all pieces of size smaller than n. Determine the maximum value obtainable by cutting up the rod and selling the pieces. For example, if the length of the rod is 8 and the values of different pieces are given as the following, then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6) 
length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 1   5   8   9  10  17  17  20
And if the prices are as following, then the maximum obtainable value is 24 (by cutting in eight pieces of length 1) 
length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 3   5   8   9  10  17  17  20

  -----------------------------
  code:
#include<iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int max(int a, int b) { return (a > b)? a : b;}
int cutRod(int price[], int n)
{
    int val[n+1];
    val[0] = 0;
    int i, j;
    cout<<"The orderwise summation of the prices:";
    for(i = 1; i<=n; i++)
    {
    	int max_val = 0;
    	for(j = 0; j < i; j++)
    		max_val = max(max_val, price[j] + val[i-j-1]);
    	val[i] = max_val;
    	cout<<(val[i])<<" ";
    }
    cout<<endl;

   cout<<"Maximum obtained value is:"<<val[n]<<endl;;
}
int main()
{   
    int size;
    int arr[size];
    cout<<"Enter length of array:";
    cin>>size;
    cout<<"Enter array elements:"<<endl;
	for(int i=0;i<size;i++)
	{
	    cin>>arr[i];
	}
	cout<<"Entered array elements are: ";
	for(int i=0;i<size;i++)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	cutRod(arr, size);
	getchar();
	return 0;
}
