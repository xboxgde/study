#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <process.h> /* _beginthreadex */
#include <stdio.h>
#include <stdlib.h>

#define THREAD_COUNT 3

 /* 스레드를 시작한다. 이 예제에서는 생성에 실패하면 더 진행할 수 없으므로 프로그램을 끝낸다. */
static HANDLE start_thread(_beginthreadex_proc_type function, void* arg)
{
    /* 인자 순서: 보안 속성, 스택 크기(0은 기본값), 시작 함수, 함수에 넘길 값, 생성 옵션, 스레드 ID */
    HANDLE thread = (HANDLE)_beginthreadex(NULL, 0, function, arg, 0, NULL);

    if (thread == 0) {
        fprintf(stderr, "스레드 생성 실패\n");
        exit(EXIT_FAILURE);
    }
    return thread;
}

/* 스레드 시작 함수의 형식은 정해져 있다. void * 하나를 받고 unsigned를 반환한다. */
static unsigned __stdcall count_thread(void* arg)
{
    const char* name = (const char* )arg;
    int i;

    for (i = 1; i <= 100; i++) {
        printf("  [%s] %d\n", name, i);
        Sleep(100);
    }
    return 0;
}







int main(void)
{
    HANDLE thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub_thread 1", 0, NULL);
    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub_thread 2", 0, NULL);

    for (int i = 1; i <= 100; i++) {
        printf("  [%s] %d\n", "main thread", i);
        Sleep(100);
    }

    getchar();

    return EXIT_SUCCESS;
}
