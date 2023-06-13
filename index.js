const app = require("express")()

app.get("/", (req, res)=> {

    console.log(req);
for (let index = 0; index < array.length; index++) {
    const element = array[index];
        res.send("res") 
}
})

app.listen(8080, ()=>console.log("Proxy is Listening on 8080"))
