// print a array till element value not gratter then 100

let array = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130];
for (let i = 0; i < array.length; i++) {
    if(array[i] > 100) {
        break;
    }
    console.log("Value==>", array[i]);
}