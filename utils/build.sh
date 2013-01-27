#!/bin/bash

LIBRARIES_PATH=$1
PREFIX=$2

PTH_PATH=${LIBRARIES_PATH}/pth-2.0.7
LIBASSUAN_PATH=${LIBRARIES_PATH}/libassuan-2.0.3
KSBA_PATH=${LIBRARIES_PATH}/libksba-1.3.0 
GNUPG_PATH=${LIBRARIES_PATH}/gnupg-2.0.19

function build_pth
{
  ${PTH_PATH}/configure --prefix=${PREFIX}
	make all install -C ${PTH_PATH}
}

function build_libassuan
{
  ${LIBASSUAN_PATH}/configure --prefix=${PREFIX}
	make all install -C ${LIBASSUAN_PATH}
}

function build_ksba
{
  ${KSBA_PATH}/configure --prefix=${PREFIX}
  make all install -C ${KSBA_PATH}
}

function buid_gnupg
{
  ${GNUPG_PATH}/configure --prefix=${PREFIX} --with-libassuan-prefix=${LIBASSUAN_PATH} --with-ksba-prefix=${KSBA_PATH} --with-pth-prefix=${PTH_PATH}
	make all install -C ${GNUPG_PATH}
}

build_pth
build_libassuan
build_ksba
buid_gnupg

