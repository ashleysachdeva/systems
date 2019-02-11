#include <stdio.h>

int readline(int line[], int size);
int findmatch(int pattern[], int text[], int patternlen, int textlen);
void printmessage(int position, int text[], int patternlen, int textlen);
int main() {
    int text[40], pattern[40], *position;
    int textlen, patternlen;
    printf("Enter text: ");
    textlen = readline(text, 40);
    printf("Enter pattern: ");
    patternlen = readline(pattern, 40);
    position = findmatch(pattern, text, patternlen, textlen);
    printmessage(position, text, patternlen, textlen);
}
int readline(int line[], int size){
   int i = 0;
  
   for(i =0; i< size; i++){
		int m = getchar();
		if( m == '\n'){
			break;
		}
		if( m != -1 ){
		  line[i] = m;
		  size++;
		}
   }
	return size;
    
}
int findmatch(int text[], int pattern[], int patternlen, int textlen){
	int starts=1;
	int *p = &starts;
	int i =0;
	int j = 0;
    if(patternlen > textlen){
        *p = NULL;
	return starts;
    }
    while(i < textlen){	
	if(pattern[i] == text[j] || text[j] == 63){
	   textlen--;
	   patternlen--;
	   if(textlen < patternlen){	
	      *p = NULL;
	       return starts;
	    }
	    if(j == 0){
		*p = i+1;
	    }
	    j++;	
	    if(j == patternlen-40){
	       return starts;
	    }
	    i++;
		            
				  
	}
	else{
	   j = 0;
	   i++;
        }
     }
	*p = NULL;
	 return starts;
}
void printmessage(int position, int text[], int patternlen, int textlen){
	int remain = (position-1) + (patternlen-40);
	int i = remain;
	if(position == NULL){
	   printf("no match\n");
	}
	else{
	  printf("the char is at: %d \n", position);
	  printf("the remaining charaters are: ");
	  while( i < (textlen-40)){
		putchar(text[i]);
		i++;
	  }
	  printf("\n");
	   
	}
}
