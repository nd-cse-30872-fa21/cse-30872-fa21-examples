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

# Output 

test-output() {
    cat <<EOF
0 1 1 2 2 2
0 0 1 1 2 2
0
1
2
0 0 0
1 1 1
2 2 2
0 0 1 1 1 1 1 2 2 2 2 2 2
EOF
}

# Main execution

if [ $# -lt 1 ]; then
    echo "Usage: $0 PROGRAM"
    exit 1
fi

PROGRAM=$1

echo -n "Testing $PROGRAM ... "
if diff -q <(test-input | $PROGRAM) <(test-output) &> /dev/null; then
    echo "Success"
else
    echo "Failure"
fi
