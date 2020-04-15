TARGET			:= ARMv7-A
TARGET_TEST_PG	:= unit_test_c.elf
ROOT_DIR		:= ../..
TEMPLATE_DIR	:= $(ROOT_DIR)/template
ENV_DIR			:= $(ROOT_DIR)/env
ENV_ARCH_DIR	:= $(ROOT_DIR)/env/$(TARGET)
STARTUP_DIR		:= $(ENV_ARCH_DIR)/startup
WORKSPACE_DIR	:= $(ROOT_DIR)/workspace
TEST_DIR		:= $(WORKSPACE_DIR)/test

TEST_OBJS	:= spike_test.o

include $(STARTUP_DIR)/Makefile.env

