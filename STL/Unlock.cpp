//Shekhar is a bomb defusal specialist. He once encountered a bomb that can be defused only by a secret code. He is given a number N and a number K. 
//And he is also given permutation of first N natural numbers . The defusal code is the largest permutation possible by doing atmost K swaps
//among a pair of the given permutation. Help him to find the final permutation.

//Input Format

//First line contains ​an integer N and an integer k. The next line contains N space separated integers denoting the given permutation

//Constraints

//1 <= n <= 10^5
//1<= K <= 10^9


#include<iostream>

using namespace std;

void swap(int*a , int*b)
{
   int temp = *b;
   *b = *a;
   *a = temp;
}


int main() 
{
	int n,k;
	cin >> n >> k;
    int a[n+1], num, place[n+1];

	for(int i=1; i<=n; i++)
	{
		cin >> num;
        a[i] = num;
        place[num]= i;
    }
    
    //for(int i=1; i<=n; i++)
	//   cout<<place[i]<<" ";
	   
	 //cout<<endl;
	
	num =n;
    int count = 0;


	for(int i=1; count < k && i<=n; i++)
	{
         if(a[i] == num)
              num--;

		 else
		 {
		     //cout<< place[num]<<endl;
		      int index = place[num];
		      
		      int tem = place[a[i]];
		      place[a[i]] = place[num];
		      place[num] = tem;
		      
		      
			 swap(a+i, a + index);
			 count++;
			 num--;
			 
		 }
		 
		 	//for(int i=1; i<=n; i++)
	        //     cout<<place[i]<<" ";
	             
	        //cout<< endl;
	}
	
	

	for(int i=1; i<=n; i++)
	   cout<<a[i]<<" ";
	
	return 0;
}






