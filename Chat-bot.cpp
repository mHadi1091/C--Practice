// upgrade required in the code > functions 
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
void chatEnd(string name);
void numG();
void exitG();
void mainG();
int main(){
  //introduction from user
    string name;
     cout<<"hi user plzz introduce yourself!!"<<endl;
      cout<<"lets start with ur name -->:";
        cin>>name;
       cout<<"hi "<<name<<endl;
    // ask for more info
     cout<<"well "<<name<<" tell me more about yourself"<<endl;
      cout<<"lets start with your age"<<endl;
    int age;
     cout<<"tell me how old are you "<<name<<" :";
     cin>>age;
    if (age < 11){
        cout<<"ohh so your a kid"<<endl;
    }
    else if (age < 19){
      cout<<"so your a teen"<<endl;
    } else 
       cout<<"ohh so your an adult"<<endl;
    // ask for nationality
    string national;
     cout<<"well "<<name<<" where u belong from (country) :";
      cin>>national;
        cout<<"good to hear about you indeed "<<national<<" is a great place.\n";
      //ask the permission to say something in their native language
      if (national == "pakistan"){
      int lang;
      cout<<"what is ur native language"<<endl;
      cout<<"1.(urdu)"<<endl;
      cout<<"2.(punjabi)"<<endl;
      cout<<"3.(phusto)"<<endl;
      cout<<"4.(sindhi)"<<endl;
      cout<<"let me know ur language I wannan say hi"<<endl;
      cin>>lang;
      switch (lang){
          case 1: cout<<"آپ کیسے ہو (urdu)"<<endl;
          break;
          case 2: cout<<"تُسی کِدّاں ہو? (punjabi)"<<endl;
          break;
          case 3: cout<<"ستاسو څه یاست؟ (phusto)" <<endl;
          break;
          case 4: cout<<"توهان ڪيئن آهيو؟ (sindhi)"<<endl;
          break;
          default: cout<<"I dont know the language!!"<<endl;
          break;
      }
        }
      char choice;
        cout << "Do you want to play a game ??  \n y/n  \n";
         cin >> choice; 
       if (choice == 'y' || choice == 'Y'){
         mainG();        
         cout<<" thanks for ur time " << name <<" see u next time :)";
    } else if (choice == 'n' || choice == 'N'){  
      chatEnd(name);
    }
        
    return 0;
} 
void mainG(){
    
    cout<<"number guessing game"<<endl;

    int options;
    cout<<"press '1' to play !!!"<<endl;
    cout<<"press '2' for exit !!"<<endl;
    cin >>options;
    switch (options){
        case 1: numG();
        break;
        case 2: exitG();
        break;
    }  
}
        

void numG()
{
    int number = 5;
    int guess ;
    int guesschance=0;


    while (number != guess){

        cout<<" Guess the number from 1 to 10 "<<endl;
        cin>>guess;

        if (guess < number)
        {
            cout<<" The number is too low."<<endl;
        }
        else if (guess > number)
        {
            cout<<" The number is too high."<<endl;
        }
        else
        {
            cout<<" You are correct! Congratulations!"<<endl;
        }

        guesschance++;
    }

    //cout<<" you made "<<guesschance<<" Attemps!"<<endl;
}
  //  }

void exitG(){
    cout<< "you have exited the game";
}

void chatEnd(string name){
    cout<<"good to know u " << name << endl;
 cout<<" see u next time !! ";
    
}

