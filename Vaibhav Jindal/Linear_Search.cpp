// C++ code to linearly search x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 
  
#include <iostream> 
using namespace std; 

//FUNCTION FOR LINEAR SEARCH  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{
    int len;
    cout << "Enter Length of Array: "; 
    cin >> len;
    int arr[len];
    cout << "Enter Elements of Array: ";
    for(int i = 0; i < len; i++)
        cin >> arr[i];
    int x;
    cout << "Enter Element to Search: ";
    cin >> x;
    int result = search(arr, len, x); 
    (result == -1)? cout<<"Element is not present in array" << endl
                  : cout<<"Element is present at index " << result << endl; 
    return 0; 
} 

