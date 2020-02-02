#include <stdio.h>
#include "osal.h"

int osal_api()
{
	printf("COM: osal, FUNCTION:%s, VERSION:%d\n", __FUNCTION__, COM_OSAL_VERSION);
	return 0;
}
