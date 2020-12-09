var email = true;
var google = false;
var facebook = false;

// if(email){
//     console.log("Login success from email.");
// }else{
//     console.log("Login failed.");
// }

// if(google){
//     console.log("Login success from google.");
// }else{
//     console.log("Login failed.");
// }
// if(facebook){
//     console.log("Login success from facebook.");
// }else{
//     console.log("Login failed.");
// }

if(email || google || facebook){
    console.log("Login success!");
}else{
    console.log("Login failed!");
}