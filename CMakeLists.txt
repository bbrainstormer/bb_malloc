cmake_minimum_required(VERSION 3.10)

project(bb_malloc)

add_library(bb_malloc.o STATIC bb_malloc.c)
