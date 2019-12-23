#include<iostream>
#define endl '\n'
using namespace std;
const int MAXN = (int) 1e5+2;
int remainder[MAXN];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,n,sum=0;
    cin>>k>>n;
    bool is_answer=false;
    for(int i=0;i<n;++i){
        int num;
        cin>>num;
        if(!is_answer){
            sum=(sum+num)%k;
            //cout<<num<<" "<<sum<<" "<<remainder[sum]<<endl;
            if(num%k==0){
                cout<<i+1<<endl;
                is_answer=true;
            }else if(remainder[sum]>0 or sum==0){
                for(int i2=remainder[sum];i2<=i;++i2){
                    cout<<i2+1<<" ";
                }
                cout<<endl;
                is_answer=true;
            }
            remainder[sum]=i+1;
        }
    }
    if(!is_answer){
        cout<<"no kravaiche\n";
    }
return 0;
}