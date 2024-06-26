#include <iostream>

using namespace std;
bool isSubStr(char* str2, char* str1);
bool helper(char* str2, char* str1);
int main()
 {
 	
    char str1[500];
    char str2[500];
	cout<<"Enter string 2"<<endl;
    cin.getline(str2,500);
    cout<<"Enter string 1 "<<endl;
    cin.getline(str1,500);
     
    if (isSubStr(str2, str1)) 
	{
        cout <<"This is a substring "<<endl;
    } else 
	{
        cout <<"This is not a substring  "<< endl;
    }
    
    return 0;
}

bool isSubStr(char* str2, char* str1)
 {

    if (*str2 == '\0') {
        return false;
    }
    if (*str1 == '\0') {
        return true;
    }
    if (*str2 == *str1) {
        return isSubStr(str2 + 1, str1 + 1);
    }
    return isSubStr(str2, str1 + 1);
}

