/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char arr[24] = {'e', 'k', 'o', 'r', 'b', '_', 'g', 'n', 'i', 'e', 'b', '_', 'r', 'a', 'e', 'y', '_', 't', 's', 'a', 'l', '_', 'y', 'm' };
 
    for(int i=23; i>=0; i--){
        cout << arr[i];
    }
 

    return 0;
}