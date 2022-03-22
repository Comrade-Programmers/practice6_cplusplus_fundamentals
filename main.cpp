// single line commenting
//  main.cpp
//  cpp_try
//
//  Created by Joshua Opata on 22/03/2022.
//

/* multi line commenting
    main.cpp
    cpp_try

    Created by Joshua Opata on 22/03/2022.
*/

#include <iostream>
using namespace std;

//declaring a function prototype: datatype funactionName();
double calculate();

int main(int argc, const char * argv[]) {
//    looping for 5 times
//    forloop syntax: for (initialization; condition; increment) { statements }
    for (int i=0; i<5; i++) {
        cout << "START OF CALCULATION "<<(i+1)
        <<"\n========================\n";
//        calling the calculate function
//        syntax for calling a function is: nameOfFunction();
        calculate();
        cout << "\n\n";
    }

    return  0;
}


//syntax for functions
// datatype functionName( params ){ statement; }
double calculate(){
//    get firstNumber from the user
    double firstNumber;
    cout << "Enter first Number: ";
    cin >> firstNumber;
    
//    get secondNumber from the user
    double secondNumber;
    cout << "Enter second Number: ";
    cin >> secondNumber;
    
//    get operator from the user
    char op;
    cout << "Enter an operator [+,-,*,/]: ";
    cin >> op;
    
    double total;
    string opName = "";
    
    if(op=='+'){
        total = firstNumber + secondNumber;
        opName = "sum";
    }
    else if(op=='-'){
        total = firstNumber - secondNumber;
        opName = "difference";
    }
    else if(op=='*'){
        total = firstNumber * secondNumber;
        opName = "product";
    }
    else if(op=='/'){
        if(secondNumber==0){
            cout << "Cannot devide by 0.\n";
            return 0;
        }
        total = firstNumber / secondNumber;
        opName = "quotient";
    }
    else{
        cout << "You entered a wrong operator.\n";
        return 0;
    }
    
//    diplay the total
    cout << "The "<<opName<<" of "<<firstNumber<<" and "<< secondNumber<<" is "<<total<<"\n";
    
    return  total;
}
