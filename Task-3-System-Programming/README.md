Task 3: Simple Shell - System Programming

 Goal
Build a small system utility demonstrating file handling and process creation on Windows.

Description
This is a basic command-line shell written in C. 
It accepts commands from user, executes them using `_popen`, and logs every command with timestamp to `shell_log.txt`.

 Features
1. Command Execution: Runs Windows commands like `dir`, `type`, etc
2. Process Creation: Creates child process for each command
3. File I/O: Logs all commands + exit status to `shell_log.txt`
4. Error Handling: Shows error if command fails or file can't open
5. Exit Command: Type `exit` to close shell and stop logging

Compilation Instructions
gcc shell.c -o shell.exe
./shell.exe
