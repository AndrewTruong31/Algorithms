#include "usefulFncs.h"

//Counts the number of integers in a data file
int countIntsFromFile(FILE *fp){
    int pos = ftell(fp); //grabs the current read location in the file to be reset later
    fseek(fp, 0, SEEK_SET);

    int buffer = 1024; //determines the size of the readsize of each line
    char *line = calloc(buffer, sizeof(char));

    int validNum = 1;
    int num = 0;
    while(fgets(line, buffer, fp) != NULL){
        int len = strlen(line) - 2; // to account for the \n and the \0 that is added by fgets
        for(int i = 0; i < len; i ++){ //iterates through the line
            if(isdigit(line[i])){
                int j;
                for(j = i+1; j < len; j ++){
                    if(line[j] == ' ' || line[j] == '\n' || line[j] == '\0'){
                        break;
                    }

                    if(!isdigit(line[j])){
                        validNum = 0;
                    }

                } //end of j loop

                if(validNum == 1){
                    num++;
                }else{
                    validNum = 1;
                }

                i = j; //moves the main loop onto the next word
            }
        } //end of i loop
    }

    free(line);
    fseek(fp, pos, SEEK_SET);

    return num;
}

//Reads integers from the file and allocates them to an array
int *getIntFromFile(FILE *fp, int num){
   
    char* token;
    int buffer = 255;
    char delimit[10] = " \t\r\n\v\f"; //whitespace characters

    char *str = calloc(buffer, sizeof(char));
    int *arr = calloc(num, sizeof(int));
    int iter = 0;

    while(fgets(str, buffer, fp) != NULL){ //gets the lines to be tokenized 
        token = strtok(str, delimit);
        while(token != NULL){
            if(isNumber(token))
                arr[iter++] = atoi(token); //adds the tokenized values to the array
            
            token = strtok(NULL, delimit);
        }
    }

    free(str);

    return arr;
}

//iterates through a string and checks if it would be a valid number
int isNumber(char *in){ 
    int len = strlen(in);
    for(int i = 0; i < len; i ++){
        if(!isdigit(in[i]))
            return 0;
    }

    return 1;
}

void printArray(int *arr, int num){
    for(int i = 0; i < num; i ++){ //Prints array
        printf("%d ", arr[i]);
    }
}
