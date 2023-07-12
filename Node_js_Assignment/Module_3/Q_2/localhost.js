const express = require("express")
const app = express();
const PORT = 3000;

app.get("/",(req,resp)=>{
    resp.send("Server Conected")
})

app.listen(PORT,()=>{
    console.log("server runing on port:" +PORT);
})