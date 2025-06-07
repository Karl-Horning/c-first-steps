// prompt for a positive integer between, say, 1 and 8, inclusive.

// $ ./mario
// Height: 8
//        #  #
//       ##  ##
//      ###  ###
//     ####  ####
//    #####  #####
//   ######  ######
//  #######  #######
// ########  ########

// -1 (or other negative numbers)?
// 0?
// 1 through 8?
// 9 or other positive numbers?
// letters or words?
// no input at all, when you only hit Enter?

#include <stdio.h>

void createPyramid(int pyramidHeight) {
    int i;
    int paddingSpaces;
    int leftNumOfBlocks;
    int rightNumOfBlocks;

    for (i = 1; i <= pyramidHeight; i++)
    {
        // Loop to add the left padding (spaces)
        for (paddingSpaces = pyramidHeight - (i + 1); paddingSpaces >= 0; paddingSpaces--)
        {
            printf(" ");
        }

        // Loop to add the left blocks
        for (leftNumOfBlocks = 1; leftNumOfBlocks <= i; leftNumOfBlocks++)
        {
            printf("#");
        }

        // Add the padding between sides of the pyramid
        printf("  ");

        // Loop to add the right blocks
        for (rightNumOfBlocks = 1; rightNumOfBlocks <= i; rightNumOfBlocks++)
        {
            printf("#");
        }

        // Add a newline at the end
        printf("\n");
    }
}

int main() {
    // Create a variable to store the number we get from the user
    int maxHeight = 8;
    int pyramidHeight;

    while (pyramidHeight <= 0 || pyramidHeight > 8)
    {
        // Ask the user for a number
        printf("Height: "); 

        // Get and save the number the user types
        scanf("%i", &pyramidHeight);
    }

    // Use the function to create the pyramid
    createPyramid(pyramidHeight);
    
    return 0;
}