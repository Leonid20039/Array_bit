//112-Чудновский-Леонид
//Подсчёт единичных битов числа
int count_bit(int num, int k){
    int flag = 0;
    int count = 0;
    for( int i = 0; i < 32; i++){
        count += num & 1;
        num >>= 1;
    }
    if (count == k){
        flag = 1;
    }
    return flag;
}