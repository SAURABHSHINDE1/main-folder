var tasks=[
    {
        name:"Saurabh",
        task:"create a nav bar"
    },
    {
        name:"Rohan",
        task:"create a login page"
    },
    {
        name:"Priya",
        task:"create a registration page"
    },
    {
        name:"Ravi",
        task:"create a to do list"
    },
    {
        name:"Rahul",
        task:"create a calculator"
    },
    {
        name:"Rohit",
        task:"create a weather app"
    },
    {
        name:"Ramesh",
        task:"create a game"
    }
];

tasks.forEach( data=>
{
    var taskcontainer=document.querySelector(".wrapper")

    var task=document.createElement("div");
    task.className="task";
    taskcontainer.appendChild(task);
    
    var name=document.createElement("h1");
    name.textContent=data.name;
    task.appendChild(name);
    
    var taskdescription=document.createElement("p");
    taskdescription.textContent=data.task;
    task.appendChild(taskdescription);

}
)