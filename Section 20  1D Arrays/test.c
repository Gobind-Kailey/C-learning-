#include <stdio.h>
#include "MacUILib.h"


// PREPROCESSOR DIRECTIVE CONSTANTS
// ================================
// For program-wide constants, define them here using #define.  Add as seen needed.

#define SIZE 21

// GLOBAL VARIABLES
// int a, b, result;   


// ================================
int exitFlag;   // Program Exiting Flag, used to determine whether to leave the program loop and shutdown the program

// Add more variables here as needed

int start_position; 
char displayString[SIZE] = "                    "; 
char cmd; 
int i;
int iteration;   
char symbol;
int right_left;




// FUNCTION PROTOTYPES
// ================================
// Declare function prototypes here, so that we can organize the function implementation after the main function for code readability.

// These are the six required program loop function to build our "McMaster Terminal Program Engine"
void Initialize(void);
void GetInput(void);
void RunLogic(void);
void DrawScreen(void);
void LoopDelay(void);
void CleanUp(void);

// Add more function prototypes here as needed





// MAIN PROGRAM
// ===============================
// This is the "Program Loop" as described in the PPA1 flow chart.  Read Lab Documents to visualize how a persisting program works under the hood.
// Typically, when you use some sort of "Software Design Engine", this part is scaffolded - you will only be responsible of scripting the functions.
//
// In future PPA's and Projects, you are expected to be able to set up a program loop like this from scratch whenever a persisting program is required.
int main(void)
{

    // Start-Up
    Initialize();


    // Program Loop
    MacUILib_clearScreen();

    while(!exitFlag)  
    {
        GetInput();

        RunLogic();

        DrawScreen();

        LoopDelay();
    }

    // Tear-Down
    CleanUp();

    return 0;

}





// INITIALIZATION ROUTINE
// ===============================
// This routine is run only once before the start of the program loop - aka Start-Up Routine.
// You would typically do the following in this function:
//  1. Initialize global variables
//  2. Allocated memories for dynamic variables (we will talk about this after midterm)
//  3. Call the relevant initialization functions to enable certain library supports.

void Initialize(void)
{   
    // [TODO]: Call the MacUI Library Initialization Function 
    MacUILib_init();


    // [TODO]: Initialize variables
    exitFlag = 0;  // 0 - do not exit, non-zero - exit the program
    start_position = 0; // starts at the begining of page. 
    iteration = 2; // Starts at two because we dont want to change >>
    right_left = 0; // By default this will go from right to left. 

    symbol = '<'; // This is so i can use it later in the program/ easier to access. 

    // initializing the begining of the string. 
    displayString[0] = '>';
    displayString[1] = '>'; 
    displayString[2] = symbol; 
    displayString[3] = symbol; 

    
    
    int MacUILib_hasChar(void); // This will return 1 whenever it see a key is pressed.
    char MacUILib_getChar(void); 

    // [TODO]: Add more variables initializations here as seen needed.
    // a = 3, b= 5 , result = 0;   




    // You can add more start-up operations here
}






// INPUT COLLECTION ROUTINE - "Observe"
// ===============================
// In our program loop setup, we always try to first determine whether there is any incoming input.
// This routine can either be "blocking" (synchronous input) or "non-blocking" (asynchronous input)
//  Synchronous Input - The program will halt at the function call for collecting input.  It will only progress after receiving an input.
//                      This is why we call it "blocking", because synchronous input collection mode BLOCKS program progression.
//                      We use this mode of input collection when the subsequent program execution behaviour depends on the user input:
//                      Real-Life Example:  Vending Machine won't know what to vend until you press a key to make a selection.  
//                                          It won't automatically joggle drinks in front of you to confuse you before you made your choice. (LOL)
//                                          Therefore, Vending Machine operates on Synchronous Input mode - one action per command (conceptually)
//  Asynchronous Input - The program will move on to the next execution sequence if it sees no input to process.  It will never stop to wait for input.
//                       This is why we call it "non-blocking", because asynchronous input collection mode NEVER BLOCKS program progresion.
//                       We use this mode of input collection when the program execution doesn't necessarily depend on the input; instead, the input
//                       only changes the course of program progression.
//                       Real-Life Example:  Youtube Music will continue playing musics even if you left it unattended.
//                                           It will never stop playing music every 10 seconds to wait for you to tell it to continue playing. (Won't that be annoying?)
//                                           Therefore, Youtube Music operates on Asynchronous Input mode - execution continues without commands; commands only change program behaviour.

