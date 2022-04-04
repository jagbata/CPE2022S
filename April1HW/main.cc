#include <iostream>
using namespace std;


extern void copy(uint32_t a[], uint32_t b[], int len);

int main(){
uint32_t  a[3] ={0,0,0};
uint32_t b[3]= {3,4,5};
copy(a,b,3);
cout<<a[0]<<a[1]<<a[2];

return 0;
}
