#include <iostream>
using namespace std;

int main() {

int day;    
cout << "Enter date (code): ";
cin >> day;
switch(day) {
    case 1:
       cout << "Monday";
       break;
    case 2: 
       cout << "Thursday";    
    case 3:
       cout << "Wednesday";
       break;
    case 4: 
       cout << "Thursday";    
    case 5:
       cout << "Friday";
       break;
    case 6: 
       cout << "Saturday";    
       break;
    case 7:
       cout << "Sunday";
       break;
    default:
       cout << "code not found, try again!!" << endl;
       break;   
}

}