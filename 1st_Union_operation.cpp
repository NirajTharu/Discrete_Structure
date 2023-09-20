//Codes forn Unoion operation of two sets
#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],n,n1,c[20],k=0,i,j;
    cout<<"Enter the Numbers of Elements in first set:"<<endl;
    cin>>n;
    cout<<"Enter the elements of first set:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the numbers of elements in second set:"<<endl;
    cin>>n1;
    cout<<"Enter the elements of second set:"<<endl;
    for(i=0;i<n1;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<k;j++)
        {
            if(c[j]==a[i])
            break;
        }
        if(j==k)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<k;j++)
        {
            if(c[j]==b[i])
            break;
        }
        if(j==k)
        {
         c[k]=b[i];
         k++;
        }
    }
    cout<<"Union of both sets is:"<<endl;
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<"   ";
    }
    return 0;   
}