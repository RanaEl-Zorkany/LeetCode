/* Write your T-SQL query statement below */
SELECT * FROM
(
    SELECT score, DENSE_RANK() OVER(ORDER BY score DESC) AS rank
    FROM Scores
) AS NEWTABLE