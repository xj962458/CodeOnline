#!/bin/bash
echo `expr 3 + 90`
read -p "请输入a:" a
read -p "请输入b:" b
c=`expr $a + $b`
echo $c
if [ $a > $b ]
then   echo max
fi