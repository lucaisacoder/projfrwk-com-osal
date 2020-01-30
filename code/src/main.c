#include <stdio.h>
#include "osal.h"

int osal_main()
{
#ifdef OSAL_DEFINE
    printf("%s: 1 version %d\n", __FUNCTION__, COM_OSAL_VERSION);
#endif
    printf("%s: 2 version %d\n", __FUNCTION__, COM_OSAL_VERSION);
    return 0;
}

int osal_main_api()
{
    return osal_main();
}