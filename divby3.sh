#!/bin/sh
for i in {1..100}
do
l=`expr $i % 3`
if [ $l -eq 0 ]
then
echo $i
fi
done