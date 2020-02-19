
main = print $ f010

f010 = sum (takeWhile(<1000000) primes)

primes = 2:filter (null. tail. primeFactors) [3,5..]
primeFactors n = f n primes
    where f n (x:xs)
            | x^2 > n        = [n]
            | n `mod` x == 0 = x:f n xs
            | otherwise      = f n xs 