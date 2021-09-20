/*After the release of Avengers, Ironman and Thor got into a fight and Ironman challenged Thor to find out the number of numbers between 1 and n which are divisible by any of the prime numbers less than 20. Ironman being great at maths quickly answered the question but then Thor asked him to write a program for it. Ironman however found it quite difficult as he did not wanted to write so many lines of code. he knows that you are smart and can code this up easily. Can you do it? */


#include <iostream>
#include<cstring>
using namespace std;

#define ll long long


ll primes[] = {2,3,5,7,11,13,17,19};

int main()
{
    
   ll t;
   cin >> t;
   
   while(t--)
   {
       ll n;
       cin >> n;
       
       
       ll subsets = (1<<8) - 1;
       ll ans =0;
   

       for(int i=1; i<=subsets; i++)
       {
          ll bit; 
          ll denom =1;
          int leng = __builtin_popcount(i);
       
          for(int j=0; j<=7; j++)
           {
              bit = 1<<j;
            
              if(i & bit)
                  denom = denom * primes[j];
            }
            
            
            if(leng & 1)
              ans = ans + n/denom;
              
            else
              ans = ans - n/denom;
            
        }
        
        cout<< ans << endl;
   }
   
   return 0;
}


