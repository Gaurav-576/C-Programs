
#include <iostream>
using namespace std;


// Your code goes here

template<typename type>
type index_of_largest(type *a,type b) {
    int temp=a[0],res;
    for(int i=1;i<b;i++) {
        if(a[i]>temp) {
            temp=a[i];
            res=i;
        }
    }
    return res;
}





int main()  {
    int n;
    cin>>n;
    int arr_int[n];
    for(int i = 0; i < n; i++){
        cin>>arr_int[i];
    }
    int res = index_of_largest<int>(arr_int, n);
    cout<<res<<endl;
    
    cin>>n;
    double arr_double[n];
    for(int i = 0; i < n; i++){
        cin>>arr_double[i];
    }
    res = index_of_largest<double>(arr_double, n);
    cout<<res<<endl;
    return 0;
}
