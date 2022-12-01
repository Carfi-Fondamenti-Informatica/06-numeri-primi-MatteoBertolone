#include <iostream>
int main(){
    int n=0;
    cin>>n;
    if (numprimo(2, n)==true) {
        cout << "numero primo" << endl;
    }else{
        cout <<"numero non primo"<< endl;}
  return 0;
}
