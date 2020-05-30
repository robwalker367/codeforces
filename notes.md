
# Functions
`ios_base::sync_with_stdio(false)`
- In C++ I/O is through streams (infinite data structures that are FIFO like a queue)
- C++ can handle both C++ standard streams and C standard streams (implication is that can use both C and C++'s I/O functions)
- `sync_with_stdio(false)` turns this off, benefit is faster I/O

`cin.tie(NULL)`
- "unties" `cin` with `cout`
- `cin` and `cout` are "tied" in the sense that `cout` buffers are flushed before executing a `cin` and vice versa
- untying them means that you would have to flush them manually
- benefit is faster I/O

`string.size()` vs `string.length()`
- They do the same thing; both are kept for readability (e.g., vectors have `.size()`, whereas usually string's have `.length()`)

accumulate(iterator in vector, iterator in vector, int to accumulate from)
- `#include <numeric>`
- e.g., to sum a vector, do `accumulate(v.begin(), v.end(), 0)`
- Note that I think this is exclusive, so it won't include the elt at `v.end()`

`fixed` and `cout.precision(int)`
- `fixed` is provided to `cout` like so: `cout << fixed << 5;`, and prevents scientific notation
- it also adds decimal points to the default precision, so if you just want `int`'s do `cout.precision(int x)` where `x` is the precision

# Reading integers all from one line:
https://discuss.codechef.com/t/input-multiple-integers-in-c-line-in-single-line-with-whitespace/21355
e.g., Input: 1 2 3 4 5
