const yargs=require("yargs");
const file = require("./file")

yargs.command({ 
    command:"add",
    builder:{
        name:{
            type:String
        },
        email:{
            type:String
        }
    },
    handler: function(argv){
        const data = {
            name : argv.name, 
            email : argv.email
        }
        // console.log(data);
        file.addData(data)
    }
})

yargs.command({
    command:"view",
    handler: function(argv) {
        file.viewFile()
    }
})

yargs.argv
