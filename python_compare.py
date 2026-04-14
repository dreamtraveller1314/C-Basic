import time

start_time = time.time()

total_sum = 0
for i in range(1000000):
    total_sum += i

end_time = time.time()

print(f"Python Result: {total_sum}")
print(f"Python Time taken: {end_time - start_time:.6f} seconds")