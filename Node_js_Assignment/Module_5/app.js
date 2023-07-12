const mongoose = require("mongoose");
const express = require("express");
const app = express();
const PORT = 5000
app.use (express.json())

const dburl = "mongodb+srv://jignesh:jignesh@cluster0.vexxi85.mongodb.net/fatch_api?retryWrites=true&w=majority"

mongoose.connect(dburl).then(() => {
    console.log("DB connected..");
  }).catch((error) => {
      console.log(error);
  })

  const taskrouter = require("./router/taskrouter");
  app.use("/", taskrouter);
  const shoprouter = require("./router/shoprouter");
  app.use("/", shoprouter);
  
  app.listen(PORT, () => {
    console.log("server running on port :" + PORT);
  });