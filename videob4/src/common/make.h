
COMMON_INC_DIR		= $(COMMON_BASE)
COMMON_SRC_DIR		= $(COMMON_BASE)
COMMON_OBJ_DIR		= $(COMMON_BASE)

COMMON_DIRS		= $(COMMON_INC_DIR)  $(COMMON_SRC_DIR)  $(COMMON_OBJ_DIR)
COMMON_SRC		= $(wildcard $(COMMON_SRC_DIR)/*.c)

COMMON_OBJ		= $(COMMON_SRC:.c=.o)
COMMON_OBJ		:= $(filter %.o, $(COMMON_OBJ))
COMMON_OBJ		:= $(patsubst $(COMMON_SRC_DIR)/%, $(COMMON_OBJ_DIR)/%, $(COMMON_OBJ)) 

COMMON_DEP		= $(COMMON_SRC:.c=.dep)
COMMON_DEP		:= $(filter %.dep, $(COMMON_DEP))
COMMON_DEP		:= $(patsubst $(COMMON_SRC_DIR)/%, $(COMMON_OBJ_DIR)/%, $(COMMON_DEP)) 

COMMON_INC		= -I$(COMMON_INC_DIR)

COMMON_CFLAGS	= $(CFLAGS)

