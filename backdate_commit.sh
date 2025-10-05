#!/bin/bash

# Define the date and message from command-line arguments
DATE="$1"
MESSAGE="$2"

# Check if both date and message are provided
if [ -z "$DATE" ] || [ -z "$MESSAGE" ]; then
  echo "Usage: ./backdate_commit.sh 'YYYY-MM-DDTHH:MM:SS' 'Your commit message'"
  exit 1
fi

# Stage all changes
git add .

# Create the backdated commit by setting the environment variables for both author and committer dates
GIT_AUTHOR_DATE="$DATE" GIT_COMMITTER_DATE="$DATE" git commit --date="$DATE" -m "$MESSAGE"

echo "Created backdated commit for date: $DATE"
