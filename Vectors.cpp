#include <iostream>
#include <vector>
using namespace std;


int main()
{
	 
    
    // Declaring a Vector with three dynamic elements, using the two syntax options
    
    
    vector <int> testScores {100,89,90}; 
    
    cout << "\nHere are the test scores using array syntax: " << endl;
    cout << testScores[0] << endl;
    cout << testScores[1] << endl;
    cout << testScores[2] << endl;
    
    cout << "\nHere are the test scores using vector syntax: " << endl;
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << "There are " << testScores.size() << " elements in the vector" << endl;
    
    
    
    
    
    
    
    
    
    // Adding elements to vector using push_back, and displaying size with vectorName.size()
    
    int addedScore {0};
    
    cout << "Enter a score to add to the class list: " << endl;
    cin >>  addedScore;
    testScores.push_back(addedScore);
    
    
    cout << "Enter another score to add to the list: " << endl;
    cin >> addedScore;
    testScores.push_back(addedScore);
    
    cout << "\nHere are the test scores after adding two elements: " << endl;
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << testScores.at(3) << endl;
    cout << testScores.at(4) << endl;
    cout << "There are " << testScores.size() << " elements in this new vector" << endl;
    
    
    
    
    //A 2D Vector!! A vector of vectors
    
    vector < vector <int> > movieRatings  {
        {1,2,3,678,5,},
        {1,2,3,4,5,},
        {1,2,4,5,4}
        
    };
    
    cout << "\n\nThe outlier element in this 2-D array is: " << movieRatings.at(0).at(3) << endl;
    

    
    
    
    
    
    
    return 0;
}
