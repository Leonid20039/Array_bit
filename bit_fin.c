//112-Чудновский-Леонид
//Функция вывода подмассивов
int bit_fin(int k, int j, int mass[]){
    int p = 0, r = 0, t = 0;
    for (int L = 0; L < 32; L++){
        p += j&1;
        r = j&1;
        if(r == 1){
            mass[t] = L+1;
            t++;
         }
     j >>= 1;
    r = 0;
    }
}