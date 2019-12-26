import Data.Char
import Data.List

f008 = do
    str <- readFile "008.txt"
    print. maximum. map product
         . foldr (zipWith (:)) (repeat [])
         . take 13. tails. map (fromIntegral. digitToInt)
         . concat. lines$ str

wtf = do
    str <- readFile "008.txt"
    print{--. foldr (zipWith (:)) (repeat []). take 13. tails--}
         . map (fromIntegral. digitToInt). concat. lines$ str