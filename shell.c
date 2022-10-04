#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 3000
#define TOKENS_SIZE 50

//functions
void echoFunc();

//globals
char buffer[BUFFER_SIZE];
char *tokens[TOKENS_SIZE];
int num_tokens = 0;
char *token_ptr;


//main function
int main(int argc, char **argv) {

    //if first token is ls, call ls function and then loop back through and ask for more input
    //if the command doesn't match, create a new process to run the program (g++ test.cpp) (./a.out hello class how are you)
    
    
    //infinite loop to ask user for input - only ends if they type in "exit"
    int ex = 0;
    
    while(ex == 0) {
        
        //Read in a line using fgets, don't forget to trim the new line at the end
        fgets(buffer, BUFFER_SIZE, stdin); //strip off newline
       
        buffer[strcspn(buffer, "\n")] = 0;
       
        //get the first token & add it to the array of tokens
        char* piece = strtok(buffer, " ");
        tokens[0] = piece;
        num_tokens++;
       
        //get the rest of the tokens
        while(piece != NULL) {
           
            //get the token, add it to the array
            piece = strtok(NULL," ");
           
            if(piece != NULL) {
                tokens[num_tokens] = piece;
                num_tokens++;
            }
           
        }
       
        //put a 0 (null) as the last token in the array
        tokens[num_tokens] = NULL;
            
            
        
        

        
        //check the user's inputs and do the correct process
        if((strcmp(tokens[0],"exit")) == 0) {
            
            //set ex to true so the infinite loop will break
            printf("...exiting while loop...\n");
            ex = 1;
            
        } else if(strcmp(tokens[0],"echo") == 0) {
            
            //call the echo function
            echoFunc();
            
        }
        
        
    }
    
    
    
    return 0;
    
}


//method to run the echo function
//prints out the remaining arguments
void echoFunc() {
    
    //print out the remaining arguments
   for(int i = 0; i < num_tokens; i++) {
       
       printf("Token #%i: %s\n",i, tokens[i]);
   }

}

