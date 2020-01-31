############### Add include ###################
list(APPEND ADD_INCLUDE
	"../code/inc_pub"
    "../code/inc"
    )
list(APPEND ADD_PRIVATE_INCLUDE "inc")
###############################################

############ Add source files #################
list(APPEND ADD_SRCS  
        src/ut_main.c
        ../code/src/main.c
    )
###############################################

###### Add required/dependent components ######
if(CONFIG_OSAL_ENABLED)
    list(APPEND ADD_REQUIREMENTS OSAL)
else()
    list(APPEND ADD_REQUIREMENTS )
endif()
###############################################

############ Add static libs ##################
# list(APPEND ADD_STATIC_LIB "../lib/libcode.a")
###############################################

#### Add compile option for this component ####
#### Just for this component, won't affect other 
#### modules, including component that depend 
#### on this component
# list(APPEND ADD_DEFINITIONS_PRIVATE -DAAAAA=1)

#### Add compile option for this component
#### and components denpend on this component
# list(APPEND ADD_DEFINITIONS -DAAAAA222=1
#                             -DAAAAA333=1)
###############################################

include(${SDK_PATH}/tools/cmake/util/register_component.cmake)
register_component()