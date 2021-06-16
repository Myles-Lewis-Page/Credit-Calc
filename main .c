#include <stdio.h>
#include <stdlib.h>

/* Myles Page   
CS 2060   
Homework 1    
9/6/2019   
Due 9/13/2019*/

int main(int argc, char *argv[]) {	
    //This chunk iniailizes all variables
    char name[20];
    int class;
    int credits;
    //This askes your name and scans your input
    printf("Hello Please print your name\n");
    scanf("%s", name);
    //This askes how many classes you are in 
    printf("Hello %s. How many classes are you taking?\n",name );
    scanf("%d", &class);
    //Each class is 3 credits so it multiplies classes by 3
    credits = class*3;
    //This chunk chcks how many creits you have and what type of student you are
    if(credits <= 0){
        //Zero credits or less
        printf("%s You are not in any classes", name);
        
    }
    else if(credits <= 3){
        //One to three credits
        printf("%s Your progress is very slow with only %d credits", name , credits);
        
    } 
    else if(credits < 6){
        //Four to Five credits
        printf("%s You are a slow part time student with only %d credits", name, credits);
        
    }
    else if(credits < 9){
        //Six to Eight credits 
        printf("%s You are a fast part time student with %d credits", name , credits);
        
    }
    else if(credits <= 15){
        //Nine to Fifteen credits
        printf("%s You are a full time student with %d credits", name , credits);
        
    }
    else{
        //More than Fifteen credits
        printf("%s This class load is improbable", name);
        
    }
    return 0;
}

