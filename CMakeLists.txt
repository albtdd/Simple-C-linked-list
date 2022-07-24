#
# Linked List
#
# Alberto Todde
#

cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

set(PRJ_TITLE "llist")
set(PRJ_VERSION "0.1.0")
set(CMAKE_C_FLAGS "-g -Wall -Werror -Wextra -pedantic -std=c11")

project(${PRJ_TITLE} VERSION ${PRJ_VERSION} LANGUAGES C)

set(SRC_FILES
    node.h
    node.c
    linked_list.h
    linked_list.c
    main.c)

add_executable(${PRJ_TITLE} ${SRC_FILES})
