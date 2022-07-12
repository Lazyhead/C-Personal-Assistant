#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to greet the user according to time
void greetings(){
    
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Jir et and Have a nice day ahead"<<endl;
        string phrase = "Good Morning Jir et and Have a nice day ahead";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Jir et"<<endl;
        string phrase = "Good Afternoon Jir et";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Jir et"<<endl;
        string phrase = "Good Evening Jir et";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){

    time_t now = time(0);
    char *date = ctime(&now);
    cout<<"The date and time is "<<" "<<date<<endl;
}

int main()
{
    system("cls");

    cout<<"\t<###################################  PERSONAL ASSISSTANT ########################################"<<endl<<endl;

    string password; //to take password
    string command; // to take command from the user


    do
    {
        cout<<"******************************************************"<<endl;
        cout<<"| ENTER THE PASSWORD TO CONFIRM JIR ET|"<<endl;
        cout<<"******************************************************"<<endl<<endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM JIR ET";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO start_Info = {0};
        PROCESS_INFORMATION process_Info = {0};

        if(password=="huehuehue")
        {
            cout<<"\n<**************************************************************************************************>\n\n";
            greetings();
            do{
                cout<<"\n<**********************************************************************************************>\n\n";
                cout<<"How can i help you.."<<endl;

                string phrase = "How can i help you ";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your request ==> ";
                getline(cin,command);
                cout<<endl;
                cout<<"MY response ==> ";

                if(command=="hello" || command=="hi")
                {
                    cout<<"Hello Jir et....."<<endl;
                    string phrase = "Hello Jir et";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command=="what is the time")
                {

                    datetime();
                }


                else if(command=="who are you" || command=="who is speaking")
                {
                    cout<<"I'm a personal assistant!"<<endl;
                    string phrase = "I'm a personal assistant!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command=="open notepad")
                {
                    cout<<"opening notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &start_Info, &process_Info);
                }

            
                else if(command=="open google")
                {
                    cout<<"opening google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(command=="open youtube")
                {
                    cout<<"opening YouTube"<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(command=="open gfg website")
                {
                    cout<<"opening geeksforgeeks website"<<endl;
                    string phrase = "opening geeksforgeeks website";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.geeksforgeeks.org/");
                }

                else if(command=="close chrome browser")
                {
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                
                else if(command=="bye" || command=="exit")
                {
                    cout<<"Good Bye Jir et, see you soon!"<<endl;
                    string phrase = "Good Bye Jir et, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t<###################################  PERSONAL ASSISSTANT ########################################"<<endl<<endl;
                    cout << "**********************" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "**********************" << endl << endl;

                    string phrase = "Incorrect Password, please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}
