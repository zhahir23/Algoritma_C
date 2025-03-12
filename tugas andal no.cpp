#include <stdio.h>

int main() {
	
    for (int i = 1; i <= 30; i += 3) {
        printf("%d ", i);
    }
    
    printf("\n\n");
    
    for (int i = 1; i <= 15; i++) {
        printf("%d\n", i);
    }
    
      printf("\n\n");
      
    int count = 1; 
    for (int i = 1; i <= 15; i++) {
        printf("%2d ", i); 
        if (count % 5 == 0) {  
            printf("\n");
        }
        count++;
    }
  for (int i = 0; i < 15; i++) {  
        for (int j = 0; j < 15; j++) {            
            printf("%2d", i);         	             
            i++;                                   
        }
        printf("\n");  
    }

    return 0;
}
