// In javascript sorting use Quick Sort


let arr=[4,7,2,7,8,9,2,1,2,0]
arr.sort()
console.log(arr)


//The Problem arise when we have negative value in an array

let arr2=[-4,-8,-4,2,0,4,5,7,1,4,8,6]


// arr2.sort()
// console.log(arr2)

// -4, -4, -8, 0, 1,
//    2,  4,  4, 5, 6,
//    7,  8
// wrong sort 


arr2.sort(function(a,b){
    if (a>b)
    {
        return 1;
    }
    else if(a<b)
    {
        return -1;
    }
    else return 0;
})

console.log(arr2)


// finally It working fine: output is [
//     -8, -4, -4, 0, 1,
//      2,  4,  4, 5, 6,
//      7,  8
//   ]


// if we want decending order we have to shuffle return 1 and -1
arr2.sort(function(a,b){
    if (a>b)
    {
        return -1;
    }
    else if(a<b)
    {
        return 1;
    }
    else return 0;
})

console.log(arr2)


// [
//     8,  7, 6, 5,  4,
//     4,  2, 1, 0, -4,
//    -4, -8
//  ]
 