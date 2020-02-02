# - Config file for 'osal' package
# It defines the following variables
#  OSAL_INCLUDE_DIRS - include directories
#  OSAL_LIBRARIES    - libraries to link against

# Include directory
set(OSAL_INCLUDE_DIRS "/home/share/lworkspace/project/components/osal/installed/include")

# Import the exported targets
include("/home/share/lworkspace/project/components/osal/installed/lib/CMake/osal/osalTargets.cmake")

# Set the expected library variable
set(OSAL_LIBRARIES osal)
