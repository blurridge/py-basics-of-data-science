/* Write a program that asks for the user's name via input() function. 
If the name is "Bond" make it print "Welcome on board 007." 
If the name is "Zach" make it print "Yo!"
Otherwise make it print "Good morning {NAME}". (Replace Name with user's name) */

#include <stdio.h>
#include <string.h>

int main() {

    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);


    return 0;
}