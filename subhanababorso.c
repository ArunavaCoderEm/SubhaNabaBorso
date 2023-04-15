#include <stdio.h>
int height = 5;
int width = 9;
int abs(int d)
{
    return d < 0 ? -1 * d : d;
}
  

int main()

{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                || i == height - 1))
                printf("*");
            else if (i < height / 2
                    && j == 0)
                printf("*");
            else if (i > height / 2
                    && j == height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
        printf("\n");
    int a, b;
    for (a = 0; a < height; a++) {
        if (a != 0 && a != height - 1)
            printf("*");
        else
            printf(" ");
        for (b = 0; b < height; b++) {
            if (((a == height - 1)
                && b >= 0
                && b < height - 1))
                printf("*");
            else if (b == height - 1 && a != 0
                    && a != height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
        printf("\n");

int c, d, half = (height / 2);
    for (c = 0; c< height; c++) {
        printf("*");
        for (d = 0; d < width; d++) {
            if ((c == 0 || c == height - 1 || c== half)
                && d < (width - 2))
                printf("*");
            else if (d == (width - 2)
                    && !(c == 0 || c == height - 1
                        || c == half))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    int q,w;
    for (q = 0; q < height; q++) {
        printf("*");
        for (w = 0; w < height; w++) {
            if ((w == height - 1)
                || (q == height / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
        printf("\n");

    int n = width / 2, e, r;
    for (e = 0; e< height; e++) {
        for (r = 0; r <= width; r++) {
            if (r == n || r == (width - n)
                || (e == height / 2 && r > n
                    && r < (width - n)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        n--;
    }
    printf("\n");
    printf("\n");

    int t, y, counter = 0;
    for (t = 0; t < height; t++) {
        printf("*");
        for (y = 0; y <= height; y++) {
            if (y == height)
                printf("*");
            else if (y == counter)
                printf("*");
            else
                printf(" ");
        }
        counter++;
        printf("\n");
    }
    printf("\n");
    int u = width / 2, p, o;
    for (p = 0; p< height; p++) {
        for (o = 0; o <= width; o++) {
            if (o == u || o == (width - u)
                || (p == height / 2 && o > u
                    && o < (width - u)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        u--;
    }
    printf("\n");


    int g, h, halfh = (height / 2);
    for (g = 0; g < height; g++) {
        printf("*");
        for (h = 0; h < width; h++) {
            if ((g == 0 || g == height - 1 || g == halfh)
                && h < (width - 2))
                printf("*");
            else if (h == (width - 2)
                    && !(g == 0 || g == height - 1
                        || g == halfh))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    int v = width / 2, s, f;
    for (s = 0; s < height; s++) {
        for (f = 0; f <= width; f++) {
            if (f == v || f == (width - v)
                || (s == height / 2 && d > v
                    && f < (width - v)))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        v--;
    }
printf("\n");
printf("\n");

  int R, U, halft = (height / 2);
    for (R = 0; R < height; R++) {
        printf("*");
        for (U = 0; U < width; U++) {
            if ((R == 0 || R == height - 1 || R == halft)
                && U < (width - 2))
                printf("*");
            else if (U == (width - 2)
                    && !(R == 0 || R == height - 1
                        || R == halft))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
printf("\n");
    int iq, jq, spaceq = (height / 3);
    int width = height / 2 + height / 5 + spaceq + spaceq;
    for (iq = 0; iq < height; iq++) {
        for (jq = 0; jq <= width; jq++) {
            if (jq == width - abs(spaceq)
                || jq == abs(spaceq))
                printf("*");
            else if ((iq == 0
                    || iq == height - 1)
                    && jq > abs(spaceq)
                    && jq < width - abs(spaceq))
                printf("*");
            else
                printf(" ");
        }
        if (spaceq != 0
            && iq < height / 2) {
            spaceq--;
        }
        else if (iq >= (height / 2 + height / 5))
            spaceq--;
        printf("\n");
    }
printf("\n");
    int ij, jj, halfj = (height / 2);
    for (ij = 0; ij < height; ij++) {
        printf("*");
        for (jj = 0; jj < width; jj++) {
            if ((ij == 0 || ij == halfj)
                && jj < (width - 2))
                printf("*");
            else if (jj == (width - 2)
                    && !(ij == 0 || ij == halfj))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
printf("\n");
    int ii, ji;
    for (ii = 0; ii < height; ii++) {
        for (ji = 0; ji < height; ji++) {
            if ((ii == 0 || ii == height / 2
                || ii == height - 1))
                printf("*");
            else if (ii < height / 2
                    && ji == 0)
                printf("*");
            else if (ii > height / 2
                    && ji == height - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
printf("\n");
    int iqw, jqw, spaceqw = (height / 3);
    int widthw = height / 2 + height / 5 + spaceqw + spaceqw;
    for (iqw = 0; iqw < height; iqw++) {
        for (jqw = 0; jqw <= widthw; jqw++) {
            if (jqw == widthw - abs(spaceqw)
                || jqw == abs(spaceqw))
                printf("*");
            else if ((iqw == 0
                    || iqw == height - 1)
                    && jqw > abs(spaceqw)
                    && jqw < widthw - abs(spaceqw))
                printf("*");
            else
                printf(" ");
        }
        if (spaceqw != 0
            && iqw < height / 2) {
            spaceqw--;
        }
        else if (iqw >= (height / 2 + height / 5))
            spaceqw--;
        printf("\n");
    }
}