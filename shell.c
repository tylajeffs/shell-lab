#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUFFER_SIZE 3000
#define TOKENS_SIZE 50

int main(int argc, char **argv) {
    
    //arrays
    char buffer[BUFFER_SIZE];
    char *tokens[TOKENS_SIZE];
    
    //variables
    int num_tokens = 0;
    char *token_ptr;
    
   
   //Read in a line using fgets, don't forget to trim the new line at the end
   fgets(buffer, BUFFER_SIZE, stdin);
   
   printf("string is: %s\n", buffer);
   
   
   
   //get the first token & add it to the array of tokens
   char* piece = strtok(buffer, " ");
   tokens[0] = piece;
   num_tokens++;
   
   //get the rest of the tokens
   while(piece != NULL) {
       
       //get the token, add it to the array
       piece = strtok(NULL," ");
       tokens[num_tokens] = piece;
       num_tokens++;
       
   }
   
   //put a 0 (null) as the last token in the array
   tokens[num_tokens] = NULL;
   
   //for loop printing out tokens
   for(int i = 0; i < num_tokens; i++) {
       
       printf("Token #%i: %s\n",i, tokens[i]);
   }

    
    
    return 0;
    
}