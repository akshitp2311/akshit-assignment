let sortArr = [1, 30, 32, 4, 21, 100000];

sortArr.sort(function(a, b) {
  return a - b;
});

console.log(sortArr);