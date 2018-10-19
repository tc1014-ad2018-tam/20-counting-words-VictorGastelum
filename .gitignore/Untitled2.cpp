/*
   This program counts the number of words of any given string.
  
   Author: Victor Manuel Gastelum Huitzil
   Date: 18/10/18
   e-mail: A01411985@itesm.mx
 */
#include <stdio.h>

int main() {
    char str[250];
    int k;
    
    printf("Give me a string: "); // I ask for the string
    fgets(str, sizeof(str), stdin); 
    
    // In this part I store the lenght of the string
    while(str[k] != '\n'){
    	k++;
	}
	
	// Here I display the lenght of the string
    printf("The size of your string is: %d", k);

return 0;
}
