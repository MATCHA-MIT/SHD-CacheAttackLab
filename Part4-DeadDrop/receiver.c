
#include"util.h"
// mman library to be used for hugepage allocations (e.g. mmap or posix_memalign only)
#include <sys/mman.h>

int main(int argc, char **argv)
{
    // [4] TODO: Put your covert channel setup code here

    printf("Please press enter.\n");

    getchar();

    printf("Receiver now listening.\n");

    bool listening = true;
    while (listening) {

        // [4] TODO: Put your covert channel code here

    }

    printf("Receiver finished.\n");

    return 0;
}


