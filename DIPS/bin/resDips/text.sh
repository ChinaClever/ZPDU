#!/bin/sh  
  
exe="dips" #发布的程序名称  
des="/home/user/GitHub/DIPS/DIPS/bin/resDips" #你的路径  
  
deplist=$(ldd $exe | awk  '{if (match($3,"/")){ printf("%s "),$3 } }')  
cp $deplist $des  
