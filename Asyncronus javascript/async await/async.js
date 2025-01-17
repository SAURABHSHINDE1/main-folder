async function connectionDB()
{
    try{
        var response = await fetch(`https://jsonplaceholder.typicode.com/todos`);
        var data= await response.json();
        console.log(data);
    }
    catch(err){
        console.log("something Went to wrong!!!!!" + err);
    }
}

connectionDB();