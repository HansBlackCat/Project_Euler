#include <stdio.h>


int main(int argc, char* argv[])
{
    //ASDFGH
    int counter;
    printf("Program Name is: %s", argv[0]);
    if(argc==1) printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if(argc>=2)
    {
        printf("\nNumber Of Arguments Passed: %d", argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for(counter=0;counter<argc;counter++) printf("\nargv[%d]: %s", counter,argv[counter]);

    }

    return 0;
}
