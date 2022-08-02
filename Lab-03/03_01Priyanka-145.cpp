//Name: priyanka
//ID: 21225103145

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
    cin>>s;
    string s1="X++",s2="++X",s3="X--",s4="--X";
    if(s==s1 || s==s2)
    sum++;
    if(s==s3 || s==s4)
    sum--;
    }
    cout<<sum;

}