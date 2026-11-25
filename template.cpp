#include<iostream>
using namespace std;

template < int T>
T findMax (T a,T b){
    return (a>b)?a:b;
    }
    
template <int T>
T findMin (T a,T b) {
    return (a<b)?a:b;
    }
    
template <int T>
void swapValues (T&a,T&b) {
    T temp = a;
    a = b;
    b = temp;
    }
    
template <int T>
 T findMax3(T a,T b,T c) {
     T max = a;
     if(b>max)max = b;
     if(c>max)max = c;
     return max;
     }
     
template <int T>
 T findMin3(T a,T b,T c) {
     T min = a;
     if(b>min)min = b;
     if(c>min)min = c;
     return min;
     }
     
     
template <int T,int U>
void displayComparison (T a,U b) {
     cout << "comparing "<< a << "(type" << typeid(a).name() << ")a 
          << "type " << typeid(b).name() << ")" << endl;
     cout << "MAX" << ((a>b))?a:b << endl;
     cout << "MIN " << ((a < b)?a:b) << endl;
     }
     
 int main () {
     cout << "=====Function Templates ======"<< endl;
     
     int int1 = 10,int2 = 20;
     cout << "\n-----Integer operation------"<<endl;
     cout << "Values:"<< int1 << ","<< int2 << endl;
     cout << "max(3 values):"<< findMax3(f1,f2,f3)<< endl;
       
