#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[]) {
  
	printf("Tamaño de memoria solicitado: %d \n", atoi(argv[1]));
	int mem= atoi(argv[1])*1e6;
    char *p = malloc(mem);
 	int tiempo= atoi(argv[2]);
	time_t seconds;
	seconds = time(NULL);
	//printf("El tiempo en segundos es: %ld \n", seconds);

	while((time(NULL)-seconds) < tiempo) {
		for(int i = 0; i < mem; i++){
		   *(p + i) = 250;
		}  
	}    
    return 0;
}
