## Problem No. 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

```mermaid
stateDiagram-v2
    [*] --> int_multiples
    int_multiples --> for_loop
    for_loop --> if_condition
    if_condition --> true
    if_condition --> false
    true --> ++
    false --> Print_final_value
    Print_final_value --> [*]
    ++ --> int_multiples
```
