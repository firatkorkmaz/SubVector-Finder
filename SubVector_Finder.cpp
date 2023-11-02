/* Finding A SubVector in a Vector Properly and Extracting the Related Index List */

#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector<int> number = {1, 2, 2, 2, 4, 5, 2, 4};  // Main Vector to Check If It Has A SubVector in It...
    vector<int> check_ = {2, 4, 5};                 // SubVector to Check If It is Contained in the Main Vector

    cout << endl << "Number: ";                     // Printing Values of the Main Vector
    for(size_t i=0; i<number.size(); i++){
        cout << number.at(i) << " ";
    }

    cout << endl << "Check_: ";                     // Printing Values of the SubVector
    for(size_t i=0; i<check_.size(); i++){
        cout << check_.at(i) << " ";
    }

    ////////////////////////////////////////////

    vector<int> index_;                             // Defining An Empty Vector to Store the Related Index List

    for(size_t i=0; i<number.size()-check_.size()+1; i++){
        bool key = true;
        for(size_t j=0; j<check_.size(); j++){
            if(number.at(i+j) != check_.at(j)){		// If "check" is Not Found in "number" by Starting Index: i
                key=false;
                break;
            }
        }
        if(key==true){
            for(size_t j=0; j<check_.size(); j++){	// "check" Vector is Found in "number" Vector
                index_.push_back(i+j);
            }
            break;
        }
    }

    ////////////////////////////////////////////

    cout << endl << endl << "Index_: ";
    for(size_t j=0; j < index_.size(); j++)
        cout << index_.at(j) << " ";
    cout << endl;


cout << endl << endl << "-------------" << endl;
system("pause");
return 0;
}
