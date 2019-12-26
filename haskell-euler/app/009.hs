

f009' = [a*b*c | a<-[1..], b<-[a..], c<-[b..], a^2+b^2==c^2, a+b+c==10000]

tri l = [[a,b,c] | m <- [2..limit],
                   n <- [1..(m-1)],
                   let a = m^2-n^2,
                   let b = 2*m*n,
                   let c = m^2+n^2,
                   a+b+c == l]
    where limit = floor. sqrt. fromIntegral$ l

f009 = product. head. tri