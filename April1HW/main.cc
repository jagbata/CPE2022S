#include<iostream>
using namespace std;


extern uint64_t copy(uint64_t a[], uint64_t b[], int len);

int main(){
int  a[10], b[10]= {3,4,5};
cout<<copy(a,b,10);

return 0;
}
