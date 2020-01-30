################# Add include #################
list(APPEND ADD_INCLUDE 
        inc_pub
    )
list(APPEND ADD_PRIVATE_INCLUDE
        inc
    )
###############################################

############## Add source files ###############
list(APPEND ADD_SRCS  
        src/osal.c
    )
###############################################

###### Add required/dependent components ######
# list(APPEND ADD_REQUIREMENTS component1)
###############################################

############ Add static libs ##################
if(CONFIG_OSAL_INCLUDE_STATIC_LIB)
	#    list(APPEND ADD_STATIC_LIB "lib/libosal.a")
endif()
###############################################

#### Add compile option for this component ####
#### Just for this component, won't affect other 
#### modules, including component that depend 
#### on this component
list(APPEND ADD_DEFINITIONS_PRIVATE -DAAAAA=1)

#### Add compile option for this component
#### and components denpend on this component
list(APPEND ADD_DEFINITIONS -DAAAAA222=1
                            -DAAAAA333=1)
###############################################


register_component()