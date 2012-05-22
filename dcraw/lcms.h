#ifndef _LSMH_H_
#define _LSMH_H_

#include "lcms2.h"

#define LCMS_ERROR_SHOW 1
static
void cmsErrorAction(int i)
{
}

static
void cmsLogErrorHandler(cmsContext ContextID, cmsUInt32Number ErrorCode, const char *Text)
{
	fprintf(stderr, "%s\n", Text);
}

#endif