COMPONENT_NAME = InputValidator

MAKEFILE_DIR = $(dir $(realpath $(firstword $(MAKEFILE_LIST))))
PROJECT_DIR = $(realpath $(MAKEFILE_DIR)../..)
SRC_DIR = $(PROJECT_DIR)/src
TEST_DIR = $(PROJECT_DIR)/tests

CPPUTEST_HOME ?= $(PROJECT_DIR)/tools/cpputest-3.8

INCLUDE_DIRS = $(SRC_DIR)/$(COMPONENT_NAME)
SRC_DIRS = $(SRC_DIR)/$(COMPONENT_NAME)

INCLUDE_DIRS += $(CPPUTEST_HOME)/include
TEST_SRC_DIRS = $(TEST_DIR)/$(COMPONENT_NAME)

all:
	@echo $(CPPUTEST_HOME)
	@echo $(INCLUDE_DIRS)
	@echo $(TEST_SRC_DIRS)

include $(CPPUTEST_HOME)/build/MakefileWorker.mk
