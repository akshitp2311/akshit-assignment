// 1. ['i','am', 'urvish'] ==> want ['urvish','am','i']
// by use of map, loop and reducer 
// 2. want "i am urvish" without use join method

let arr = ['i', 'am', 'Akshit'];
let revArr = arr
    .map((_, index) => arr[arr.length - 1 - index])
    .reduce((acc, curValue) => [...acc, curValue], []);

    console.log("ReverseArray===> ",revArr);

// loop
// let arr = ['i', 'am', 'Akshit'];
let result = '';
for (let i = 0; i < arr.length; i++){
    result += arr[i];
    if (i !== arr.length - 1){
        result += ' ';
    }
}
console.log("LoopArray ===>  ",result);