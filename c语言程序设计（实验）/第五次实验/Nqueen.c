#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int count = 0; // 记录解的数量

bool is_safe(int board[], int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(board[i] - col) == row - i) {
            return false;
        }
    }
    return true;
}

void solve_n_queens(int board[], int row, int n) {
    if (row == n) {
        count++;
        return;
    }
    
    for (int col = 0; col < n; col++) {
        if (is_safe(board, row, col)) {
            board[row] = col;
            solve_n_queens(board, row + 1, n);
            // 回溯，不需要显式撤销选择，因为下一次循环会覆盖
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("无解\n");
        return 0;
    }

    int board[n];
    solve_n_queens(board, 0, n);

    if (count > 0) {
        printf("%d\n", count);
    } else {
        printf("无解\n");
    }

    return 0;
}