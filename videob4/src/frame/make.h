
FRAME_INC_DIR		= $(FRAME_BASE)
FRAME_SRC_DIR		= $(FRAME_BASE)
FRAME_OBJ_DIR		= $(FRAME_BASE)

FRAME_DIRS		= $(FRAME_INC_DIR)  $(FRAME_SRC_DIR)  $(FRAME_OBJ_DIR)
FRAME_SRC		= $(wildcard $(FRAME_SRC_DIR)/*.c)

FRAME_OBJ		= $(FRAME_SRC:.c=.o)
FRAME_OBJ		:= $(filter %.o, $(FRAME_OBJ))
FRAME_OBJ		:= $(patsubst $(FRAME_SRC_DIR)/%, $(FRAME_OBJ_DIR)/%, $(FRAME_OBJ)) 

FRAME_DEP		= $(FRAME_SRC:.c=.dep)
FRAME_DEP		:= $(filter %.dep, $(FRAME_DEP))
FRAME_DEP		:= $(patsubst $(FRAME_SRC_DIR)/%, $(FRAME_OBJ_DIR)/%, $(FRAME_DEP)) 

FRAME_INC		= -I$(FRAME_INC_DIR)

FRAME_CFLAGS	= $(CFLAGS)

