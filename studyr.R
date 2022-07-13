# 파일에서 데이터 불러오기
bubble <- read.table("D:/김인환/정렬 실행 시간/bubble.txt", header = FALSE, sep = " ")
insertion <- read.table("D:/김인환/정렬 실행 시간/insertion.txt", header = FALSE, sep = " ")
quick <- read.table("D:/김인환/정렬 실행 시간/quick.txt", header = FALSE, sep = " ")

# 101번째 데이터 삭제
bubble <- bubble[,-c(101)]
insertion <- insertion[,-c(101)]
quick <- quick[,-c(101)]

# 평균값 구해서 저장
bubble_mean <- apply(bubble,1,mean)
insertion_mean <- apply(insertion,1,mean)
quick_mean <- apply(quick,1,mean)

# 구한 평균값을 데이터 프레임으로 나타냄
heads <- c("bubble", "insertion", "quick")
means <- c(bubble_mean, insertion_mean, quick_mean)
result <- data.frame(row.names = heads, means)

result

