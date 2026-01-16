console.log("Resolved push path:", require.resolve("./Push.cjs"));
const Push = require("./Push.cjs");
console.log("Push import:", Push);
console.log("typeof Push:", typeof Push);


// Level 00 — Shared Behavior (No Inheritance)
console.log("Level 00 JS file loaded");
// Level 00 — Shared Behavior (No Inheritance)

// Entry point function.
// This will intentionally use branching logic.
function sendMessage(type, message, recipient){
    if(type === "sms" || type === "email"){
        console.log("Sending", type, "to", recipient, ";", message);
    }else{
        console.log("Failed to send anything anywhere to anyone");
    }
}
sendMessage("email", "My birthday is tomorrow", "Kim");
let pushMessage = new Push("push", "Hello World!", "World");
pushMessage.send();