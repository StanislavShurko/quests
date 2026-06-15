function isPalindrome(s: string): boolean {
  const sNormalized = s.toLowerCase().replace(/[^a-z0-9]/g, '');
  const sReversed = sNormalized.split('').reverse().join('');
  return sNormalized === sReversed;  
};
