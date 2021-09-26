//Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the
// strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman
// are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat


#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

bool compare(string a, string b)
{
    if(a.size() < b.size() && b.substr(0, a.size()) == a)
       return b > a;
    
    else if(a.size() > b.size() && a.substr(0, b.size()) == b )
       return a > b;
    
    else
      return a < b;
}



int main()
{
   int n;
   cin>> n;
   
   vector<string> a;
   
   while(n--)
   {
       string str;
       cin >> str;
       
       a.push_back(str);
   }
   
   sort(a.begin(), a.end(), compare);
   
   for(int i=0; i<a.size(); i++)
      cout<< a[i] << endl;
   
   return 0;
}




