// task-2
// [1,2,3,6,7,9,3,56,8]

// 1. give all value which can devided by 2 - not use filter
// 2. give all value above 3 by use of filter
// 3. give index of 56
// 4. give true/false result when check given vale is exists in array or not

// 01.
const array = [1, 2, 3, 6, 7, 9, 3, 56, 8];
const Divideby2 = [];
for ( let i = 0; i < array.length; i++) {
    if (array[i] % 2 === 0) {
        Divideby2.push(array[i]);
    }
}
console.log("Divide By 2 ===> ", Divideby2);



// 02.
const above3 = array.filter((value) => value > 3);
console.log("Above 3===>", above3);



// 03.
const index = array.indexOf(56);
console.log("Index of 56 ==>", index);



// 04.
const vEx = array.includes(56);
console.log("Value Exist == >", vEx);