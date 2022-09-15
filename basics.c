#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    
    //take in commandline input
    for(int i = 0; i < argc; i++) {
        printf("Arg: %i: %s\n", i, argv[i]);
    }
    
    
    int a = 5;
    int b = 6;
    double c = 6.0;
    char *str = "My string";
    
    //declare a pointer
    int *p;
    
    //assign the pointer to a memory address
    p = &a;
    
    printf("a = %i\nb = %i\nc = %g\nstr = %s\n", a, b, c, str); 
    
    //prints out the memory address
    printf("p = %p\n", p);
    
    //prints out the data the pointer is pointing at
    printf("p = %i\n", *p);
    
    //add one to the data p is pointing to
    *p = *p + 1;
    
    
    
    
    //using malloc (ALWAYS FREE IT AFTER!)
    int *d = malloc(sizeof(int));
    
    *d = 10;
    
    printf("d = %i\n", *d);
    
    //frees the memory
    free(d);
    
    //using calloc for arrays
    int *f = calloc(5,sizeof(int));
    f[0] = 27;
    
    printf("f = %i\n", f[0]);
    
    free(f);
    
    
}