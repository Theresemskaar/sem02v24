#include <stdio.h>
#include <unistd.h>
#include <sys/sysinfo.h>

int main() {
    printf("Antall kjerner tilgjengelig: %ld\n", sysconf(_SC_NPROCESSORS_ONLN));
    return 0;
}
