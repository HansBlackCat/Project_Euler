
f003 = primeFactors 600851475143

primes = 2:filter (null. tail. primeFactors) [3,5..]
primeFactors n = factor n primes
    where 
        factor n (p:ps)
            | p*p > n        = [n]
            | n `mod` p == 0 = p:factor (n `div` p) (p:ps)
            | otherwise      = factor n ps 