#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <string.h>

//program to counts the number of words in the text entered by the user
//this program functions by counting the spaces in a string and by splitting each character in a string

using namespace std;

int main() {
	//here we define the needed variables for the program
 int menu = -1, input;
 string text ="";
 char quitInput;
 cout << "Enter the text which you want to count the chars or words of" <<endl;
 getline(cin, text);
 char arr[text.length() + 1]; 
 strcpy(arr, text.c_str()); 
 int textLength = (sizeof(arr) / sizeof(char)) - 1, wordCount = 0;
 	//a while loop is used so the user will return to the menu
 while(menu == -1) {
 	//insert number to choose between option of using the program or quit
 	
 	cout << "Type 1 to use the word counter program, 2 to use the char counter program, and 3 to exit the program" <<endl;
 	cin >> input;

 		//here we use conditionals so the program will react to the user's input
	  
	  if(input == 1) {
	  
		//this is the algorithm I used to count the word
		for(int i = 0; i < textLength; i++) {
			if(arr[i] == ' ') {
			    if(i == (textLength - 1)) {
				    break;
			    }
			    else if (i < (textLength - 1) && arr[i+1] != ' ') {
			        wordCount++;
			    }
			    else continue;
			}
			else continue;
		}
		cout <<"This text have a word count of " <<wordCount+1 <<endl;
		wordCount = 0;
	}
	 
	 else if (input == 2) {
	 	//this is the algorithm I used to count the chars
		cout << "This text have a char count of " << (sizeof(arr) / sizeof(char)) - 1 <<endl;
		continue;
	}
	 	
	 else if (input == 3) {
	 
	 	//the algorithm for quit from program option;
	 	cout << "are you sure you want to quit(Y/N)?" << endl;
	 	cin >> quitInput;
	 	quitInput = toupper(quitInput);
	 	if(quitInput == 'Y') {
	 		menu == 0;
	 		break;
		 }
		else if(quitInput == 'N')
	 		continue;
	    else {
	    //an else is put here to prevent error from some input
	 	cout << "Invalid input" <<endl;
	 	break;
	 }
}
		//an else is put here to prevent error from some input
	 else  {
	 	cout << "Invalid Input" <<endl;
	 	break;
	 }
}
 	

    return 0;
}


