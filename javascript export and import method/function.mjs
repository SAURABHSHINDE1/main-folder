import { students } from './student.js';

 function calculatePercentage(students) {
  

   var stud= students.map(stud =>{
        return{ name: stud.name, 
            percentage: (stud.subjects.reduce((sum, subject) => sum + subject.marks, 0) / (stud.subjects.length * 100)) * 100,
       
    };
        })
    console.log(stud);

  }
  
 
  calculatePercentage(students);

  module.exports = { calculatePercentage, students };

  
   

  
  