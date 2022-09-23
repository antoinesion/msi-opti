# MSI : Optimisation de code et parallélisme

### ⏱ Résultat de la version 0 (initiale) :

```
image1.pgm courbe1.amp 5 image1_t.pgm
image1.pgm: 5617 x 3684 = 20693028 pixels
===> 188080 clock cycles.

image2.pgm courbe2.amp 5 image2_t.pgm
image2.pgm: 5227 x 3515 = 18372905 pixels
===> 181249 clock cycles.

image3.pgm courbe3.amp 5 image3_t.pgm
image3.pgm: 6660 x 9185 = 61172100 pixels
===> 771618 clock cycles.

image4.pgm courbe4.amp 4 image4_t.pgm
image4.pgm: 3381 x 4914 = 16614234 pixels
===> 146359 clock cycles.

image5.pgm courbe5.amp 7 image5_t.pgm
image5.pgm: 3226 x 3255 = 10500630 pixels
===> 91138 clock cycles.

image6.pgm courbe6.amp 6 image6_t.pgm
image6.pgm: 3677 x 3677 = 13520329 pixels
===> 112339 clock cycles.

image7.pgm courbe7.amp 9 image7_t.pgm
image7.pgm: 3264 x 4896 = 15980544 pixels
===> 122618 clock cycles.

image8.pgm courbe8.amp 5 image8_t.pgm
image8.pgm: 1757 x 2636 = 4631452 pixels
===> 34684 clock cycles.

image9.pgm courbe9.amp 7 image9_t.pgm
image9.pgm: 2498 x 3330 = 8318340 pixels
===> 67926 clock cycles.

image10.pgm courbe10.amp 9 image10_t.pgm
image10.pgm: 3024 x 3024 = 9144576 pixels
===> 71489 clock cycles.

TOTAL: 1787500 clock cycles.
```

### ⏱ Résultat de la version 1 (moins de fonctions et moins de boucles)

**⚡️ Environ 2.1 fois plus rapide**

```
image1.pgm courbe1.amp 5 image1_t.pgm
image1.pgm: 5617 x 3684 = 20693028 pixels
===> 86662 clock cycles.

image2.pgm courbe2.amp 5 image2_t.pgm
image2.pgm: 5227 x 3515 = 18372905 pixels
===> 81600 clock cycles.

image3.pgm courbe3.amp 5 image3_t.pgm
image3.pgm: 6660 x 9185 = 61172100 pixels
===> 368523 clock cycles.

image4.pgm courbe4.amp 4 image4_t.pgm
image4.pgm: 3381 x 4914 = 16614234 pixels
===> 71031 clock cycles.

image5.pgm courbe5.amp 7 image5_t.pgm
image5.pgm: 3226 x 3255 = 10500630 pixels
===> 43623 clock cycles.

image6.pgm courbe6.amp 6 image6_t.pgm
image6.pgm: 3677 x 3677 = 13520329 pixels
===> 54972 clock cycles.

image7.pgm courbe7.amp 9 image7_t.pgm
image7.pgm: 3264 x 4896 = 15980544 pixels
===> 54246 clock cycles.

image8.pgm courbe8.amp 5 image8_t.pgm
image8.pgm: 1757 x 2636 = 4631452 pixels
===> 16849 clock cycles.

image9.pgm courbe9.amp 7 image9_t.pgm
image9.pgm: 2498 x 3330 = 8318340 pixels
===> 31087 clock cycles.

image10.pgm courbe10.amp 9 image10_t.pgm
image10.pgm: 3024 x 3024 = 9144576 pixels
===> 37374 clock cycles.

TOTAL: 845967 clock cycles.
```

### ⏱ Résultat de la version 2 (localité de la mémoire)

**⚡️ Environ 1.7 fois plus rapide**

```
image1.pgm courbe1.amp 5 image1_t.pgm
image1.pgm: 5617 x 3684 = 20693028 pixels
===> 49852 clock cycles.

image2.pgm courbe2.amp 5 image2_t.pgm
image2.pgm: 5227 x 3515 = 18372905 pixels
===> 45280 clock cycles.

image3.pgm courbe3.amp 5 image3_t.pgm
image3.pgm: 6660 x 9185 = 61172100 pixels
===> 206810 clock cycles.

image4.pgm courbe4.amp 4 image4_t.pgm
image4.pgm: 3381 x 4914 = 16614234 pixels
===> 39985 clock cycles.

image5.pgm courbe5.amp 7 image5_t.pgm
image5.pgm: 3226 x 3255 = 10500630 pixels
===> 26918 clock cycles.

image6.pgm courbe6.amp 6 image6_t.pgm
image6.pgm: 3677 x 3677 = 13520329 pixels
===> 32284 clock cycles.

image7.pgm courbe7.amp 9 image7_t.pgm
image7.pgm: 3264 x 4896 = 15980544 pixels
===> 35324 clock cycles.

image8.pgm courbe8.amp 5 image8_t.pgm
image8.pgm: 1757 x 2636 = 4631452 pixels
===> 11000 clock cycles.

image9.pgm courbe9.amp 7 image9_t.pgm
image9.pgm: 2498 x 3330 = 8318340 pixels
===> 19926 clock cycles.

image10.pgm courbe10.amp 9 image10_t.pgm
image10.pgm: 3024 x 3024 = 9144576 pixels
===> 21972 clock cycles.

TOTAL: 489351 clock cycles.
```
