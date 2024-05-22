#include <iostream>

void One();
void Two();
void Three();
void Four();
void Five();
void Six();
void Seven();

FILE *techFile;

int main()
{
    printf("Hello, World!\n");

    techFile = fopen("file.txt", "w");
    fclose(techFile);

    printf("1 - Append text symbols to the end \n"
           "2 - Start the new line \n"
           "3 - Use files to saving the information \n"
           "4 - Use files to loading the information \n"
           "5 - Print the current text to console \n"
           "6 - Insert the text by line and symbol index \n"
           "7 - Search \n"
           "8 - exit \n");


    int optionNumber;
    while (true) {
        printf("Please, choose the command\n");
        scanf("%d",&optionNumber);

        switch (optionNumber) {
            case 1:
                One();
                break;
            case 2:
                Two();
                break;
            case 3:
                Three();
                break;
            case 4:
                Four();
                break;
            case 5:
                Five();
                break;
            case 6:
                Six();
                break;
            case 7:
                Seven();
                break;
            case 8:
                return 0;
            default:
                printf("The command is not implemented\n");
        }
    }
    return 0;
}


void One() {
    printf("Enter text to append: \n");
    techFile = fopen("file.txt", "a");
    char userInput;
    getchar();
    while(true) {
        userInput = getchar();
        if (userInput == '\n') {
            break;
        }
        fprintf(techFile, "%c", userInput);
    }
    fclose(techFile);
}

void Two() {
    printf("New line is started \n");
    techFile = fopen("file.txt", "a");
    fprintf(techFile, "\n");
    fclose(techFile);
}

void Three() {
    printf("Enter the file name for saving: \n");

}

void Four() {
    printf("Enter the file name for loading: \n");

}

void Five() {
    printf("Hello\n");
}

void Six() {
    printf("Choose line and index to insert text: \n");
}

void Seven() {
    printf("Enter the text to search: \n");
}
