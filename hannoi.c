# include <stdio.h>

void move(char from,char to) {
    printf(" %c -> %c",from,to);
}
void hannoi(char A,char B,char C, int num) {
    if (num == 1) {
        move(A,C);
    }else {
        hannoi(A,C,B,num-1);
        move(A,C);
        hannoi(A,A,C,num-1);
    }
}

int main() {
    char A = 'A',B = 'B' ,C = 'C';
    hannoi('A','B','C',3);
}