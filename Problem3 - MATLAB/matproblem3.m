x = 600851475143;

largestFactor = 0;

for i=2:x
   if mod(x,i) == 0 && isprime(i)
        largestFactor = i
   end
end