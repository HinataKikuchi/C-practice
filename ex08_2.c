// 練習問題 8 - 2
// 次のコードに追加し、‘h’と‘w’を大文字にすることにより、“Hello World”と表示されるプログラムを完成させなさい。

// ただし、配列の添え字を使用しないこと。（ str[0] = 'H';と書いてはいけない）

// ※ 	‘h’は 0 番目、‘w’は 6 番目の文字であることを利用してよい。


#include <stdio.h>

int main(void)
{
    char str[] = "hello world";

// 'h'と'w'を大文字にする
    *(str+0)='H';
    *(str+6)='W';
    printf( "%s\n", str );
    return 0;
}