// Reverse array using loop method
let array = [1, 2, 3, 4, 5];
let length = array.length;

for (let i = 0; i < Math.floor(length / 2); i++) {
  let temp = array[i];
  array[i] = array[length - 1 - i];
  array[length - 1 - i] = temp;
}

console.log("loop",array);