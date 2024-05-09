#include <iostream>

int main()
{
    printf("Hello, World!\n");

    printf("1 - Append text symbols to the end \n"
           "2 - Start the new line \n"
           "3 - Use files to saving the information \n"
           "4 - Use files to loading the information \n"
           "5 - Print the current text to console \n"
           "6 - Insert the text by line and symbol index \n"
           "7 - Search \n");

    printf("Please, choose the command\n");
    int optionNumber;
    while (true) {
        scanf("%d",&optionNumber);

        switch (optionNumber) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                printf("The command is not implemented\n");
            return 0;
        }
    }
    return 0;
}
