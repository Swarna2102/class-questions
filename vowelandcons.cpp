#include<iostream>
using namespace std;
int main(){
	char string[80];
	int count1=0;
	int count2=0;
	cout<<"enter a string:";
	gets(string);
	for(int i=0;string[i]!='\0';i++){
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'){
			count1++;
		}
		else{
			count2++;
		}
		
	}
	cout<<"the number of vowels is :"<<count1<<endl;
	cout<<"the number of consonants is : "<<count2<<endl;
}
