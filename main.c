#include <stdio.h>
#include <stdbool.h>

enum weekday{SUN ,Mon,TUE,WED,THU,FRI, SAT};

bool is_weekend(enum weekday);

int main() {
    enum weekday today ;
    today = SAT;
    printf ("%d : %d\n", today , is_weekend ( today ));

    return 0;
}

bool is_weekend(enum weekday day){
    if(day == 0 | day == 6) return 1;
    else return 0;
}