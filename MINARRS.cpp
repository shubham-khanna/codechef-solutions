//code contributed by shubham khanna www.github.com/shubham-khanna
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;           //variable t for test cases
    cin>>t;          // input t
    while(t--)       //loop through all the test cases
    {
        ll n;         //variable n for total number of elements 
        cin>>n;        //input n
        ll a[n];        //create an array of n elements
      
        for(int i=0;i<n;i++)   //input all the elements of array a
            cin>>a[i];
            
        ll lol[32];            //create an array lol of 32 digits to denote a 10^9 number in binary form i.e. 2^32
        ll X=0;                //variable X
        ll sum=0;               //variable sum to store the final answer
        
        memset(lol,0,sizeof(lol));   //intitialising all the elements of lol array to 0 using memset function
        
        for(int i=0;i<n;i++)        //loop through all the elements of array a
        {
            for(int j=31;j>=0;j--)    //loop through all the digits of 32 bit number
            {
                if(a[i]&(1<<j))       //if AND operation of a[i] and 2^i is 1, eg. a[i] = 4 and 1<<2 = 4 then 4 & 4 = 1   (also 5 & 4=1) 
                    lol[j]++;          //increment value of array lol
            }
        }
        
         for(int i=31;i>=0;i--)
         {
            if(lol[i]>n/2){        //if element lol[i] in binary representation appears more than n/2 times 
                X+=(1<<i);          // we add its value to X 
            }
        }                        //why ?
                                 // because XORing this value with all the elements will minimize our result
                                 
        for(int i=0;i<n;i++){
            sum+=a[i]^X;          //calculating minimum sum
        }
        cout<<sum<<endl;          //output
    }
    
    return 0;
}
//code contributed by shubham khanna www.github.com/shubham-khanna
