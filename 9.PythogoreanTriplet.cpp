#include <bits/stdc++.h>


using namespace std;
//link :-https://www.hackerrank.com/contests/projecteuler/challenges/euler009/problem

int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n;
        cin>>n;
        int a,b,c;
        int max1=-1;

        for(a=3;a<n;a++)
        {
            b=n*(2*a-n)/(2*(a-n));
            c=n-a-b;

            if(a*a+b*b==c*c && b>0 && c>0)
            {
                int k=a*b*c;
                if(k>max1)
                    max1=k;
            }

        }


            cout<<max1<<endl;
    }
    return 0;
}
