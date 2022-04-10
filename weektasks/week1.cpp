A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
•	For example, for arr = [1,2,3], the following are considered permutations of arr: [1,2,3], [1,3,2], [3,1,2], [2,3,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).
•	For example, the next permutation of arr = [1,2,3] is [1,3,2].
•	Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
•	While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.
The replacement must be in place and use only constant extra memory.
 
Example 1:
Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:
Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:
Input: nums = [1,1,5]
Output: [1,5,1]

Answer code:1
  
#include <algorithm>
#include <iostream>
#include<list>
using namespace std;
int main()
{
	list<int>s;
	int total;
	cout<<"Enter total no of elements:";
	cin>>total;
	int number;
	for(int inp=0;inp<total;inp++){
	    cin>>number;
	    s.push_back(number);
	}

	   bool val= next_permutation(s.begin(),s.end());
	    if(val == false)
    	{
    		cout << "\nNo Word Possible"<< endl;
    		
    	}		
    	else
    	{   
    	    cout<<"\nNext permutation:";
    	    for(auto j=s.begin();j!=s.end();j++){
    	        cout<< *j;
    	 }
    		
    	}
    	    
       
    return 0;
}

Answer2: 

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string number ;
    
    cout<<"enter number"<<endl ;
    cin>>number ;
   cout<<"enter  lexicographically next  " << endl ;
   int n ;
   cin>>n ;
   for(int i = 0; i< n ;  i++) {
      bool val = next_permutation(number.begin(), number.end());
      if (val == false) {
         cout << "No next permutation" << endl;
         break;
      } else
      {
      int c=1 ;
        
      }
 
      
      
   }
   cout<<number<<endl;
}


------------------------------------------------------------------------
question - Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:
•	'.' Matches any single character.
•	'*' Matches zero or more of the preceding element.
The matching should cover the entire input string (not partial
	
	
code:
#include<iostream>
#include<string>
#include<regex>
using namespace std;
int main()
{
    string s,p;
    cout<<"Enter string: ";
    getline(cin, s, '\n');
    cout<<"Enter pattern: ";
    getline(cin, p, '\n');
    regex obj(p);
    smatch res;
    regex_match(s, res, obj);
    if(res[0]==s)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
	
