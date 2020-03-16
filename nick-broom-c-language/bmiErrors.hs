average:: [Float] -> Float
average xs = product xs / fromIntegral(length xs)

bmiCalculate :: (Float, Float) -> Float
bmiCalculate (w, h) = w / (h^ 2)

bmiFamilyAverage :: [(Float, Float)] -> Float
bmiFamilyAverage xs = average (map bmiCalculate xs)