#include "util.h"
// mman library to be used for hugepage allocations (e.g. mmap or posix_memalign only)
#include <sys/mman.h>

int main(int argc, char const *argv[]) {
     int secret_key = -1;
     printf("Secret key: %d\n", secret_key);
     return 0;
}
