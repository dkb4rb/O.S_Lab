#!/bin/bash
for i in {250..260}; do sleep 0.5; ./psinfo -l $i; done
