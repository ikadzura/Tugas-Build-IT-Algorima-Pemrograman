#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  
    
    int nilai[N];
    
 
    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }
    
    
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < N-i-1; j++) {
            if(nilai[j] > nilai[j+1]) {
     
                int temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
    }
    

    for(int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }
    
    return 0;
}