#!/bin/bash

START_DATE="2025-10-01"   # CHANGE this to your desired start date
TOTAL_DAYS=100           # CHANGE this to 30, 50, 100, etc

# Create a guaranteed-changing file
FILE="daily_log.txt"
touch $FILE

for ((i=0; i<$TOTAL_DAYS; i++))
do
  CURRENT_DATE=$(date -d "$START_DATE + $i days" +"%Y-%m-%dT12:00:00")

  export GIT_AUTHOR_DATE="$CURRENT_DATE"
  export GIT_COMMITTER_DATE="$CURRENT_DATE"

  echo "Day $((i+1)) commit on $CURRENT_DATE" >> $FILE

  git add $FILE
  git commit -m "Day $((i+1)) of coding challenge"

done

echo " All $TOTAL_DAYS backdated commits created successfully!"
