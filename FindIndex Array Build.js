let arr=[4,7,8,8,5,41,2,4]
const findIndex= arr.findIndex(function(value)
{
    return value==41;
})


console.log(findIndex)

//Find Index of an array

function myfindIndex(arr,callback){

    for(let i=0;i<arr.length;i++)
    {
        if(callback(arr[i])){
            return i;
        }
    }
}
const result= myfindIndex(arr,function(value){
    return value==41;
})