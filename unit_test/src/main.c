#include <stdio.h>
#include "osal_api.h"
#include "osal.h"
#include "osal_ut.h"

int main()
{
	printf("COM:OSAL, UNIT TEST:%s, VERSION:%d, UTVER:%d\n", __FUNCTION__, COM_OSAL_VERSION, COM_OSAL_UT_VERSION);
	osal_api();
	return 0;
}

