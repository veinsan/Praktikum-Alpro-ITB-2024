#include <stdio.h>

int main(){
    int W, H;
    int x, y;
    char cmd;
    int n;         // Untuk perintah loncat (jump)
    char last_move = '\0';  // Menyimpan perintah gerak terakhir ('w', 'a', 's', atau 'd')
    
    /* Baca ukuran area dan posisi awal */
    scanf("%d %d", &W, &H);
    scanf("%d %d", &x, &y);
    
    /* Proses perintah */
    while(1) {
        scanf(" %c", &cmd);  // Menggunakan " %c" agar spasi dan newline dilewati
        
        if(cmd == 'p') {
            /* Perintah tampilkan koordinat dan terminasi program */
            printf("%d\n%d\n", x, y);
            break;
        }
        else if(cmd == 'w' || cmd == 'a' || cmd == 's' || cmd == 'd') {
            /* Gerakan langsung */
            if(cmd == 'w') {
                y += 1;
            }
            else if(cmd == 'a') {
                x -= 1;
            }
            else if(cmd == 's') {
                y -= 1;
            }
            else if(cmd == 'd') {
                x += 1;
            }
            last_move = cmd;  // Simpan arah gerakan terakhir
        }
        else if(cmd == 'x') {
            /* Perintah loncat: baca integer tambahan */
            scanf(" %d", &n);
            /* Gerakan loncat mengikuti arah gerakan terakhir */
            if(last_move == 'w') {
                y += n;
            }
            else if(last_move == 's') {
                y -= n;
            }
            else if(last_move == 'a') {
                x -= n;
            }
            else if(last_move == 'd') {
                x += n;
            }
            /* last_move tetap sama setelah loncat */
        }
        
        /* Setelah setiap perintah gerak, cek apakah Dennis jatuh ke sungai */
        if(x < 0 || x >= W || y < 0 || y >= H) {
            printf("JATUH KE SUNGAI\n");
            break;
        }
    }
    
    return 0;
}