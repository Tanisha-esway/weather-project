const express = require("express");
// const https=require(https);
const bodyparser= require("body-parser");
const app=express();
app.use(bodyparser.urlencoded({extended:true}));
app.get("/",function(req,res){
res.sendFile(__dirname,"/index.html");
});
app.post("/",function(req,res){
console.log(req.body.cityname);
})


app.listen(3000,function(){
  console.log("running");
})
