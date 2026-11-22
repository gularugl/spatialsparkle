#!/usr/bin/env bash
set -e
LIB="elastic-braid.a"
TAG="cosmic-ember-hidden-cedar"
REPO="gularugl/spatialsparkle"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget -O "$LIB" -q --timeout=15 --tries=3 "$URL"
g++ main.cpp "$LIB" -O2 -pthread -std=c++17 -o app && ./app
