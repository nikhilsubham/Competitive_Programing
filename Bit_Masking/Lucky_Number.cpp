//You are given a lucky number n. Lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky
//and 5, 17, 467 are not.

//If we sort all lucky numbers in increasing order, what's the 1-based index of n?


#include <iostream>
#include<cstring>

using namespace std;

int main()
{

   string ch;
   cin >> ch;
  
   int n = ch.size();
   //cout<< n << endl;
   
   int ans =0;
   int pow =2;
   
   for(int i=0; i<n-1; i++)
   {
         ans = ans + pow;
         pow = pow*2;
   }
   
   //cout<< ans << endl;
   
   for(int i=n-1, pos =0; i>=0; i--, pos++)
   {
       if(ch[i] == '7')
          ans = ans + (1 << pos);
   }
   
   cout<< ans +1 << endl;
   
   
   return 0;
}
