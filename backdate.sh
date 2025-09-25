#!/bin/bash

START_DATE="2025-09-25"   # Change this start date
DAYS=100                 # Number of days to fake commits

for ((i=0; i<$DAYS; i++))
do
  CURRENT_DATE=$(date -d "$START_DATE + $i days" +"%Y-%m-%dT12:00:00")

  export GIT_AUTHOR_DATE="$CURRENT_DATE"
  export GIT_COMMITTER_DATE="$CURRENT_DATE"

  echo "Day $((i+1)) progress" >> progress.txt

  git add .
  git commit -m "Day $((i+1)) of 100 Days of Code"
done
