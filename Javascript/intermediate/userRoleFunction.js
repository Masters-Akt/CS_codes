//Kumar Ankit
/*
Define a function that can answer the role of a user.
A user can be on the following roles:
admin - with all access
subadmin - with access to create/delete courses
testprep - with access to create/delete tests
user - consume all content
other - trial user

Input : getUserRole(name , role)
*/

// function getUserRole(name, role){
//     switch (role) {
//         case "admin":
//             return `${name} is admin with all access.`
//             break; //This is not necessary as return is already usad.
//         case "subadmin":
//             return `${name} is subadmin with access to create and delete courses.`
//             break;
//         case "testprep":
//             return `${name} is a testprep with access to create and delete tests.`
//         case "user":
//             return `${name} is a user to consume content.`
//         default:
//             return `${name} is a trial user.`
//             break;
//     }
// }

var getUserRole = function (name, role){
    switch (role) {
        case "admin":
            return `${name} is admin with all access.`
            break; //This is not necessary as return is already usad.
        case "subadmin":
            return `${name} is subadmin with access to create and delete courses.`
        case "testprep":
            return `${name} is a testprep with access to create and delete tests.`
        case "user":
            return `${name} is a user to consume content.`
        default:
            return `${name} is a trial user.`
    }
}

console.log(getUserRole("Ankit", "testprep"));

var getRole = getUserRole("Sammy", "user");
console.log(getRole);