# Write your MySQL query statement below
Update salary
set sex = 
case sex
 when "f" then "m"
 when "m" then "f"
END