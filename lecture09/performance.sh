#!/bin/bash

# Input

test-input() {
    cat <<EOF
0 2 1 2 1 2 
0 1 2 0 1 2
0
1
2
0 0 0
1 1 1
2 2 2
2 2 1 1 1 2 2 0 0 1 1 2 2
EOF
}

# Main execution

if [ $# -lt 1 ]; then
    echo "Usage: $0 PROGRAM"
    exit 1
fi

PROGRAM=$1

echo -n "Timing $PROGRAM ... "
# test-input | { time $PROGRAM &> /dev/null; } |& awk '/real/ { print $2 }' 
if test-input | timeout 5 $PROGRAM &> /dev/null; then
    echo "Success"
else
    echo "Failure"
fi
