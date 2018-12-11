#include <fstream>
#include <iostream>
#include <string>
 
using namespace std;
void countChar(){
	ifstream fin;
	fin.open("test.txt");
	char pName;
	int count=0;
	while(!fin.eof()){
		fin.get(pName);
		count++;}
	if(count == 1){
		cout<<"Athens"<<endl;}
	else{
		count = count -1;
		cout<<count<<"characters"<<endl;}
	fin.close();

}
void countLine(){
	ifstream fin;
	fin.open("test.txt");
	char pName[99];
	int line=0;
	while(!fin.eof()){
		fin.getline(pName,99);
		line++;}
	if(line == 1){
		cout<<"Ohio University"<<endl;}
	else{
		line = line -1;
		cout<<line<<"Lines"<<endl;}
	fin.close();}


int main(){
	countLine();
	countChar();	
	return 0;
}




