
PROJECT(meta NONE)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}")

INCLUDE(UseLuaTex.cmake)

cmake_minimum_required(VERSION 2.4.8)
if(COMMAND cmake_policy)
  cmake_policy(VERSION 2.6)
endif(COMMAND cmake_policy)

SET(FIG_DIR figures)
SET(LUALATEX_COMPILER_FLAGS "--enable-write18")

SET(LATEX_OUTPUT_PATH bin)

SET(CMAKE_CURRENT_SOURCE_DIR src)

ADD_LATEX_DOCUMENT(meta.tex
                INPUTS unitTesting.tex tdd.tex tddExample.tex
                IMAGE_DIRS figures
                PGF_DIRS figures
                DEFAULT_PDF
)
