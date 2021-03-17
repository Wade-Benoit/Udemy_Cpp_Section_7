#include <iostream>
using namespace std;


int main()
{
	 
    char vowels[] {'a','e','i','o','u'};
    
    cout << "The first vowel is " << vowels[0] << " in the char array" << endl;
    
    cout << "The last vowel is " << vowels[4] << " in the char array" << endl;
    
    //cin >> vowels[5];    OUT OF BOUNDS, May not always produce an error.
    
    
    //What happens when you don't initialize:
    
  //  int junk [5]; DONT DO THIS
  
  //DO THIS
     int junk [5] {};
     
    
    for(int i = 0; i < 5; i++ ) {
        cout << "The value at position " << (i+1) << " is " << junk[i] << endl;
    }
    
    
    
    
    return 0;
}
