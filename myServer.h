/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#ifndef MYSERVER_H_
#define MYSERVER_H_


#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include <open62541/server.h>
#endif
#include "types_ff_generated.h"
#include "types_di_generated.h"
#include "types_rob_generated.h"



_UA_BEGIN_DECLS

extern UA_StatusCode myServer(UA_Server *server);

_UA_END_DECLS

#endif /* MYSERVER_H_ */
