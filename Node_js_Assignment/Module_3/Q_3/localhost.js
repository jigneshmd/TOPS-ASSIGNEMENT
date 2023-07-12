const express = require ("express")
const app = express();
const path = require("path")
const PORT = 3000;
const hbs = require("hbs")

const viewpath = path.join(__dirname,"./templetes/views")
app.set("view engine","hbs")
app.set("views",viewpath)

app.get("/", (req,resp)=>{
    resp.render("local")
})

app.listen(PORT, () => {
    console.log("server runing on port: " + PORT);
})
