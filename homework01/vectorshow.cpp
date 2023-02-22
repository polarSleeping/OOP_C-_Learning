#include <iostream> // Stream declarations 
#include <vector>
using namespace std; 


int main() { 
    vector<float> v;
    for(double i = 0; i < 25; i++) {
        v.push_back(i + 0.5);
    }
    cout << "Display the vector:" << endl;
    for(vector<float>::iterator iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << " ";
    }

    system("pause>nul");
    return 0;
}