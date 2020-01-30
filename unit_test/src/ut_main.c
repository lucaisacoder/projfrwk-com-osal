#include <stdio.h>
#include "osal_ut.h"
#include "osal.h"

int main()
{
    printf("%s: version %d\n", __FUNCTION__, COM_OSAL_UT_VERSION);
    return osal_main();
}