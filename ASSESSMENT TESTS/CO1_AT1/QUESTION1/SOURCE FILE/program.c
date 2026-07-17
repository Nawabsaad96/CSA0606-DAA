#include <stdio.h>

void compressFile(int start, int end)
{
    if (start == end)
    {
        printf("Compressing block %d\n", start);
        return;
    }

    int mid = (start + end) / 2;

    compressFile(start, mid);
    compressFile(mid + 1, end);
}

int main()
{
    int blocks;

    printf("Financial File Compression System\n");
    printf("---------------------------------\n");

    printf("Enter number of file blocks: ");
    scanf("%d", &blocks);

    compressFile(1, blocks);

    printf("\nAnalysis:\n");
    printf("Recurrence Relation : T(n) = 2T(n/2) + O(1)\n");
    printf("Time Complexity     : O(n)\n");
    printf("Space Complexity    : O(log n)\n");

    return 0;
}
