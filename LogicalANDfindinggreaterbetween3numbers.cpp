#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter three values:"<<endl;
    cin>>n1>>n2>>n3;
    if(n1>n2&&n1>n3)
    {
        cout<<"n1 is greater";
    }
 if(n2>n3&&n2>n1)
    {
        cout<<"n2 is greater:";
    }
  if(n3>n1&&n3>n2){
   
        cout<<"n3 is greater:";
    }
  

return 0;
}