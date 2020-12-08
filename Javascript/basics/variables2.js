const uid = "abc123"; //can't change later
var fullName = "Kumar Ankit";
//fullNmae = prompt("Enter your full name: "); But this requires to be attched with web page (using html)
var email = "myemail@gmail.com";
var password = "123456";
var confirmPassword = "123456";
var courseCount = 0;
var isLoggedInFromGoogle = false;
console.log("Full name is : " + fullName); //comma can also be used instead of plus
console.log(uid);
console.log(email);
//interpolation
console.log(`
    With Unique ID: ${uid}
    User is : ${fullName}
    and his email is : ${email}
    and uses the password : ${password}
`);