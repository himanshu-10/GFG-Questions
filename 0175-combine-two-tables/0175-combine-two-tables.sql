# Write your MySQL query statement below



select P.firstName,P.lastName ,A.city,A.state
from person as P left join address as A 
on P.personId = A.personId