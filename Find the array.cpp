    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int t,n;
    	cin>>t;
    	while(t--){
    	cin>>n;
    	for(int i=0;i<=n;i++){
    	if(i*i==n){
    	cout<<i<<"\n";
    	break;
    	}
    	if(i*i>n){
    	cout<<i<<"\n";
    	break;
    	}
    	}
    }}
