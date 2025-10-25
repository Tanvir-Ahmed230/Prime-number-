# Prime-number-
Whether a number is prime or composite? 

#include <iostream>
using namespace std;
int main() {
int number,i,count=0;
cout<<"Enter any number : ";
cin>>number;


for(i=2;i<number;i++){
  if ( number%i==0){
        count=1;
        break;
    }
}
if(number == 0 || number ==1){
    cout<<"Not prime not composite.";
}
else if(count==1){
    cout<<"Composite";
}
else{
    cout<<"Prime.";
}

    return 0;
}
