#include <stdio.h>

int main() {
    char a[9] = "abcd1234";
    int result;

    // Inline Assembly with Intel Syntax
    __asm__ __volatile__ (
        ".intel_syntax noprefix;" // Intel 문법 활성화
        "mov esi, 0;"
    "label1:;"
        "mov edi, %[val];"       // edi 레지스터에 a의 값 로드
        "mov eax, DWORD PTR[edi+4*esi];"
        "lea ebx, [edi+4*esi];"
        "add esi, 1;"
        "cmp esi, 2;"
        "jl label1;"
        "xor esi, esi;"
        "push ebx;"
        "push eax;"
        "pop edi;"
        "pop esi;"
        "mov %[res], edi;"        // 결과를 result로 저장
        ".att_syntax;"            // AT&T 문법 복원
        : [res] "=r" (result)     // 출력: result
        : [val] "r" (a)
    );
    printf("%x\n", result);        // 결과 출력
    return 0;
}

