#include<iostream>
#include<string.h>
#include<stdio.h>
#include<vector>
using namespace std;
char text[10000001],word[101];
vector <int> ind;
int main () {
    int n,m,k,i,j,l,r,mid,br,last,len,fl;
    scanf("%s%s%d",&text,&word,&k);
    n=strlen(text); m=strlen(word);
    for (i=0; i<n-m+1; i++) {
        fl=0;
        for (j=i; j<i+m; j++) {
            if (text[j]!=word[j-i]) {
               fl++;
               break;
               }
            }
        if (fl==0) ind.push_back(i);
        }
    len=ind.size();
    l=-1; r=n;
    for (;;) {
        if (l==r-1) break;
        mid=(l+r)/2;
        br=0; last=-n;
        for (i=0; i<len; i++) {
            if (ind[i]-last>=mid+m) {
               br++; last=ind[i];
               }
            }
        if (br>=k) l=mid;
        else r=mid;
        }
    cout << l ;
    cout << endl ;
    return 0;
}
