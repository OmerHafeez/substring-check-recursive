#include <iostream>

using namespace std;
bool isSubStr(char* str1, char* str2);
bool helper(char* str1, char* str2);
int main()
 {
    char str1[100];
    char str2[100];
    cout<<"Enter string 1"<<endl;
    cin.getline(str1,100);
    cout<<"Enter string 2 "<<endl;
    cin.getline(str2,100);
    
    if (isSubStr(str1, str2)) 
	{
        cout <<"This is a substring "<<endl;
    } else 
	{
        cout <<"This is not a substring  "<< endl;
    }
    
    return 0;
}

bool isSubStr(char* str1, char* str2)
 {

    if (*str1 == '\0') {
        return true;
    }
    if (*str2 == '\0') {
        return false;
    }
    if (*str1 == *str2) {
        return isSubStr(str1 + 1, str2 + 1);
    }
    return isSubStr(str1, str2 + 1);
}

