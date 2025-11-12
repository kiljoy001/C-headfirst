/* Chapter 1, Cards*/
# include <stdio.h>
# include <stdlib.h>

int main()
{
    char card_name[3];
    int count;
    puts("Enter the card name: ");
    scanf("%2s", card_name);
    int value = 0;
    while(card_name[0] != 'X')
    {
        switch (card_name[0]) 
        {
            case 'K':
                value = 10;
                break;
            case 'Q':
                value = 10;
                break;
            case 'J':
                value = 10;
                break;
            case 'A':
                value = 11;
                break;
            default:
                value = atoi(card_name);
                if((value < 1) || (value > 10))
                puts("That's a bad card!");
                continue;   
        }
        if ((value > 2) && (value < 7))
        {
            count++;
            puts("Count has gone up!");
        }
        else if (value == 10)
        {
            count--;
            puts("Count has decreased!");
        }
        printf("The current count is: %i\n", count);

    }
    return 0;
}
    
    