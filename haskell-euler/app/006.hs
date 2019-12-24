

f006 = abs$ squreOfSum - sumOfSquare
    where 
        sumOfSquare = sum$ map (\a -> a*a) [1..100]
        squreOfSum  = (\a -> a*a)$ sum [1..100]

f006' = abs$ sum [1..100]^2 - sum (map (^2) [1..100])