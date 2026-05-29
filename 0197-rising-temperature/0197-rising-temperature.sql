    select w2.id
    from Weather w1
    join Weather w2
        on w2.recordDate = DateAdd(day, 1, w1.recordDate)
    where w2.temperature > w1.temperature
