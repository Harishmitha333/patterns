#include <iostream>
using namespace std;
int main()
{
   int n;cin>>n;
   for (int i=0;i<n;i++)
   {
       for(int j=0;j<i;j++)//space
       {
           cout<<"  ";
       }  
       for(int k=0;k<=(n-i)-1;k++){
           cout<<"* ";
       }
       cout<<"\n";
   }

    return 0;
}