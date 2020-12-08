#include <iostream>
#include <math.h>

using namespace std;

int main() {

 int summ=0;
 int rem; 
 int num_work;
 int n = 0;

  for(int i = 10; i<=9999; i++){    
    num_work = i;    
    
    if (i<=99) n=2;
    if (i>=100 && i<=999) n=3;
    if (i>1000) n = 4;
  
     while(num_work!=0){
      rem = num_work%10;
      rem = pow(rem,n);
      summ += rem;
      num_work = num_work/10;
    }   
      rem=0;      
      
      if(summ == i){
      cout<<"Armstrong's number of " <<n<<" digits: "<<i<<endl;
      }
      
   summ=0;
  }
}
