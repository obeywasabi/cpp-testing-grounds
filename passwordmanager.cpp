#include <iostream>

using namespace std;

string menu_Prompts[] = {
"What would you like to do? \n",
"\n(1) Create new password",
"\n(2) Store password to vault",
"\n(3) Access password Vault",
"\n(4) Quit"
};

string choice_Prompts[] = {
"Press 1 to return to main menu, or press 2 and press Enter to shuffle generated password > ",
"Press 1 to shuffle again, or press 2 and press Enter to return to main menu > "
};

string newpass_Prompts[] = {
"USAGE: \nFill in these quick questions to generate a new password, realistically you can input anything "
"into the lines, and the generator will still generate and shuffle all of your inputs.\n",
"What is your name? > ",
"Type a memorable number > "
};

/* MAIN Variables */

/* bool exist = ""    DONT FORGET ABOUT ME!!! */
bool run = false;
bool main_Menu = false;
bool newpassword = false;
bool did_shuffle = false;
bool vault_Main = false;
int menu_State = 0;
string menu_Choice = "";

/* USER Variables */
string name = "";
string fav_number = "";
string color = "";
string phrase = "";


int main()
{

cout << "Password Manager V.0.1 (NON)-GUI BY ALEX A" << endl;

cout << menu_Prompts[0];
cout << menu_Prompts[1];
cout << menu_Prompts[2];
cout << menu_Prompts[3];
cout << menu_Prompts[4];



return 0;
}

