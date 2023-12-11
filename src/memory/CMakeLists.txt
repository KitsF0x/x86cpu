add_library(memory STATIC 
	"Memory.cpp" 
	"Memory.hpp"
 "MemoryIndexOutOfBounds.cpp")
target_include_directories(memory PUBLIC .)