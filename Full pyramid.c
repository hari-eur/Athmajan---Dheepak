#include <stdio.h>

int main() {
    int rows = 7, spaces, stars;
    
    for(int i=1; i<=rows; i++) {
       
        for(spaces=1; spaces<=rows-i; spaces++) {
            printf(" ");
        }
    
        for(stars=1; stars<=(2*i-1); stars++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}