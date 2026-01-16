class Push{
    constructor(type, message, recipient){
        this.type = type;
        this.message = message;
        this.recipient = recipient;
    }
    send(){
        console.log("sending by ", this.type, "message ", this.message, "to : ", this.recipient);
    }
}
module.exports = Push;
