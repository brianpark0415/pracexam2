bool is_more_positive(int vals[], int length){
    int pos = 0;
    int neg = 0;
    
    for (int i=0;i<length;i++){
        if (vals[i] > 0){
            pos++;
        } else if (vals[i]<0){
            neg++;
        } else{
            ;
        }
    }
    if (pos > neg){
        return true;
    } else {
        return false;
    }
}