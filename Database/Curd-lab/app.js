// 1. Import Firebase modules
// Note: Ensure the version numbers (11.x.x) match your requirements
import { initializeApp } from "https://www.gstatic.com/firebasejs/11.1.0/firebase-app.js";
import { getFirestore, collection, addDoc, onSnapshot, deleteDoc, doc } from "https://www.gstatic.com/firebasejs/11.1.0/firebase-firestore.js";

// 2. Your Firebase configuration
const firebaseConfig = {
  apiKey: "AIzaSyAQ6cKGglCjBb8OOoiLDGFPvXXoVU6hhpQ",
  authDomain: "my-project-92fa6.firebaseapp.com",
  projectId: "my-project-92fa6",
  storageBucket: "my-project-92fa6.firebasestorage.app",
  messagingSenderId: "687039878115",
  appId: "1:687039878115:web:80e16e1f4b6799adec06d6",
  measurementId: "G-NFPJWYVVV0"
};

// 3. Initialize Firebase
const app = initializeApp(firebaseConfig);
const db = getFirestore(app);

// 4. Add task 
// We attach it to 'window' so the button in your HTML can "see" it
window.addTask = async function () {
  const taskInput = document.getElementById("taskInput");
  const taskValue = taskInput.value.trim();

  if (taskValue !== "") {
    try {
      await addDoc(collection(db, "tasks"), { 
        name: taskValue,
        createdAt: new Date() // Optional: good for sorting later!
      });
      taskInput.value = "";
    } catch (error) {
      console.error("Error adding task: ", error);
    }
  }
};

// 5. Delete task
// Added to 'window' so the <li> click events can trigger it
window.deleteTask = async function (id) {
  try {
    await deleteDoc(doc(db, "tasks", id));
  } catch (error) {
    console.error("Error deleting task: ", error);
  }
};

// 6. Display tasks (Real-time listener)
const taskList = document.getElementById("taskList");

onSnapshot(collection(db, "tasks"), (snapshot) => {
  taskList.innerHTML = ""; // Clear list before re-rendering
  
  snapshot.forEach((docSnap) => {
    const li = document.createElement("li");
    li.textContent = docSnap.data().name;
    
    // Set up the click-to-delete listener
    li.onclick = () => window.deleteTask(docSnap.id);
    
    // Optional: add a cursor style so users know it's clickable
    li.style.cursor = "pointer";
    
    taskList.appendChild(li);
  });
});