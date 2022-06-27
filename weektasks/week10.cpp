# Search Insert Position

#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int arr[25], i, j, k, n, c = 0, key;
  cout << "Enter total array size:";
  cin >> n;
  cout << "Enter array elements:\n";
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  cout << "Enter the key:";
  cin >> key;
  for (j = 0; j < n; j++)
    {
      if (arr[j] == key - 1)
	{
	    c = 1;
	  cout << j + 1;
	  
	  break;
	}
    }
  if (c == 0)
    {
     for (j = 0; j < n; j++)
	{
	  for (k = 0; k < n; k++)
	    {
	      if (arr[j] == key - k)
		{
		  cout << k + 1;
		  break;
		}
	    }
	}
    }
  return 0;
}
----------------------------------------------------------------------------------------------------
