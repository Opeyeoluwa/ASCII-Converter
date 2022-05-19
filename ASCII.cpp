#include <iostream>
#include <string>

using namespace std;

void Ascii_to_text(int s){
    
};

void text_to_Ascii(string s){
    for (int i = 0; i < s.length(); i++)
    {
        cout << (int)s[i] << endl;
    }
};

int main(){
    int choice;
    int var;
    string var2;

    while(choice!=3){
        cout << "Enter the operation You would like to perform: Enter 1 to convert text/sentence to ASCII, 2 to convert ASCII to text, 3 to end program" << endl;
        cin >> choice;

        if(choice == 1){
            cout << "Enter the text/sentence you would like to convert: " << endl;
            getline(cin, var2);
            text_to_Ascii(var2);
        }

        else if(choice == 2){
            cout << "Enter the ASCII notation you would like to convert: " << endl;
            getline(cin, var);
            Ascii_to_text(var);
        }

        else{
            cout << "Invalid Choice, Please choose again" << endl;
        }
    };
    


    system("PAUSE");
    return 0;
}