int *array_pad(int *vals, int len){
    int *pv[len+2];
    *pv[0] = (vals[0]);
    *pv[len+2] = (vals[len]);
    for (int i=1;i<len;i++){
        *pv[i]=vals[i];
    }
    return 0;
}