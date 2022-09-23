void transfo(int w, int h, unsigned char *src, unsigned char *dest, unsigned char *lut, unsigned char val)
{
  	int i,j;
	unsigned char curved;

  	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			curved = lut[src[j * w + i]];
			dest[j * w + i] = (((int) curved + val) > 255) ? 255 : curved + val;
		}
	}
}
