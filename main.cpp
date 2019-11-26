/*******************************
 * Gary Sung, Shawn Jacobsen   *
 * RJF 12:40 - SDP Project     *
 * *****************************/

// Preprocessor directives
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/*
#include <FEHIO.h>
#include <FEHUtility.h>
#include <FEHLCD.h>
#include <LCDColors.h>
*/

// gravity acceleration constant + colors(subject to change)
#define gravity 1
#define BLACK
#define SPRINGGREEN

class dino {
    private:
        int frame, x, y, velocity;
        bool onGround;
        bool jumping;
    public:
        dino(int _frame = 0, int _x = 0, int _y = 0, int _velocity = 0, bool _onGround = true, bool _jumping = false);
        void jump(int x, int y);
        void hit();
};

int main(void) {

    bool gameLoop = true;

    // Main Loop
    while (gameLoop) {
        //check collisions, check input, redraw, repeat
    }

    /* Default code from QT Creator project init
    float x,y;

    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );

    while( true )
    {
        if( LCD.Touch(&x,&y) )
        {
            LCD.WriteLine( "Hello World!" );
            Sleep( 100 );
        }
    }
    return 0;
    */
}

// Dino Constructor
dino::dino(int _frame, int _x, int _y, int _velocity, bool _onGround, bool _jumping){
    frame       = _frame;
    x           = _x;
    y           = _y;
    velocity    = _velocity;
    onGround    = _onGround;
    jumping     = _jumping;
}

void dino::dinodraw() {
	LCD.SetFontColor()
	LCD.DrawPixel();
}

// Jump function
void jump(int x, int y) {

}

// Dino collides with obstacle
void hit() {

}
