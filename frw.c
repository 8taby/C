#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        char arr[80];
        scanf("%s", arr);
        printf("%s", arr);
    } else if (argc == 3 && argv[1] == '@') {
        FILE* file = fopen(argv[2], "w");
        char arr[80];
        scnaf("%s", arr);
        fprintf(file, arr);
        fclose(file);
    } else if (argc == 2) {
        FILE* file = fopen(argv[1], "r");
        if (file == NULL) {
            printf("파일이 없습니다. 프로그램을 종료합니다.");
            return 0;
        }

        char str[80];
        fgets(str, 80, file);

        fclose(file);
        printf("%s\n", str);
    } else if (argc == 3) {
        FILE* file = fopen(argv[1], "r");
        FILE* fout = fopen(argv[2], "w");
        if (file == NULL) {
            printf("파일이 없습니다. 프로그램을 종료합니다.");
            return 0;
        }

        char str[80];
        fgets(str, 80, file);

        fclose(file);
        fprintf(fout, str);
    }
    return 0;
}
