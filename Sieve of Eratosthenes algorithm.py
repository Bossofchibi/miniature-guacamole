def generate_prime_numbers(n):
    sieve = [True] * (n + 1)
    sieve[0] = sieve[1] = False

    for i in range(2, int(n ** 0.5) + 1):
        if sieve[i]:
            for j in range(i * i, n + 1, i):
                sieve[j] = False

    primes = [x for x, is_prime in enumerate(sieve) if is_prime]
    return primes

# Generate prime numbers up to 100
prime_numbers = generate_prime_numbers(100)
print(prime_numbers)
