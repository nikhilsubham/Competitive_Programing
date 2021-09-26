//Given an array, the task is to calculate the sum of lengths of contiguous subarrays having all elements distinct
//Input Format

//An integer n denoting size of array followed by n integers

//Constraints
//1<=N<=10^5

#include <iostream>
#include <unordered_set>
#define mode 1000000007

using namespace std;

int main()
{
   int n,num,i=0,t;
   long long ans =0;
   
   cin >>n;
   t = n;
   
   int arr[n];
   unordered_set<int> check;
   
   while(t--)
   {
       cin >> num;
       arr[i++] = num;
   }
   
   
   int j=0;
   int len =0;
   
   for(int i=0; i<n; i++)
   {
       //int len = 1;
       for(  ;j<n; j++)
       {
           auto it = check.find(arr[j]);
           if(it == check.end())
           {
               check.insert( arr[j] );
               len++;
           }
           
           else
              break;
        }
       
       ans = (ans +  ((len *(len+1))/2))%mode;
       check.erase(arr[i] );
       len--;
   }
   
   cout<< ans << endl;
   
   return 0;
}


