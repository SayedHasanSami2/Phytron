#include <stdio.h>

int main() {
    int n, size_of_shot;
    scanf("%d %d", &n, &size_of_shot);

    int arr[n];
    int used[n];  // To track if a tank is used
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        used[i] = 0;
    }

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (used[i]) continue; // skip used tank

        int bestPair = -1;
        for (int j = i + 1; j < n; j++) {
            if (!used[j] && arr[i] + arr[j] <= size_of_shot) {
                if (bestPair == -1 || arr[j] > arr[bestPair]) {
                    bestPair = j; // choose the best possible match
                }
            }
        }

        if (bestPair != -1) {
            used[i] = 1;
            used[bestPair] = 1;
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
