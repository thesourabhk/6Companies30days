// Let x be the missing and y be the repeating element.
// Get the sum of all numbers using formula S = n(n+1)/2 – x + y
// Get product of all numbers using formula P = 1*2*3*…*n * y / x
// The above two steps give us two equations, we can solve the equations and get the values of x and y.

class Solution{
public:
    long long *findTwoElement(int *arr, int n) {
        long long N=n;
         long long s=(N*(N+1))/2;
        long long sm=(N*(N+1)*(2*N +1))/6;
    
        for(int i=0;i<n;i++){
            s-=arr[i];
            long long k=arr[i];
            sm-=k*k;
        }
        
       long long flag=sm/s;
        long long mis=(flag+s)/2;
        long long db=flag-mis;
        long long*a=new long long (2);
        a[0]=db;
        a[1]=mis;
    return a;
    }
};
