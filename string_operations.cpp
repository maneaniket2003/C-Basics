#include<iostream>
#include<cstring>
using namespace std;
int main() {
	
/*	// 1.strlen
	char s1[15];
	cout<<"Enter your name : "<<endl;
	cin.getline(s1, 50);
	cout<<"Length of your name is "<<strlen(s1)<<endl; */
	
	
/*	// 2.strcat
	char s2[15] = "Aniket ";
	char s3[15] = "Mane";
	strcat(s2, s3);            // strcat(destination, source)
	//strncat(s2, s3, 3);     // to cancatenate string with desired length
	cout<<s2; */
	
/*	// 3.strcpy
	char s4[15] = "Aniket";
	char s5[15] = "";
	strcpy(s5, s4);             // strcpy(destination, source)
	//strncpy(s5, s4, 5);      // to copy string with desired length
	cout<<s5; */
	
/*	// 4.strstr : to check whether substring is present in main string or not
   //    strchr : to check whether character is present in main string or not 
	char s6[15] = "Programming";
	char s7[15] = "gram";
	if(strstr(s6, s7) != NULL) {
		cout<<strstr(s6, s7);
	} else {
		cout<<"Not found";
	}
    
    // cout<<strchr(s6, 'r');   
	// cout<<strrchr(s6, 'r');   // checks the character from the rear or right side */
	
	
/*	// 5. strcmp : compare two strings alphabetically 
	            // and in case sensitivity it compares Ascii value of strings
	char s8[15] = "Hello";
	char s9[15] = "Hello";
	cout<<strcmp(s8, s9); */
	
	
/*	// 6. strtol : string to long int
   //     strtof : string to float
   char s10[15] = "45";
   char s11[15] = "45.45";
   long int x = strtol(s10, NULL, 10);
   float y = strtof(s11, NULL);
   cout<<x<<endl<<y; */
   
/*   // 7.strtok
   char s[100] = "x=10;y=15;";
   char *token = strtok(s, "=;");
   while(token != NULL) {
   	cout<<token<<endl;
   	token = strtok(NULL, "=;");
   } */
}
