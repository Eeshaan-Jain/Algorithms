#include<bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)

typedef vector<int> vi;
typedef vector<long> vl;
typedef long long ll;
typedef pair<int,int> pi;
//Test case: 
//Greedy step : Take the endpoint of 1st element and check how many it satisfies

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) { 
    return (a.second < b.second); 
}

int main(){
	//create vector of pairs
	int n;
	cin>>n;
	vector<pi> a(n);
	f(i,0,n){
		int temp1, temp2;
		cin>>temp1>>temp2;
		a[i] = make_pair(temp1,temp2);
	}
	//sort by second element
	sort(a.begin(), a.end(), sortbysec);
	vi c;
	while((int)a.size()>0){
		//Greedy step:
		int curr = a[0].second;
		c.push_back(curr);
		f(i,0,(int)a.size()){
			if(curr>=a[i].first && curr<=a[i].second){
				a.erase(a.begin()+i);
				i--;
			}
		}
	}
	cout<<c.size()<<"\n";
	f(i,0,(int)c.size()){
		cout<<c[i]<<" ";
	}
	
}







