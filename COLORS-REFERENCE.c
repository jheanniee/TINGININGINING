#include<stdio.h>
#include<windows.h>
void red (){
    printf("\033[0;31m");}
void boldred (){
    printf("\033[1;31m");}
void boldgreen (){
    printf("\033[1;32m");}
void boldblue (){
    printf("\033[1;34m");}
void blue (){
    printf("\033[0;34m");}
void boldmagenta (){
    printf("\033[1;35m");}
void magenta (){
    printf("\033[0;35m");}
void yellow(){
    printf("\033[0;33m");}
void boldyellow (){
    printf("\033[1;33m");}
void cyan (){
    printf("\033[0;36m");}
void boldcyan (){
    printf("\033[1;36m");}
void reset (){
    printf("\033[0m");}

int main(){
	system("color b");
	red();
	printf("THIS IS RED\n");
	boldred();
	printf("THIS IS BOLDRED\n");
	boldgreen();
	printf("THIS IS BOLDGREEN\n");
	magenta();
	printf("THIS IS MAGENTA\n");
	boldmagenta();
	printf("THIS IS BOLDMAGENTA\n");
	cyan();
	printf("THIS IS CYAN\n");
	boldcyan();
	printf("THIS IS BOLDCYAN\n");
	blue();
	printf("THIS IS BLUE\n");
	boldblue();
	printf("THIS IS BOLDBLUE\n");
	yellow();
	printf("THIS IS YELLOW\n");
	boldyellow();
	printf("THIS IS BOLDYELLOW\n");

}
