SELECT 
    sell_date, count(distinct product) AS num_sold,  
    GROUP_CONCAT(distinct product order by product) as products 
FROM 
    activities 
GROUP BY 
    sell_date;