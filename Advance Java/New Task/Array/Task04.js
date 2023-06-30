// ['i','am', 'Akshit'] ==> want ['tihskA','ma','i'  ]
// by use of map, loop and reducer

let arr = ['i', 'am', 'Akshit'];
let revArr = arr
    .map((_, index) => arr[arr.length - 1 - index])
    .map((word) => word.split('').reverse().join(''))
    .reduce((acc, curValue) => [...acc, curValue], []);

    console.log("ReverseArray===> ",revArr);