julia ip.jl > input1
python3 ip.py > input2
cat input1 | tr -d ',[]' > inp1
cat input2 | tr -d ',[]' > inp2
rm input*
