function createtask(){

    var task = document.createElement("div");
    task.className="tasks";
     var mainrasks=document.getElementById("maintask");
     mainrasks.appendChild(task);

    var data = document.createElement("h1");
    task.appendChild(data);
    var inputs = document.getElementById("searchinput");
   data.textContent= inputs.value;

    
    


}