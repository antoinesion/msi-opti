#include <omp.h>

void transfo(int w, int h, unsigned char *src, unsigned char *dest, unsigned char *lut, unsigned char val)
{
   	int i;
 	unsigned char curved;

	omp_set_num_threads(8);
	
	#pragma omp parallel for
 	for (i = 0; i < w * h; i++) {
 		curved = lut[src[i]];
 		dest[i] = (((int) curved + val) > 255) ? 255 : curved + val;	
 	}
}
