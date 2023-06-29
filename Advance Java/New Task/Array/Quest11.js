// sort a array in acending decending.

let array = [1, 2, 5, 7, 4, 6, 3];

// Sort in ascending order.
let ascArray = array.sort((a, b) => a - b);
console.log("Ascending===> ",ascArray);

let decArray = array.sort((a, b) => b - a);
console.log("descending===> ",decArray);