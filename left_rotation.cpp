// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to left rotate the array by d elements 
void rotate(vector<int> vec, int d) 
{ 
  
    // Push first d elements from the beginning 
    // to the end and remove those elements 
    // from the beginning 
    for (int i = 0; i < d; i++) { 
        vec.push_back(vec[0]); 
        vec.erase(vec.begin()); 
    } 
  
    // Print the rotated array 
    for (int i = 0; i < vec.size(); i++) { 
        cout << vec[i] << " "; 
    } 
} 
  
// Driver code 
int main() 
{ 
    vector<int> vec = { 1, 2, 3, 4, 5, 6 }; 
    int n = vec.size(); 
    int d = 2; 
  
    rotate(vec, d % n); 
  
    return 0; 
} 
