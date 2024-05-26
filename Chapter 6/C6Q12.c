#include <stdio.h>

int main() {
    int hr;
    for (hr = 0; hr < 24; hr++) {
        if (hr == 0)
            printf("12 Midnight\n");
        else if (hr > 0 && hr < 12)
            printf("%d AM\n", hr);
        else if (hr == 12)
            printf("12 Noon\n");
        else
            printf("%d PM\n", hr - 12);
    }
    return 0;
}
