const uid = "abc123";
var firstName = "Kumar";
var lastName = "Ankit";
var email = "myemail@gmail.com";
var password = "123456";
var confirmPassword = "123456";
var country = "India";
var state = "Bihar";
var courseCount = 0;
var isLoggedInFromGoogle = false;
var isLoggedInFromFacebook = false;
console.log(`
    UID : ${uid}
    First Name : ${firstName}
    Last Name : ${lastName}
    Full Name : ${firstName} ${lastName}
    Email : ${email}
    Country : ${country}
    State : ${state}
    Number of courses taken : ${courseCount}
    Logged In From Google : ${isLoggedInFromGoogle}
    Logged in From Facebook : ${isLoggedInFromFacebook}
`);