#include<iostream>
using namespace std;
int main()
{
	int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
	 	for(int j=i+1;j<n;j++)
        {
             if(a[i]+a[j]==0)
             {
                 cout<<a[i]<<"\t"<<a[j]<<endl;
             }
        }
    }
    return 0;

}
