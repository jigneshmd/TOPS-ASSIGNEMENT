const fs = require("fs")


const addData = (data)=>{

     const alldata = getData();  

    alldata.push(data)
    const mydata = JSON.stringify(alldata)
    fs.writeFile("data.json",mydata,()=>{
        console.log("data inserted succesfully :");
    })
    console.log(data); //data print 
}

const viewFile = ()=>{
    
    const alldata = getData()
    console.log(alldata);
}

const getData = ()=>{

   try {
    const data = fs.readFileSync("data.json","utf-8")
//    console.log(data.json);
const mydata = JSON.parse(data)
return mydata;

   } catch (error) {
        return[];
   }
}




module.exports={addData,viewFile}