#!/bin/bash
mkdir -p distrib/Rtttl
cp -r examples ./distrib/Rtttl
cp -r src ./distrib/Rtttl
cp library.properties ./distrib/Rtttl
cp keywords.txt ./distrib/Rtttl
cd distrib/
zip -r Rtttl.zip Rtttl
