cmake_minimum_required(VERSION 2.8.4)

project(UseLATEX_DOC NONE)

include(../UseLATEX/UseLATEX.cmake)

# Note that normally CMakeLists.txt would not be considered an
# input to the document, but in this special case of documenting
# UseLATEX.cmake the contents of this file is actually included
# in the document.

set(IMAGES background2.jpg background.jpg)

add_latex_document(presentation.tex
  INPUTS CMakeLists.txt
  IMAGES ${IMAGES}
  INPUTS qualitycode.tex badcode.tex tests.tex tdd.tex
)
