#### 2 implementation of min function and 1 inbuilt min function
#### benchmark using **hyperfine**
#### might use *perf* for `cpp`, *timeit* for `py` for benchmarking
#### first generate input data from `ip.jl` or `ip.py` and then feed into `minbench.cpp` or `minbench.cpp`
---

todo
===
+ https://graphics.stanford.edu/~seander/bithacks.html#CopyIntegerSign

| Function | Mean [ms] | Min [ms] | Max [ms] | Relative |
|:---|---:|---:|---:|---:|
| inbuilt min inp1 | 378.3 ± 4.4 | 372.6 | 399.2 | 2.86 ± 0.10 |
| inbuilt min inp2 | 132.1 ± 4.3 | 128.5 | 153.5 | 1.00 |
| numpy min inp1   | 625.5 ± 85.8| 458.7 | 828.1 | 3.78 ± 0.52 |
| numpy min inp2   | 165.4 ± 3.3 | 159.4 | 173.8 | 1.00 |
| akd min inp1     | 409.3 ± 6.6 | 396.5 | 437.6 | 3.07 ± 0.06 |
| akd min inp2     | 133.2 ± 1.2 | 130.9 | 135.3 | 1.00 |
| boobi min inp1   | 420.9 ± 5.3 | 411.5 | 443.9 | 3.09 ± 0.09 |
| boobi min inp2   | 136.2 ± 3.3 | 133.1 | 147.9 | 1.00 |

conclusion: 
+ In DonaldKnuth's paper "StructuredProgrammingWithGoToStatements", he wrote: "Programmers waste enormous amounts of time thinking about, or worrying about, the speed of noncritical parts of their programs, and these attempts at efficiency actually have a strong negative impact when debugging and maintenance are considered. We should forget about small efficiencies, say about 97% of the time: premature optimization is the root of all evil. Yet we should not pass up our opportunities in that critical 3%." 
+ https://en.wikipedia.org/wiki/Program_optimization
