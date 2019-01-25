#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	int countLines = 0;
	int totalChars = 0;
	int totalWords = 0;
	int totalLines = 0;
	double avgLengthWord = 0;
	printf("please enter any lines of text, use an empty line to stop.\n");

	while(1){
		int x = getchar();
		if(x < 0){
		   break;
		}
		char c = (char) x;
		if(c == '\n' && countLines == 0){
		  break;
		}
		totalChars ++;
		if(c == '\n'){
			totalLines ++;
			countLines = 0;
		}
		if( isspace(c) ){
			totalWords ++;
		}
		else{
		     countLines ++;
		}


	}

	avgLengthWord = (totalChars - totalWords) / (double) totalWords;
	printf("Your text has %d lines, %d characrers, %d words, and average word length of %f. \n", totalLines, totalChars, totalWords, avgLengthWord);


}
