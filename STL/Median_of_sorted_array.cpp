//We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  
   int n,k;
   cin >> n;
   k = n;
   n= 2*n;
   
   vector<int> a;
   int ele;
   
   while(n--)
   {
       cin >> ele;
       a.push_back(ele);
   }
   
   sort(a.begin(), a.end());
   cout<< a[k-1] << endl;
   
   return 0;
}
