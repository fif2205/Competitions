#include<bits/stdc++.h>
using namespace std;
string s[10000];
bool f(int x,string a){
    int h=-1;
    bool b=false;
    for(int i=0;i<a.size();i++){
        b=false;
        for(int j=h+1;j<s[x].size();j++){
            if(s[x][j]==a[i]){
                h=j;
                b=true;
                //cout<<j<<endl;
                break;
            }
        }
        if(!b){
            return false;
        }
    }
    //cout<<x<<" "<<a<<" OK"<<endl;
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    string a;
    int x=0,y=0,h=0;
    string ans;
    if(k==1){
        for(int i1=0;i1<m;i1++){
            a+=char(i1+'a');
            h=0;
            for(int i=0;i<n;i++){
                if(f(i,a))h++;
            }
            if(h==x)y++;
            else if(h>x){
                x=h;
                y=1;
                ans=a;
            }
            a=a.substr(0,a.size()-1);
        }
        cout<<x<<endl<<ans<<endl<<y<<endl;
    }else if(k==2){
        for(int i1=0;i1<m;i1++){
            a+=char(i1+'a');
            for(int i2=0;i2<m;i2++){
                if(i1==i2)continue;
                a+=char(i2+'a');
                h=0;
                for(int i=0;i<n;i++){
                    if(f(i,a))h++;
                }
                if(h==x)y++;
                else if(h>x){
                    x=h;
                    y=1;
                    ans=a;
                }
                //cout<<a<<" "<<h<<endl;
                a=a.substr(0,a.size()-1);
            }
            a=a.substr(0,a.size()-1);
        }
        cout<<x<<endl<<ans<<endl<<y<<endl;
    }else if(k==3){
        for(int i1=0;i1<m;i1++){
            a+=char(i1+'a');
            for(int i2=0;i2<m;i2++){
                if(i1==i2)continue;
                a+=char(i2+'a');
                for(int i3=0;i3<m;i3++){
                    if(i1==i3)continue;
                    if(i2==i3)continue;
                    a+=char(i3+'a');
                    h=0;
                    for(int i=0;i<n;i++){
                        if(f(i,a))h++;
                    }
                    if(h==x)y++;
                    else if(h>x){
                        x=h;
                        y=1;
                        ans=a;
                    }
                    //cout<<a<<" "<<h<<endl;
                    a=a.substr(0,a.size()-1);
                }
                a=a.substr(0,a.size()-1);
            }
            a=a.substr(0,a.size()-1);
        }
        cout<<x<<endl<<ans<<endl<<y<<endl;
    }else if(k==4){
        for(int i1=0;i1<m;i1++){
            a+=char(i1+'a');
            for(int i2=0;i2<m;i2++){
                if(i1==i2)continue;
                a+=char(i2+'a');
                for(int i3=0;i3<m;i3++){
                    if(i1==i3)continue;
                    if(i2==i3)continue;
                    a+=char(i3+'a');
                    for(int i4=0;i4<m;i4++){
                        if(i1==i4)continue;
                        if(i2==i4)continue;
                        if(i3==i4)continue;
                        a+=char(i4+'a');
                        h=0;
                        for(int i=0;i<n;i++){
                            if(f(i,a))h++;
                        }
                        if(h==x)y++;
                        else if(h>x){
                            x=h;
                            y=1;
                            ans=a;
                        }
                        //cout<<a<<" "<<h<<endl;
                        a=a.substr(0,a.size()-1);
                    }
                    a=a.substr(0,a.size()-1);
                }
                a=a.substr(0,a.size()-1);
            }
            a=a.substr(0,a.size()-1);
        }
        cout<<x<<endl<<ans<<endl<<y<<endl;
    }else if(k==5){
        for(int i1=0;i1<m;i1++){
            a+=char(i1+'a');
            for(int i2=0;i2<m;i2++){
                if(i1==i2)continue;
                a+=char(i2+'a');
                for(int i3=0;i3<m;i3++){
                    if(i1==i3)continue;
                    if(i2==i3)continue;
                    a+=char(i3+'a');
                    for(int i4=0;i4<m;i4++){
                        if(i1==i4)continue;
                        if(i2==i4)continue;
                        if(i3==i4)continue;
                        a+=char(i4+'a');
                        for(int i5=0;i5<m;i5++){
                            if(i1==i5)continue;
                            if(i2==i5)continue;
                            if(i3==i5)continue;
                            if(i4==i5)continue;
                            a+=char(i5+'a');
                            h=0;
                            for(int i=0;i<n;i++){
                                if(f(i,a))h++;
                            }
                            if(h==x)y++;
                            else if(h>x){
                                x=h;
                                y=1;
                                ans=a;
                            }
                            //cout<<a<<" "<<h<<endl;
                            a=a.substr(0,a.size()-1);
                        }
                        a=a.substr(0,a.size()-1);
                    }
                    a=a.substr(0,a.size()-1);
                }
                a=a.substr(0,a.size()-1);
            }
            a=a.substr(0,a.size()-1);
        }
        cout<<x<<endl<<ans<<endl<<y<<endl;
    }else if(k==6){
        for(int i1=0;i1<m;i1++){
            a+=char(i1+'a');
            for(int i2=0;i2<m;i2++){
                if(i1==i2)continue;
                a+=char(i2+'a');
                for(int i3=0;i3<m;i3++){
                    if(i1==i3)continue;
                    if(i2==i3)continue;
                    a+=char(i3+'a');
                    for(int i4=0;i4<m;i4++){
                        if(i1==i4)continue;
                        if(i2==i4)continue;
                        if(i3==i4)continue;
                        a+=char(i4+'a');
                        for(int i5=0;i5<m;i5++){
                            if(i1==i5)continue;
                            if(i2==i5)continue;
                            if(i3==i5)continue;
                            if(i4==i5)continue;
                            a+=char(i5+'a');
                            for(int i6=0;i6<m;i6++){
                                if(i1==i6)continue;
                                if(i2==i6)continue;
                                if(i3==i6)continue;
                                if(i4==i6)continue;
                                if(i5==i6)continue;
                                a+=char(i6+'a');
                                h=0;
                                for(int i=0;i<n;i++){
                                    if(f(i,a))h++;
                                }
                                if(h==x)y++;
                                else if(h>x){
                                    x=h;
                                    y=1;
                                    ans=a;
                                }
                                //cout<<a<<" "<<h<<endl;
                                a=a.substr(0,a.size()-1);
                            }
                            a=a.substr(0,a.size()-1);
                        }
                        a=a.substr(0,a.size()-1);
                    }
                    a=a.substr(0,a.size()-1);
                }
                a=a.substr(0,a.size()-1);
            }
            a=a.substr(0,a.size()-1);
        }
        cout<<x<<endl<<ans<<endl<<y<<endl;
    }else if(k==7){
        for(int i1=0;i1<m;i1++){
            a+=char(i1+'a');
            for(int i2=0;i2<m;i2++){
                if(i1==i2)continue;
                a+=char(i2+'a');
                for(int i3=0;i3<m;i3++){
                    if(i1==i3)continue;
                    if(i2==i3)continue;
                    a+=char(i3+'a');
                    for(int i4=0;i4<m;i4++){
                        if(i1==i4)continue;
                        if(i2==i4)continue;
                        if(i3==i4)continue;
                        a+=char(i4+'a');
                        for(int i5=0;i5<m;i5++){
                            if(i1==i5)continue;
                            if(i2==i5)continue;
                            if(i3==i5)continue;
                            if(i4==i5)continue;
                            a+=char(i5+'a');
                            for(int i6=0;i6<m;i6++){
                                if(i1==i6)continue;
                                if(i2==i6)continue;
                                if(i3==i6)continue;
                                if(i4==i6)continue;
                                if(i5==i6)continue;
                                a+=char(i6+'a');
                                for(int i7=0;i7<m;i7++){
                                    if(i1==i7)continue;
                                    if(i2==i7)continue;
                                    if(i3==i7)continue;
                                    if(i4==i7)continue;
                                    if(i5==i7)continue;
                                    if(i6==i7)continue;
                                    a+=char(i7+'a');
                                    h=0;
                                    for(int i=0;i<n;i++){
                                        if(f(i,a))h++;
                                    }
                                    if(h==x)y++;
                                    else if(h>x){
                                        x=h;
                                        y=1;
                                        ans=a;
                                    }
                                    //cout<<a<<" "<<h<<endl;
                                    a=a.substr(0,a.size()-1);
                                }
                                a=a.substr(0,a.size()-1);
                            }
                            a=a.substr(0,a.size()-1);
                        }
                        a=a.substr(0,a.size()-1);
                    }
                    a=a.substr(0,a.size()-1);
                }
                a=a.substr(0,a.size()-1);
            }
            a=a.substr(0,a.size()-1);
        }
        cout<<x<<endl<<ans<<endl<<y<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}
/*
3 4 1
abc
bcd
abd

3 4 2
abc
cab
abd

5 7 2
fagcbdaga
dcdfb
acfebdc
cfc
cegdb
*/
