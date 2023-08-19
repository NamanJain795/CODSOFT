#include<iostream>
using namespace std;

void add(float x, float y){
    cout << "Answer will be : " << (x+y) << endl;
}

void sub(float x, float y){
    cout << "Answer will be : " << (x-y) << endl;
}

void mul(float x, float y){
    cout << "Asnwer will be : " << (x*y) << endl; 
}

void divi(float x, float y){
    if(y == 0){
        cout << "Cannot divide number by 0" << endl; 
    }
    else{
        cout << "Answer will be : " << (x/y) << endl;
    }
}

int main(){
    cout << "---------- SIMPLE CALCULATOR ----------" << endl;
    float x, y;
    int op;
    char wantToContinue;
    do{
        cout << "Enter two Numbers : ";
        cin >> x >> y;
        cout << endl << "Operations : " << endl;
        cout << "1 = Addition(+)" << endl;
        cout << "2 = Subtraction(-)" << endl;
        cout << "3 = Multiplication(*)" << endl;
        cout << "4 = Division(/)" << endl;
        cout << endl;
        cout << "Enter the operation to perform(1 - 4):";
        cin >> op;

        switch (op){
        case 1: add(x, y); break;
        case 2: sub(x, y); break;
        case 3: mul(x, y); break;
        case 4: divi(x, y); break;
        default: cout << "Wrong input " << endl;
            break;
        }
        cout << "Do you want to continue (y/n) : " ;
        cin >> wantToContinue;
        cout << endl;
        cout << "--------------------------------" << endl;
    }while(wantToContinue == 'y');
    cout << endl;
}