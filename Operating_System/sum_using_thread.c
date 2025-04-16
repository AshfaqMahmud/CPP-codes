#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int sum; /* This data is shared by the thread(s) */

/* The thread function */
DWORD WINAPI runner(LPVOID param);

int main(int argc, char *argv[])
{
    HANDLE thread; /* The thread handle */
    DWORD threadID; /* The thread identifier */

    /* Create the thread */
    thread = CreateThread(NULL, 0, runner, argv[1], 0, &threadID);
    if (thread == NULL) {
        printf("Thread creation failed\n");
        return 1;
    }

    /* Wait for the thread to exit */
    WaitForSingleObject(thread, INFINITE);

    printf("sum = %d\n", sum);

    /* Close the thread handle */
    CloseHandle(thread);

    return 0;
}

/* The thread will execute this function */
DWORD WINAPI runner(LPVOID param)
{
    int i, upper = atoi((char*)param);
    sum = 0;
    for (i = 1; i <= upper; i++) {
        sum += i;
    }
    return 0;
}
