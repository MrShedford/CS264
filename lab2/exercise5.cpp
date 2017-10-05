// Sean Comerford 15485892 
 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
 
using namespace std;
 
void print_string_array(char str[]){
 
    for(int i = 0; str[i] != '\0'; i++){
        cout << str[i];
    }
 
    cout << endl;
}

void print_string_ptr(char *str){
   
    while(*str != '\0'){
         cout << *str;
        ++str;
    }
 
    cout<<endl;
 
}
 
 
int main(){
    char arr[10]= {'S','E','A','N','E','\0'};
    char* pointer = arr;
    print_string_array(arr);
    print_string_ptr(pointer);
   
    return 0;
}
