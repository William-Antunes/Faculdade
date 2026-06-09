int tempo(int hor, int min, int seg){
    return (hor * 3600) + (min * 60) + seg;
}

int main(){
    int hor, min, seg;
    printf("Diga as horas, minutos e segundos atuais: ");
    scanf("%d %d %d", &hor, &min, &seg);


    printf("Se passaram %d segundos desde meia noite", tempo(hor, min, seg));

    return 0;
}