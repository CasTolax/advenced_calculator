HOW TO COMPİLE?

Now, we need C source code and the GCC compiler to compile. I’ve included the links below; you can download them from there. 
The download process may vary depending on your operating system.

This is where the real problems might start:
Due to the `math.h` library, the linker can’t compile properly and returns an error message (kernel dumped error) and sets the exit status to 1. 
To avoid this issue, I’m hoping that adding a `task.json` file will help the linker compile more smoothly and correctly.

Compile commands = gcc calc_main.c -o calc_main -lm && ./calc_main

gcc install = https://gcc.gnu.org/install/

