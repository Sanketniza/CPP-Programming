
#include<iostream>
#include<vector>
using namespace std;
 
 template<class T>
 void display(vector<T> &v) {
    for (int i = 0; i < v.size(); i++)
    {
       cout<< v [i] << " ";
       cout << v.at(i)<<" " << endl;
       // The at() function is used to access the element at a specific index
    }
    cout << endl;
 }
 
int main() { 
    // Ways to create a vector

    vector<int> vec1; // zero length integer vector
    int element , size = 5;

    cout << "Enter an element to add to this vector : ";
    cin >> size; 

    for (int  i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector : ";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 100);
    // display(vec1);


     vector<char> vec2(4);  // 4 elements characters vector

    // vec2.push_back('5');
    // display(vec2);

    // vector<char> vec3(vec2); // 4 elements characters vector from vec2
    // display(vec3);

     vector<int> vec4(6,45) ; // 6 - elements vector of 3s
     display(vec4);

    return 0;
}