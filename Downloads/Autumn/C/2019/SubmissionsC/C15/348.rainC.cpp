#include<bits/stdc++.h>
using namespace std;
int a[1000000];
pair<int,int> uvelichenie[1000000];
int n,k;
int slMaxNum=-1;
int maxNum=-1;
int indexW;
bool edinstvenost;
long long f(){
    int ans=0;
    int i=0;
    int j=1;
        while(i<indexW){
           if(a[i]<=a[j]){
            ans=ans+(j-i)*a[i];
            i=j;
            j++;
           }else{
            j++;
           }
        }
        i=n-1;
        j=n-2;
        while(i>indexW){
            if(a[i]<=a[j]){
                ans=ans+(i-j)*a[i];
                i=j;
                j--;
            }else{
                j--;
            }
        }
        return ans;
}
int main(){
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(maxNum<a[i]){
        maxNum=a[i];
        edinstvenost=1;
        indexW=i;
        continue;
    }
    if(maxNum==a[i]){
        edinstvenost=0;
        //cout<<"/";
    }
    //cout<<maxNum;
}
if(edinstvenost==1){
    for(int i=indexW+1;i<n;i++){
        slMaxNum=max(slMaxNum,a[i]);
        //cout<<slMaxNum;
    }
}
cin>>k;
int x,y;
for(int i=0;i<k;i++){
    cin>>x>>y;
    uvelichenie[i]=make_pair(x,y);
    a[x]=a[x]+y;
}
int maxVoda=f();
int vadim=0;
for(int i=0;i<k;i++){
    a[uvelichenie[i].first]=a[uvelichenie[i].first]-uvelichenie[i].second;
    if(maxVoda==f()){
     vadim++;
    }
    a[uvelichenie[i].first]=a[uvelichenie[i].first]+uvelichenie[i].second;
}
//cout<<k-vadim<<" "<<maxVoda;
cout<<f();
//cout<<edinstvenost;
//cout<<index;
//cout<<slMaxNum;
//cout<<f();

return 0;
}
