float Qsqrt(float n) {
    int32_t i;
    float y;

    y = n;
    i = * (int32_t *) &y;
    i = 0x1FBD1DF5 + (i >> 1);
    y = * (float *) &i;

    y = y - (y*y - n) * 0.5F * (1 / y);
    y = y - (y*y - n) * 0.5F * (1 / y);
 
    return y;
}