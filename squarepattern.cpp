//Print the following pattern for the given N number of rows.
//Pattern for N = 4
//4444
//4444
//4444
//4444
#include<iostream>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          cout<<"4";
      }
      cout<<endl;
    }
    return 0;
    
}
