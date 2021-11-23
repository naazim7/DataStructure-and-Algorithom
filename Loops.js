//Basic For Loop for Printing Natural Numbers


for (let i = 0; i < 20; i++) {
    console.log(i)
}

//Basic For Loop For Printing even Number


for (let i = 1; i < 20; i++) {
    if (i % 2 == 0) {
        console.log(i)
    }

}
//Basic For Loop for Printing Odd Number

for (let i = 1; i < 20; i++) {
    if (i % 2 != 0) {
        console.log(i)
    }

}

//ForEach Loop

let arr = [4, 7, 65, 6, 7, 8, 5, 4];
console.log(arr)

arr.forEach((a) => {
    a = a + 2;
    console.log(a)
})

let obj = {
    name: "Nazim",
    roll: 19701057,
    dis: "Feni",
    obj2: { 
        name2: "nazims",
        id: 1455555,
        game: ['coc','fjdkfj','Live']

    }
}





let key = Object.keys(obj.obj2)


console.log(key.length)
console.log(obj.obj2.game[2])


//For in loop

for(const u in obj)
{
    console.log(u)
}

