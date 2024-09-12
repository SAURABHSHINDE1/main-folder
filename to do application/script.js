function createtask(){

    var task = document.createElement("div");
    task.className="tasks";
     var maintasks=document.getElementById("maintask");
     maintasks.appendChild(task);

    var data = document.createElement("h1");
    task.appendChild(data);
    var inputs = document.getElementById("searchinput");
   data.textContent= inputs.value;

   var checkbox=document.createElement("input");
   checkbox.type="checkbox";
   task.appendChild(checkbox);
}



function checktask(){
  
    var heading=document.getElementById("heading");
    var data=document.querySelector("h1");
   
var checkbox1=document.getElementById("check");
if(checkbox1.checked)
{
    heading.style.textDecoration="line-through";
    data.style.textDecoration="line-through";
    
}
else
{
    heading.style.textDecoration="none";
    data.style.textDecoration="none ";
}
}


    
    


