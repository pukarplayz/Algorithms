var number1 = 0;
var number2 = 1;
var number3 = 2;

if(number1> number2 && number1 > number3){
    console.log("Number1 is Greater than Number2 and Number3 ");
}

else if(number2> number1 && number2 > number3){
    console.log("Number2 is Greater than Number1 and Number3 ");
}

else if(number3> number1 && number3 > number2){
    console.log("Number3 is Greater than Number1 and Number2 ");
}
else {
    console.log("All are equal");
}