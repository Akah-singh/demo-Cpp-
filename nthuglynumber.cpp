#include<bits/stdc++.h>
using namespace std;

int divide(int a,int b)
{
    while(a%b==0)
    {
        a=a/b;
    }
    return a;
}

bool ugly(int n)
{
    n=divide(n,2);
    n=divide(n,3);
    n=divide(n,5);
    if(n==1) return true;
    else return false;
}

int main()
{
    int c=0;
    int n;
    //jhjhjnbb
    int i=1;
    cin>>n;
    while(c!=n)
    {
        if(ugly(i)==true) c+=1;
        i++;
    }
    cout<<i-1<<endl;
    return 0;
}