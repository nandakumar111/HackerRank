#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = bin(int(input()))
    max =0
    count =0
    for i in range(2,len(n)):
        if(n[i] == '1'):
            count+=1
            if(max<count):
                max = count
        else:
            count =0
    print(max)