// In our project and preparation applications, you should use Asynchronous Mode to ensure the program/game runs smoothly even without any input.
// You should **temporarily** switch to Synchronous Mode only if you need to slow down the program for debugging and behaviour examination purposes.

void GetInput(void)
{

    // [TODO]: The most basic asynchronous input collection algorithm is:
    //   1. Check whether there is any unprocessed input character - read the lab manual and see which MacUILib function you need to use.
    //   2. If there is an input character waiting to be processed, get the character and store it as the "command"
    //      - again, read the lab manual to find out which MacUILib function you need to use.
    //   3. If there is no input character to be processed, just don't do anything and move on.
    
    // this if statement will run if there has been an input.
    if (MacUILib_hasChar() != 0){
        // cmd will hold the input of the users key presses. 
        cmd = MacUILib_getChar();
        // printf("%c", cmd);
    }

    




    // In future project preparation activities and the project itself, you may need to add more input processing logics here.
    // 
    // The guideline for adding more code is that:
    //  - If the raw input itself maps to a more specific command depending on the program logic states, you may have to 
    //    post-process the command here before sending it off to the main program logic.
    //  - We will talk about these later.

}




// MAIN LOGIC ROUTINE - "Think"
// ===============================
// The second action in our program loop is to execute the main program logic.  
// In this routine, we should determine the outcome of the logic using a) current status / state / behaviour of the program, and b) the most recent input
// The outcome of the logic then will be drawn on the screen.
//
// In later activities, we will delve deeper into this design philosophy later in the course - Finite State Machine design principle.
// 
// Let's now think about how we can complete the marquee display logic...

void RunLogic(void)
{


    // Our most basic marquee display logic for rotating a string LEFTWARD:
    //  Given an N-character string
    //  - In iteration 0, we will print the string from index 0, up to index N-1 (and heed the NULL string termination character)
    //  - In iteration 1, we will print the string from index 1, up to index N-1, THEN WRAP AROUND back to index 0 (still total of N characters printed, NULL character skipped)
    //  - In iteration 2, we will print the string from index 2, up to index N-1, then WRAP AROUND back to index 0, then stop at index 1.  (total N characters)
    //  - In iteration 3, we will print the string from index 3, up to index N-1, WRAP AROUND back to index 0, then stop at index 2.
    //  ......
    //  The name of the game is to play with the array index - track the position where you start printing, always print N characters, and make sure any index access beyond N-1
    //  ** WRAPS AROUND ** back to index 0.
    //
    //  You should recall from our lecture how to deploy index wraparound calculation.
    //
    //  You should also think about how to rotate the string RIGHTWARD.  It has something to do with how you update the printing start position.
    
    
    // Pseudocode for Marquee Display with Dynamically Changing String:
    // 1. Check if there was a valid input command collected
    //      1.1 if YES, perform the following
    //           1.1.a  If input command is 'ESC' (or your choice of ASCII character)
    //                  Set exitFlag to true.  Then, in the next program loop iteration, the loop will break, leading to CleanUp() routine and program shutdown.
    //           1.1.b  (Above and Beyond Feature) If input command is 'SHIFT' (or your choice of ASCII character)
    //                  Toggle the marquee rotation direction.  Think about how!
    //           1.1.c  Otherwise, the input command is just a plain character that needs to be added to the marquee display string.
    //                  Update the string contents.
    // 2. Then, update the printing start position (rightward or leftward), so that the Draw routine will be able to print the string from the correct character
    // DONE

    // [TODO]: Implement the above pseudocode logic

// Checks if the right to left is an even value, and if it is, it will create the flow from right to left. 
    if (right_left%2 == 0){
        start_position ++; 
    }
    // If its odd, it will create the flow to be from left to right. 
    else{
        start_position --;
    }
    // If the starting postion exceeds the amount it should move, it will be reset to 0, also known as wraping around. 
    if (start_position >= 19){
        start_position = 0;
    }
    // In the case we are moring from left to right, if the value of S.P is negaitive it will reset to the end of the string.
    if(start_position < 0){
        start_position = SIZE - 1;
    }

    if (cmd == '\033'){ // \033 represents the Esc key. 
            exitFlag = 1; // when this is not 0, it will exit the code in the next iteration. 
        }
    
    // If tab is pressed, it will switch the direction of the flow. 
    else if (cmd == 9){ // 9 is tab
        // This is incrementing so that we can keep a count of it moving towards the right(odd) or left(even)
        right_left++;
        cmd = 0; // reset to 0, so that the same input doesnt keep looping.
    }

    // If the user provides a valid input between ASCII Decimal Code range 32 to 126.
    else if(cmd >= 32 && cmd <= 126 && iteration < SIZE -2){
        displayString[iteration] = cmd; // changing the black space elements to the respective input. 
        displayString[iteration + 1] = symbol; // This is so the next element will always be '<'
        displayString[iteration + 2] = symbol;
        cmd =0; // This is so we can reset the input back to 0, and the same one doesnt repeat again. 
        iteration += 1;  // So we can move on to the next blank. 
    }



    // DO NOT print anything out.  This routine is the "thinking" part, not the "acting" part.
    // You should only update all the key program parameters here.
    
}







