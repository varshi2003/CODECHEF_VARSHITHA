#include <stdio.h>
#include <string.h>

int isSubsequence(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int i = 0, j = 0;
    while (i < len1 && j < len2) {
        if (str1[i] == str2[j]) {
            i++;
        }
        j++;
    }
    return i == len1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char m[100001], w[100001];
        scanf("%s %s", m, w);
        if (isSubsequence(m, w) || isSubsequence(w, m)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

