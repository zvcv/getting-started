#include <stdio.h>

int main (void){

    int n;

    printf("ola amigo!~\n");
    printf("n = ");
    scanf("%i", &n);

    printf("here's yo %i n\n", n);


    /*
    pertama bikin z, z itu enter, kenapa enter?
    karena printfnya ditaruh paling bawah, sebelumnya dikasih for loop lagi

    jadi enternya dieksekusi terakhir

    int z = 0; z < n; z++

    artinye, z awalnya 0, selama z masih < n, loopnye jalan terus
    */
    for (int z = 0; z < n; z++){
        
        /*
        x awalnye senilai z, wicis 0 (bener ga?), tapi kalo z nambah, x ikut nambah
        selama x masih < n jugak, loopnye jalan terus
        
        jadi misal nih, n = 3
        z kan 0, otomatis z < 5 dong, looping deh
        masuk perintah looping 1, yaitu for loop x
        
        x kenapatuch?
        x = z, z nye berape? z = 0, x = z, x < 3, gitu kan?

        kasih dah spasi atu
        " "
        karena dia for loop pertama harus diselesaiin dulu dong sebelum ke for loop berikutnya
        x = 1 deh, jadi
        "  "
        trus x = 2
        "   "
        trus x = 3, eittss tapi maksimal kan x < 3, berarti ga ditambah, lanjut deh ke for loop bawahnya
        */
        for (int x = z; x < n; x++){
            printf(" ");
        }
        
        /*
        lanjut dimarii
        c nih awalnye 0, trus kalo c belon < atau = z, lanjut ngeloop

        okedeh, c = 0, c <= z kaga? z berapanich..
        z sekarang = 0
        berarti c <= z ga? yoi dong, karena c = 0 <= z = 0
        0 <= 0
        c++ deh
        digabung ama x tadi

        "   *"

        yoi ga? yoi ga?
        yoi banget..
        */
        for (int c = 0; c <= z; c++){
            printf("*");
        }
        
        /*
        lanjutt ke v
        v nih awalnya 1, v = 1
        kalo v nilainya <= z, v bakal ngeloop

        coba kite cek, z berapasich..

        z = 0

        lah, v nya 1 nih, berarti 1 !<= 0 dong, kaga dieksekusi dah loopnya

        jadi tetep

        "   *"
        */
        for (int v = 1; v <= z; v++){
            printf("*");
        }

        /*
        capek gua komen mulu dah
        */
        printf("\n");
    }

}