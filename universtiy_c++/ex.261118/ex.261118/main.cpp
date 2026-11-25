#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <process.h> /* _beginthreadex */
#include <stdio.h>
#include <stdlib.h>

struct threadparam
{
    int threadid;
    int* pcount;
};

HANDLE hMutex;
unsigned __stdcall count_thread(void* arg)
{
    int* pcount = ((threadparam*)arg)->pcount;
    int threadid = ((threadparam*)arg)->threadid;
    printf("%d thread start\n", threadid);
    
    int count = 0;

    for (int i = 1; i <= 1000000; i++) {
        {
            ++count;
        }
    }
    WaitForSingleObject(hMutex, INFINITE);
    *pcount += count;
    ReleaseMutex(hMutex);
    return 0;
}

//int data1 = 10;
//int data2 = 12;

int main(void)
{
    //HANDLE thread1;
    //HANDLE thread2;
    int* pcount = (int*)malloc(sizeof(int));
    *pcount = 0;

    threadparam t1 = { 1, pcount };
    threadparam t2 = { 2, pcount };

    HANDLE hThreads[2] = { NULL };

    hMutex = CreateMutex(NULL, FALSE, NULL); // false - 신호상태 , true - 비신호상태

    hThreads[0] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&t1, 0, NULL);
    hThreads[1] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&t2, 0, NULL);

    WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);
    printf("count : %d\n", *pcount);

    free(pcount);
    CloseHandle(hMutex);
    CloseHandle(hThreads[0]);
    CloseHandle(hThreads[1]);
    return 0;
}

//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//HANDLE hMutex;
//unsigned __stdcall count_thread(void* arg)
//{
//    int* pcount = (int*)arg;
//    int i;
//    int count = 0;
//
//    for (i = 1; i <= 1000000; i++) {
//        {
//            ++count;
//        }
//    }
//    WaitForSingleObject(hMutex, INFINITE);
//    *pcount += count;
//    ReleaseMutex(hMutex);
//    return 0;
//}
//
////int data1 = 10;
////int data2 = 12;
//
//int main(void)
//{
//    //HANDLE thread1;
//    //HANDLE thread2;
//    int* pcount = (int*)malloc(sizeof(int));
//    *pcount = 0;
//
//    HANDLE hThreads[2] = { NULL };
//
//    hMutex = CreateMutex(NULL, FALSE, NULL); // false - 신호상태 , true - 비신호상태
//
//    hThreads[0] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)pcount, 0, NULL);
//    hThreads[1] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)pcount, 0, NULL);
//
//    WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);
//    printf("count : %d\n", *pcount);
//
//    free(pcount);
//    CloseHandle(hMutex);
//    CloseHandle(hThreads[0]);
//    CloseHandle(hThreads[1]);
//    return 0;
//}

//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//HANDLE hMutex;
//unsigned __stdcall count_thread(void* arg)
//{
//    int* pcount = (int*)arg;
//    int i;
//
//    for (i = 1; i <= 1000000; i++){
//        {
//            WaitForSingleObject(hMutex, INFINITE);
//            *pcount = *pcount + 1;
//            ReleaseMutex(hMutex);
//        }
//    }
//    return 0;
//}
//
////int data1 = 10;
////int data2 = 12;
//
//int main(void)
//{
//    //HANDLE thread1;
//    //HANDLE thread2;
//    int* pcount = (int*)malloc(sizeof(int));
//    *pcount = 0;
//
//    HANDLE hThreads[2] = { NULL };
//
//    hMutex = CreateMutex(NULL, FALSE, NULL); // false - 신호상태 , true - 비신호상태
//
//    hThreads[0] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)pcount, 0, NULL);
//    hThreads[1] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)pcount, 0, NULL);
//
//    WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);
//    printf("count : %d\n", *pcount);
//
//    free(pcount);
//    CloseHandle(hMutex);
//    CloseHandle(hThreads[0]);
//    CloseHandle(hThreads[1]);
//    return 0;
//}

//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//HANDLE hMutex;
//
//unsigned __stdcall count_thread(void* arg)
//{
//    int* pcount = (int*)arg;
//    int i;
//
//    for (i = 1; i <= 1000000; i++) 
//    {
//        {
//        //WaitForSingleObject(hMutex, INFINITE);
//
//         *pcount = *pcount + 1;
//         //ReleaseMutex(hMutex);
//        }
//    }
//    return 0;
//}
//
////int data1 = 10;
////int data2 = 12;
//int count = 0;
//
//int main(void)
//{
//    //HANDLE thread1;
//    //HANDLE thread2;
//    HANDLE hThreads[2] = { NULL };
//
//    hMutex = CreateMutex(NULL, FALSE, NULL); // false - 신호상태 , true - 비신호상태
//
//    hThreads[0] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&count, 0, NULL);
//    hThreads[1] = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&count, 0, NULL);
//    
//    WaitForMultipleObjects(2, hThreads, TRUE, INFINITE);
//    printf("count : %d\n", count);
//
//    return 0;
//}

//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//
//static unsigned __stdcall count_thread(void* arg)
//{
//    int id = *(int*)arg;
//    int i;
//
//    for (i = 1; i <= 100; i++) {
//        printf("  [%d] %d\n", id, i);
//        Sleep(1000);
//    }
//    return 0;
//}
//
//int data1 = 10;
//int data2 = 12;
//
//int main(void)
//{
//    HANDLE thread1;
//    HANDLE thread2;
//
//    thread1 = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&data1, 0, NULL);
//    thread2 = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&data2, 0, NULL);
//    getchar();
//
//    return 0;
//}

//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//
//static unsigned __stdcall count_thread(void* arg)
//{
//    int id = *(int*)arg;
//    int i;
//
//    for (i = 1; i <= 100; i++) {
//        printf("  [%d] %d\n", id, i);
//        Sleep(1000);
//    }
//    return 0;
//}
//
//int data = 10;
//
//int main(void)
//{
//    HANDLE thread;
//
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&data, 0, NULL);
//    Sleep(1);
//    data = 12;
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)&data, 0, NULL);
//    getchar();
//
//    return 0;
//}

//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>
//#include <process.h> /* _beginthreadex */
//#include <stdio.h>
//#include <stdlib.h>
//
//static unsigned __stdcall count_thread(void* arg)
//{
//    const char* name = (const char*)arg;
//    int i;
//
//    for (i = 1; i <= 100; i++) {
//        printf("  [%s] %d\n", name, i);
//        Sleep(100);
//    }
//    return 0;
//}
//
//int main(void)
//{
//    HANDLE thread;
//    
//    getchar();
//
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub_thread 1", 0, NULL);
//    
//    getchar();
//
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub_thread 2", 0, NULL);
//    
//    getchar();
//
//    thread = (HANDLE)_beginthreadex(NULL, 0, count_thread, (void*)"sub_thread 3", 0, NULL);
//
//    for (int i = 1; i <= 100; i++) {
//        printf("  [%s] %d\n", "main thread", i);
//        Sleep(100);
//    }
//
//    getchar();
//
//    return EXIT_SUCCESS;
//}
