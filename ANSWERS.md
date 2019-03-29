**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
Start - The beginning of the process when it is first created.

Ready - A Process that is waiting to have a processor allocated to them by the operating system.

Running - After assigned to a processor, the state can be set to running and will execute the instructions provided.

Waiting - A process can enter the waiting state if we need user input or another resource needs to execute first.

Exit - After the process is completed the OS can move it to a terminated state where it will wait to be removed from memory.



**2. What is a zombie process?**
A zombie process is the left over child process in the table that needs to be cleaned up by the parent.


**3. How does a zombie process get created? How does one get destroyed?**
A zombie process is when you call fork() and the parent process is replicated. Once the child is complete there is still a process in the table where it was stored. When the parent continues the parent will delete this zombie process from the table.


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

Faster performance by directly using the code on the target machine. The program was already written in native machine code.

Compiled code can hide the source code from the end user because you can deploy just a binary executable file.
