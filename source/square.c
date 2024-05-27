#include <stdio.h>
#include <stdbool.h>

// Function that renders a square, with custom width and height, and a fill option (if fill is set to 1 it will fill.
void renderSquare(int width, int height, bool fill){
	//For loop for height
	int widthStop = width - 1;
	int heightStop = height - 1;
	for(int heightCount = 0; heightCount != height; heightCount++){
		//For loop for width
		for(int widthCount = 0; widthCount != width; widthCount++){
			if(fill == 1){
				if(widthCount != widthStop){
					printf("#");
				} else {
					printf("#\n");
				}
			} else {
				if(widthCount == 0){
					printf("#");
				} else if (widthCount == widthStop){
					printf("#\n");
				} else {
					if(heightCount == 0 || heightCount == heightStop){
						printf("#");
					} else {
						printf(" ");
					}
				}
			}
		}
	}
}
