<?php
// Database configuration
$host = "localhost";
$user = "root";
$password = ""; // Default XAMPP MySQL password is empty
$database = "student_db";

// Create connection
$conn = new mysqli($host, $user, $password, $database);

// Check connection
if ($conn->connect_error) {
    http_response_code(500);
    die("Connection failed: " . $conn->connect_error);
}

// Set response header
header('Content-Type: text/html; charset=utf-8');

// Handle POST request (AJAX registration)
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    // Get JSON data
    $json = file_get_contents('php://input');
    $data = json_decode($json, true);
    
    // Validate data
    if (!$data || !isset($data['firstName']) || !isset($data['lastName']) || 
        !isset($data['gender']) || !isset($data['email']) || 
        !isset($data['password']) || !isset($data['number'])) {
        http_response_code(400);
        echo "<h3 style='color:red;text-align:center;'>Error: Missing required fields</h3>";
        exit;
    }
    
    // Extract and sanitize form data
    $firstName = $conn->real_escape_string($data['firstName']);
    $lastName = $conn->real_escape_string($data['lastName']);
    $gender = $conn->real_escape_string($data['gender']);
    $email = $conn->real_escape_string($data['email']);
    $password = $conn->real_escape_string($data['password']);
    $number = $conn->real_escape_string($data['number']);
    
    // Insert query
    $sql = "INSERT INTO registration (firstName, lastName, gender, email, password, number) 
            VALUES ('$firstName', '$lastName', '$gender', '$email', '$password', '$number')";
    
    if ($conn->query($sql) === TRUE) {
        echo "<h2 style='color:green;text-align:center;'>Registration Successful!</h2>";
    } else {
        http_response_code(500);
        echo "<h3 style='color:red;text-align:center;'>Error: " . $conn->error . "</h3>";
    }
    
    $conn->close();
    exit;
}

// If not a POST request, return error
http_response_code(405);
echo "<h3 style='color:red;text-align:center;'>Error: Method not allowed</h3>";
$conn->close();
?>