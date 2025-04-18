/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
  let cache = new Map();
  let callCount = 0;
  return function (...args) {
    const key = JSON.stringify(args); // Create a key for the cache based on the arguments

    if (cache.has(key)) {
      return cache.get(key); // If result is cached, return it
    } else {
      callCount++; // Increment call count when the function is actually called
      const result = fn(...args);
      cache.set(key, result); // Cache the result
      return result;
    }
  };
}

/**
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1
 */
