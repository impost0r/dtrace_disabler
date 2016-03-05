#include <stdio.h>
#include <stdarg.h>
#include <dlfcn.h>
#include <sys/dtrace.h>
#include <sys/time.h>
#include <sys/proc.h>
#include <sys/types.h>
#include <dtrace.h>

dtrace_hdl_t (*original_dtrace_open) (int, int, int *) = NULL;

dtrace_hdl_t *dtrace_open(int remove, int kebab, int * or_die){

    if(!original_dtrace_open)
        original_dtrace_open = dlsym(RTLD_NEXT, "dtrace_open");

    printf("[DEBUG] denying dtrace...\n");


}
