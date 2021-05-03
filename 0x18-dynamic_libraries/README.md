# 0x18. C - Dynamic libraries

Throghout the phase of development, programs tend to grow larger and larger.This may have a cost implication on the time it takes to compile and link these files. 
Faced with this issues, it is then imperative to find ways to mitigate the problem by breaking down the source code into small units of related files. And that's where libraries come in. 

### C Build process?
Before we plunge into the crux of the matter, let's first see how C applications are built. By building, we mean the process of converting high level human readable code into machine code, 0's and 1's. The process is extensive and involves many tools, but the most distint steps include:
* Preprocessing stage where preprocessor directives are evaluated, I will explain this further in the following section
* Compilation of the source code into an object code
* Linking of all object files together into a single object file
* 
*  **Preproce
A library is a file that contains several object files(containing the output of a compiler) that can be used as a single entity during linking phase. 

** To be continued shortly... **