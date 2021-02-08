#include<iostream>
#include<time.h>
using namespace std;

#define el '\n'

int main(){

    srand(time(0));
    //generate a random number between 1 to 100
    int secretNumber = rand()%100+1;
    int user_ans = 0;

    cout<<"WELCOME TO THE GUESSING NUMBER GAME"<<el;
    cout<<"-----------------------------------"<<el;
    cout<<"Hi! Please guess the secret number"<<el;

    /*Loop goes on till user guesses the secret number.
    It notifies the user if the number they entered is lower or
    higher than the secret number.
    Loop ends if user ans is correct.*/
    do{
        cin>>user_ans;
        if(!user_ans){
            cout<<"Please enter only numeric value"<<el;
        }

        else{
            //notify if user ans is higher than secret number
            if(user_ans>secretNumber){
                cout<<"Wrong! You guessed too high!"<<el;
                cout<<"----------------------------"<<el;
                cout<<"Try again"<<el;
                cout<<"-->";
            }
            //notify if user ans is lower than secret number
            if(user_ans<secretNumber){
                cout<<"Wrong! You guessed too low!"<<el;
                cout<<"---------------------------"<<el;
                cout<<"Try again"<<el;
                cout<<"-->";
            }
        }
    }while(user_ans!=secretNumber);

    //Final msg
    cout<<el;
    cout<<"You won!!"<<el;
    cout<<"The secret number was "<<secretNumber<<el;

    return 0;
}
