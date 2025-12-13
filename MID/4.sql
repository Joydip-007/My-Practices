USE hr;

SELECT 
    job_id,
    job_title,
    min_salary,
    max_salary,
    (max_salary - min_salary) AS SALARY_RANGE
FROM JOBS
WHERE (MAX_SALARY - MIN_SALARY) = (
    SELECT MAX(MAX_SALARY - MIN_SALARY)
    FROM JOBS
);
