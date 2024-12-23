  var array = [
    // {
    //     id:1,
    //     discription:"task name ",
    //     priority_level:"high"
    // }
  ]

  function addtask()
  {
    

        var id = document.getElementById("numberid").value ;
        var discription = document.getElementById("task").value ;
        var prioritylevel = document.getElementById("priority").value ;

        var tasks ={
            id:id,
            discription:discription,
            priority_level:prioritylevel
        }

        window.alert("task added sucessfully !!!!!!!")

        array.push(tasks);

        var taskcontainer = document.getElementById("task_container")
        taskcontainer.innerHTML ="";

        array.forEach( data =>
            {
                  var taskcontainer = document.getElementById("task_container");
          
                  var taskdiv = document.createElement("div");
                  taskdiv.className = "task-div";
                  taskcontainer.appendChild(taskdiv);
          
                  var id= document.createElement("p");
                  id.className ="task-id";
                  id.textContent = data.id;
                  taskdiv.appendChild(id);
          
                  var task = document.createElement("p");
                  task.className ="task-content"
                  task.textContent = data.discription;
                  taskdiv.appendChild(task);
          
                  
                  var  prioritytask = document.createElement("p");
                  prioritytask.className ="task-priority"
                  prioritytask.textContent = data.priority_level;
                  taskdiv.appendChild(prioritytask);  
          
            }
            )  
       
  }

  function remove(){
    array.pop();
    alert("task removed sucessfully !!!!!");

    var taskcontainer = document.getElementById("task_container")
    taskcontainer.innerHTML ="";

    array.forEach( data =>
        {
              var taskcontainer = document.getElementById("task_container");
      
              var taskdiv = document.createElement("div");
              taskdiv.className = "task-div";
              taskcontainer.appendChild(taskdiv);
      
              var id= document.createElement("p");
              id.className ="task-id";
              id.textContent = data.id;
              taskdiv.appendChild(id);
      
              var task = document.createElement("p");
              task.className ="task-content"
              task.textContent = data.discription;
              taskdiv.appendChild(task);
      
              
              var  prioritytask = document.createElement("p");
              prioritytask.className ="task-priority"
              prioritytask.textContent = data.priority_level;
              taskdiv.appendChild(prioritytask);  
      
        }
        )
  }


  function  filtered_data()
  {
       var data=array.filter( elem =>
      {
          return elem.priority_level === "high";
      }
      )
  
      console.log(data);
  
      data.forEach( data =>
          {
                var taskcontainer = document.getElementById("task_container");
        
                var taskdiv = document.createElement("div");
                taskdiv.className = "task-div";
                taskcontainer.appendChild(taskdiv);
        
                var id= document.createElement("p");
                id.className ="task-id";
                id.textContent = data.id;
                taskdiv.appendChild(id);
        
                var task = document.createElement("p");
                task.className ="task-content"
                task.textContent = data.discription;
                taskdiv.appendChild(task);
        
                
                var  prioritytask = document.createElement("p");
                prioritytask.className ="task-priority"
                prioritytask.textContent = data.priority_level;
                taskdiv.appendChild(prioritytask);  
        
          }
          )
  }