// DRAW ROUTINE - "Act"
// ===============================
// This routine creates the output of the program for a given iteration, using the resultant parameters from the RunLogic() routine.
// In the completed program, this should be the only routine calling the MACUILib_printf().
// If we apply the animation technique discussed in the lab document, we can then create a smooth marquee display animation on the terminal.
//
// Animation Basics (Review):
//  In every iteration
//      - Clear the screen (remove the printed contents from the previous iteration, a.k.a. previous frame)
//      - Use the calculated parameters from RunLogic(), draw line-by-line on the terminal screen to build the desired display contents for this iteration
//        (a.k.a. draw the current frame)
//
//  If we repeat the actions above at a suitable rate, the contents on the screen will look like it's moving smoothly on the screen,
//  as if we are flipping through pages of pictures.
//  - If too slow, the animation will look choppy (frame rate too low)
//  - If too fast, you won't see the animation at all (frame rate too high)

void DrawScreen(void)
{
    

    // MacUILib_printf("%d", MacUILib_getChar());
    
    // Pesudocode
    // 1. Clear the screen
    // 2. Draw the new frame by printing new contents on the screen
    //      - For static contents, just print them as is
    //      - For dynamic contents (namely, the marquee display portion), make sure you print the shifted string using the most updated printing start position
    //        and HEED THE WRAPAROUND.
    
    // [TODO]: Complete the implementation of the above pseudocode

    MacUILib_clearScreen();
    MacUILib_printf("McMaster Marquee Display\n");
    MacUILib_printf("====================\n");
    
    // We are looping through each of the element positions to create a marquee display illusion 
    for (i = 0; i < SIZE ; i++){
            // We preform the below equation because it keeps us within the range by using %, even if the sum of i + S.P itself is out of range. 
            MacUILib_printf("%c", displayString[(i + start_position)%SIZE]);

        }
        MacUILib_printf("\n====================");

}


// DELAY ROUTINE - "Wait"
// ===============================
// Sometimes referred to as the "stupidifier", this routine is only intended to slow down the program loop so that
// 1. The animation is not too fast to be appreciated
// 2. The main logic is not executed too often, such that the game won't act too ahead of the player's reaction.  Otherwise, the game will be impossible to be beaten.

void LoopDelay(void)
{
    // [TODO]: For now, just call the MacUILib_Delay routine here, and introduce sufficient delay constant so that the marquee display runs at a comfortable speed.
    MacUILib_Delay(100000); // =  100000 microsseconds = 0.1s 

    // In future activities, we may delve into other delaying methods.
}





// TEAR-DOWN ROUTINE
// ===============================
// This routine is run only once at the end of the program right before shutdown, intended to clean up all the resources used by the program.
// This routine is VERY IMPORTANT to prevent memory leak.  We will cover this after the midterm.

void CleanUp(void)
{
    // For now, you only need to call MacUILib_uninit() routine to shut down the MacUILib module.
    MacUILib_uninit();

    // In future activities, you will have to add the memory deallocation routines here to ensure no memory leakage.
}

