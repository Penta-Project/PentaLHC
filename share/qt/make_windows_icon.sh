#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/pentaquark.ico

convert ../../src/qt/res/icons/pentaquark-16.png ../../src/qt/res/icons/pentaquark-32.png ../../src/qt/res/icons/pentaquark-48.png ${ICON_DST}
