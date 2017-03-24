#include <bits/stdc++.h>

#define l(i,n) for(int i=0;i<n;i++)
#define	all( gg )	gg.begin(),gg.end()

#define pii pair<int,int>

#define __DEBUG__   0
#define DB()        if(__DEBUG__) cout<<__LINE__<<":\tI'm in!"<<endl
#define DB1(x)      if(__DEBUG__) cout<<__LINE__<<":\t"<<#x"="<<(x)<<endl
#define DB2(x,y)    if(__DEBUG__) cout<<__LINE__<<":\t"<<#x"="<<(x)<<"\t"<<#y"="<<(y)<<endl
#define DBpair(x)   if(__DEBUG__) cout<<__LINE__<<":\t"<<"("<<x.first<<","<<x.second<<")"<<endl
typedef long long LL;

using namespace std;


#define LIM 10000000
#define pll pair<LL,LL>
bool sievePrime[LIM+300]; // 1=not prime  0= prime
vector<LL> prime;

void sieve(long long n){

	sievePrime[1]=1;
	sievePrime[2]=1;
	prime.push_back(2LL);


	for(LL I=3LL;I*I<=n;I+=2LL){
		if(sievePrime[I]==0){
			prime.push_back(I);
			for(int J=I+I;J<=n;J+=I){
				sievePrime[J]=1;
			}
		}
	}


	LL t;
	if((LL)sqrt(n)%2LL==0) t=sqrt(n)+1LL;
	else t=sqrt(n)+2LL;

	for(LL I=t;I<=n;I+=2LL){
		if(sievePrime[I]==0)	prime.push_back(I);
	}

}

vector<pll> pf;
LL _G;
void facto(LL n){
    pf.clear();
    _G=0;

    for(int i=0;i<prime.size() and prime[i]<=sqrt(n);i++){
        if(n%prime[i]==0){
            LL cnt=0;
            while(n%prime[i]==0){
                n/=prime[i];
                cnt++;
            }

            if(pf.size()==0) _G=cnt;
            else _G=__gcd(_G,cnt);

            pf.push_back({prime[i],cnt});
        }
    }
    if(n!=1LL){
        _G=1LL;
        pf.push_back({n,1LL});
    }
}

LL divisorFunc(LL n){
    LL divisor=1LL;
	// make sure it doesn't overflow
    for(int i=0;i<prime.size() && prime[i]<=sqrt(n);i++){
        if(n%prime[i]==0){
            LL cnt=1LL;
            while(n%prime[i]==0){
                n/=prime[i];
                cnt++;
            }
            divisor*=cnt;
            //sqrtn = sqrt(n);
        }

    }
    if(n>1LL) divisor*=2LL;
    return divisor;
}

int main(){
std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//freopen("in.txt","r",stdin);
    sieve(LIM+200);
    //facto(64);

/*
    l(i,pf.size()){
        cout<<pf[i].first<<"#"<<pf[i].second<<endl;
    }
*/
    int t;
    cin>>t;
    l(T,t){
        LL a,b;
        cin>>a>>b;
        facto(a);

        LL x=b*_G;
        //cerr<<"_G "<<_G<<endl;
        LL y=divisorFunc(x);
        //cerr<<"divisor x: "<<y<<endl;

        y--;
        cout<<"Case "<<T+1<<": ";
        cout<<y<<endl;
    }


return 0;
}
