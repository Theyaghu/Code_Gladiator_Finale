#include <stdio.h>
#include <conio.h>
int main()
{
    printf("1.Smiley or happy face\n");
    printf("2.Laughing, big grin,laugh with glasses,or wide-eyed surprise\n");
    printf("3.Very happy\n");
    printf("4.Sad\n");
    printf("5.Crying\n");
    printf("6.Tears of happiness\n");
    printf("7.Great dismay\n");
    printf("8.Shock, yawn\n");
    printf("9.Kiss\n");
    printf("10.Wink, smirk\n");
    printf("11.Tongue sticking out\n");
    printf("12.Straight face no expression, indecision\n");
    printf("13.Cool, bored\n");
    printf("14.Sealed lips or wearing braces, tongue-tied\n");
    printf("15.Angel, saint, innocent\n");
    printf("16.EXIT\n");
    int opt;
    do
    {
        printf("\nEnter the emotion: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf(":)");
            break;
        case 2:
            printf(":D");
            break;
        case 3:
            printf(":'(");
            break;
        case 4:
            printf(":(");
            break;
        case 5:
            printf(":'(");
            break;
        case 6:
            printf(":')");
            break;
        case 7:
            printf("D:<");
            break;
        case 8:
            printf(":O");
            break;
        case 9:
            printf(":×");
            break;
        case 10:
            printf(";)");
            break;
        case 11:
            printf(":P");
            break;
        case 12:
            printf(":|");
            break;
        case 13:
            printf("|;‑)");
            break;
        case 14:
            printf(":#");
            break;
        case 15:
            printf("O:)");
            break;
        case 16:
            printf("THANK YOU");
            break;
        default:
            printf("Enter the Valid input....");
        }
        
    } while (opt!=16);
    getch();
    return 0;
}
/* Sorry we didn't understand the program properly what you told  */