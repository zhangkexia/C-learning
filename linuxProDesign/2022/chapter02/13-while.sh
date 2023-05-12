#!/bin/sh

echo "Eneter password"
read trythis

while [ "$trythis" != "secret" ];do
    echo "Sorry, try again"
    read trythis
done
exit 0
