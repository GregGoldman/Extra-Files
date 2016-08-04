#include "mex.h"

/*
 
 TODO: Rename to ekeyboard.c so that we can access this code via ekeyboard
 
//Compile via:
mex ekeyboard.c
 */

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray*prhs[])
{
    
    //TODO: Run a mexcallmatlab line which calls a helper function => ekeyboard_helper (place in its own .m file)
    //that initializes and runs the timer
    //http://www.mathworks.com/help/matlab/apiref/mexcallmatlab.html
    
    //This works, unlike evalin('caller','keyboard') in a .m file
    mexEvalString("keyboard");
    
}