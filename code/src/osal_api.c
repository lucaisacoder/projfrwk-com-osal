#include <stdio.h>
#include "osal.h"
//#include "local_kconfig.h"
//#include "global_kconfig.h"

int osal_api()
{
	printf("COM: osal, FUNCTION:%s, VERSION:%d\n", __FUNCTION__, COM_OSAL_VERSION);
#ifdef COM_OSAL_DEFINITION
	printf("KCONFIG: enable\n");
#endif
	return 0;
}
