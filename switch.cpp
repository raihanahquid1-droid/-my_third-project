#include<iostream>
using namespace std;
int main(){
int choice;
//display menu options
cout<<"select your favoritt programming language:\n";
cout<<"1. c++\n";
cout<<"2. python\n";
cout<<"2. java\n";
cout<<"Enter your chioce (1-3): ";
cin>>choice;
//using switch statement to handle chices
switch (choice){
case 1:
cout<<"Great choice! c++ is powerful and fast.\n";
break;
case 2:
cout<<"Awesome! python is hreat for Al and data science.\n";
break;
case 3:
cout<<"Nice! Java is widely used for enterprise app.\n";
break;
default:
cout<<"Invalid choice! please select 1,2,or 3.\n";
break;
}
return 0;
}
