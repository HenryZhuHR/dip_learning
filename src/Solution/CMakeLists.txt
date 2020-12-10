

aux_source_directory(./ DIR_Solution)

include_directories(${PROJECT_SOURCE_DIR}/src/include/Solution)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib/Solution)

# add_library(Solution STATIC ${DIR_Solution})
add_library(Solution SHARED ${DIR_Solution})

message(STATUS "[INFO]static linked library compiled by : " ${DIR_Solution})


