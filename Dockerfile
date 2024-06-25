FROM jenkins/jenkins:latest
USER root

RUN apt-get update && apt-get install -y \
    cmake \
    g++ \
    cppcheck \
    wget \
    git \
    lcov \
    libgtest-dev \
    build-essential
    
RUN rm -rf /usr/src/gtest

USER jenkins
