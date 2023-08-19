#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout << "---------- NUMBER GUESSING GAME ----------" << endl;
    cout << "Choose a number between 1 to 10 " << endl;

    while(true){
        srand(time(0));
        int generateNo = (rand() % 10) + 1;
        int chances = 5;
        cout << endl;
        for(int i=1; i<=5; i++){
            cout << "Enter number choosen by you : ";
            int userInput;
            cin >> userInput;
            if(userInput == generateNo){
                cout << "CONGRATULATIONS! You WON the game, " << userInput << " is the correct number" << endl;
                cout << endl;
                break; 
            }
            else{
                cout << "NO, " << userInput << " is wrong number choosen by you" << endl;
                cout << endl;

                if(userInput > generateNo){
                    cout << "Choose a smaller Number" << endl;
                }
                else{
                    cout << "Choose a greater number" << endl;
                }
                cout << endl;
                chances--;
                cout << chances << " chances left " << endl;
                
                if(chances == 0){
                    cout << "You can't guess the correct number. The correct number was " << generateNo << endl;
                    cout << "You LOOSE the game" << endl;
                }
            }
        }
        break;
    }
    return 0;
}