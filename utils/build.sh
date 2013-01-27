#!/bin/bash

LIBRARIES_PATH=$1
PREFIX=$2

PTH_PATH=pth-2.0.7
LIBASSUAN_PATH=libassuan-2.0.3
KSBA_PATH=libksba-1.3.0 
GNUPG_PATH=gnupg-2.0.19

function build_pth
{
  mkdir ${PTH_PATH} && cd ${PTH_PATH}
  ../${LIBRARIES_PATH}/${PTH_PATH}/configure --prefix=${PREFIX}
	make all install -C ../${LIBRARIES_PATH}/${PTH_PATH}
  cd ..
}

function build_libassuan
{
  mkdir ${LIBASSUAN_PATH} && cd ${LIBASSUAN_PATH}
  ../${LIBRARIES_PATH}/${LIBASSUAN_PATH}/configure --prefix=${PREFIX}
	make all install -C ../${LIBRARIES_PATH}/${LIBASSUAN_PATH}
  cd ..
}

function build_ksba
{
  mkdir ${KSBA_PATH} && cd ${KSBA_PATH}
  ../${LIBRARIES_PATH}/${KSBA_PATH}/configure --prefix=${PREFIX}
  make all install -C ../${LIBRARIES_PATH}/${KSBA_PATH}
  cd ..
}

function buid_gnupg
{
	mkdir ${GNUPG_PATH} && cd ${GNUPG_PATH}
  ${LIBRARIES_PATH}/${GNUPG_PATH}/configure --prefix=${PREFIX} --with-libassuan-prefix=${LIBRARIES_PATH}/${LIBASSUAN_PATH} --with-ksba-prefix=${LIBRARIES_PATH}/${KSBA_PATH} --with-pth-prefix=${LIBRARIES_PATH}/${PTH_PATH}
	make all install -C ../${LIBRARIES_PATH}/${GNUPG_PATH}
  cd ..
}

build_pth
build_libassuan
build_ksba
buid_gnupg

