#include <stdlib.h>
#include <string.h>

int isSafe(char **boards, int row, int col, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (boards[row][i] == 'Q')
            return 0;
    }

    for (int i = 0; i < length; i++)
    {
        if (boards[i][col] == 'Q')
            return 0;
    }

    for (int i = row, j = col; i >= 0 && j < length; i--, j++)
    {
        if (boards[i][j] == 'Q')
            return 0;
    }

    for (int i = row, j = col; i < length && j >= 0; i++, j--)
    {
        if (boards[i][j] == 'Q')
            return 0;
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (boards[i][j] == 'Q')
            return 0;
    }

    for (int i = row, j = col; i < length && j < length; i++, j++)
    {
        if (boards[i][j] == 'Q')
            return 0;
    }

    return 1;
}

void copy(char **boards, char ***answer, int n, int index)
{
    answer[index] = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        answer[index][i] = (char *)malloc((n + 1) * sizeof(char));
        strcpy(answer[index][i], boards[i]);
    }
}

void helper(char **boards,
            char ***answer,
            int idx,
            int length,
            int *returnSize)
{
    if (idx == length)
    {
        copy(boards, answer, length, *returnSize);
        (*returnSize)++;
        return;
    }

    for (int i = 0; i < length; i++)
    {
        if (isSafe(boards, i, idx, length))
        {
            boards[i][idx] = 'Q';

            helper(boards, answer, idx + 1, length, returnSize);

            boards[i][idx] = '.';
        }
    }
}

char ***solveNQueens(int n, int *returnSize, int **returnColumnSizes)
{
    *returnSize = 0;

    char ***answer = (char ***)malloc(1000 * sizeof(char **));

    char **boards = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        boards[i] = (char *)malloc((n + 1) * sizeof(char));

        for (int j = 0; j < n; j++)
            boards[i][j] = '.';

        boards[i][n] = '\0';
    }

    helper(boards, answer, 0, n, returnSize);

    *returnColumnSizes = (int *)malloc((*returnSize) * sizeof(int));

    for (int i = 0; i < *returnSize; i++)
        (*returnColumnSizes)[i] = n;

    return answer;
}