FROM ubuntu:22.04

MAINTAINER CS410.net Version: 0.1

Add converter.cc converter.cc

RUN apt-get update
RUN apt-get install -y g++
RUN g++ converter.cc -o converter

ENTRYPOINT ["./converter"]
