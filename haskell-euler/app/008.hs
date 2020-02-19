import Data.Char
import Data.List

main = f008t

f008 = do
    str <- readFile "008.txt"
    print. maximum. map product
         . foldr (zipWith (:)) (repeat [])
         . take 13. tails. map (fromIntegral. digitToInt)
         . concat. lines$ str


f008t = do
    str <- readFile "008.txt"
    print. maximum. map product
         . transpose
         . take 13. tails. map (fromIntegral. digitToInt)
         . concat. lines$ str