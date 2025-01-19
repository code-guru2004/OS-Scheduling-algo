echo "Enter a number"
read n

for ((i=1; i<=$n; i++))
do
  for ((j=1; j<=$i; j++))
  do
    printf "*" 
  done
  echo 
done