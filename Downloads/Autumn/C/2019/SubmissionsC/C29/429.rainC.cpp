#include<iostream>
#include<stack>
#define endl '\n'
using namespace std;
int m[1000005],pr,h,m2[1000005];
stack<int> st;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,in,h,mv=0,br=0,s=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>m[i];
        m2[i]=m[i];
        s+=m[i];
    }

    st.push(0);
    for(int i=0;i<n;i++){
           int  j=1;
        while(m[j]!=m[st.top()])
       {
         if(m[j]>m[st.top()])
        {
            st.pop();
            st.push(j);
        }
        else
        {
            m[j]=m[st.top()];
        }
        j++;
       }

    }

    //for(int i=0;i<n;i++) s+=m[i];

    cin>>k;
    int ob=0;
    for(int i=0;i<k;i++)
    {
        cin>>pr>>h;
        if(m2[pr]+h>m[pr])
        {
           br++;
           m[pr]=m2[pr]+h;

           int j=i+1;
            while(m[j]<m[pr])
             {
                  ob+=m[pr]-m[j];
                  j++;
                  if(j>=n) break;
             }
             j=i;
              while(m[j]<m[pr])
             {
                  ob+=m[pr]-m[j];

                  //if(m[j-1]>m[pr]) ob+=h;
                  j--;if(j<=0) break;
             }
             ob+=h;


        }
    }
cout<<br<<" "<<s-ob<<endl;
}
/*
6
2 4 2 4 2 1
2
2 1
4 1
*/

