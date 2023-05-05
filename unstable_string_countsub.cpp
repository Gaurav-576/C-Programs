#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int i,count=1,a[n];
	    long int sum;
	    for(i=0;i<n;i++)
	        cin>>a[i];
	   sort(a,a+n);
	   int j,l;
	   j=1;i=0;
	    sum=(n*(n-1))/2;
	   while(j<n){
	       if(a[j]==a[j-1])
	            count++;
	        else{
	            sum=sum-((count*(count-1))/2);
	            count=1;}
	    j++;
	   }
	    sum=sum-((count*(count-1))/2);
// 	   l=i;
// 	   sum=n*(n-1)/2;
// 	   j=0;
// 	   while(j<l){
// 	       if(b[j]>=2)
// 	            sum=sum-((b[j]*(b[j]-1))/2);
// 	    cout<<b[j];
// 	    j++;
// 	   }
cout<<sum<<endl;
	}
	return 0;
}
