#include <iostream>
using namespace std;

int main() {

  int n , start, end;
 
  cout << "Enter a start range: ";
  cin >> start;
  cout<<"enter the end range";
  cin>>end;
  
for(int n=start;n<=end;n++)
 {
    bool is_prime = true; //it means we have to make it false if it is not prime num

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    // loop to check if n is prime
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
        is_prime = false; //it will trying to make prime number is false
        break;
        }
    }

    if (is_prime)
      {
        cout << n <<" ";
      }  
    

}
  return 0;
}
