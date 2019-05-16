#include <iostream>
#include <string>
#include <queue>
#include <ctype.h>
#include<stdlib.h>

using namespace std;

int main()
{
  int TotalIncome,showcount;
  int calculateShowIncome(int count);
  
  int i,n;
  cout<<"\n Enter the No of Theaters"; 
  cin>>n;
  
  int inputLine[3]={5,5,10};
  int inputLine2[10]={2,4,2,3,4,2,1,2,1,3};
  showcount=inputLine[1];

  while(n!=0)
    {
        while(showcount !=0)
        {
            int Totalcount=0;  
            for(i=0;i<inputLine[2];i++)
            {
            Totalcount=Totalcount+inputLine2[i];
            }
            TotalIncome=calculateShowIncome(Totalcount);
            showcount--;
        }
    cout<<"\n Total Income of Theater"<<n<<"is="<<TotalIncome; 
    n--;
    }
}

 int calculateShowIncome(int count)
 {
     int Income=0;
     Income=10*count;
     return Income;
 }
 
