// do sum of all value of an array with use of map, reduce and for-loop.

let array = [1, 2, 3, 4, 5];

// Using Map

let sum = array.map(element => element).reduce((acc, cValue) => acc + cValue, 0);
console.log(sum);

// let sum1 = array.reduce((acc, cValue) => acc + cValue, 0);
// console.log(sum1);

let sum1 = 0;
for (let i = 0; i < array.length; i++){
    sum1 += array[i];
}
console.log(sum1)