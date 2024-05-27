#include "../include/square.h"
#include <stdio.h>

void renderSquare(int width, int height){
	//For loop for height
	int widthStop = width - 1;
	for(int heightCount = 0; heightCount != height; heightCount++){
		//For loop for width
		for(int widthCount = 0; widthCount != width; widthCount++){
			if(widthCount != widthStop){
				printf("#");
			} else {
				printf("#\n");
			}
		}
	}
}
