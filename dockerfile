FROM gcc:latest

RUN apt-get update && \
    apt-get install -y sqlite3 libsqlite3-dev

WORKDIR /app

COPY . .

RUN gcc main.c -o main -lsqlite3

CMD ["./main"]