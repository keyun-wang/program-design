#include <stdio.h>
#include <string.h>

#define ALPHABET 256

void preprocess_badchar(const char *pat, int m, int badchar[]) {
    for (int i = 0; i < ALPHABET; i++)
        badchar[i] = -1;

    for (int i = 0; i < m; i++)
        badchar[(unsigned char)pat[i]] = i;
}

int boyer_moore(const char *text, const char *pat) {
    int n = strlen(text);
    int m = strlen(pat);
    int badchar[ALPHABET];

    preprocess_badchar(pat, m, badchar);

    int s = 0;
    while (s <= (n - m)) {
        int j = m - 1;

        while (j >= 0 && pat[j] == text[s + j])
            j--;

        if (j < 0)
            return s;
        else
            s += (j - badchar[(unsigned char)text[s + j]] > 1)
                 ? j - badchar[(unsigned char)text[s + j]]
                 : 1;
    }
    return -1;
}

int main() {
    const char *text = "ABCDABCDABDEFG";
    const char *pattern = "ABDE";

    int pos = boyer_moore(text, pattern);
    (pos == -1) ? printf("Not found\n") : printf("Found at %d\n", pos);
}
