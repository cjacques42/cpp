#!/usr/bin/python
import sys

if len(sys.argv) < 1:
    print 'usage: > python script.py <cpp_file_name>'

fileName = sys.argv[1]
className = fileName.split('.')[-2].split("/")[-1]

print 'classname:' +  className

def printGetterSettersForLine(line):
    syntax = line.strip().split(';')[0]
    words = syntax.split()
    if len(words) != 2:
        return
    getter = words[0] + ' ' + className + '::get' + words[1].title() + '() const\n{ \n'
    getter = getter + '     return ' + words[1] + ';\n'
    getter = getter + '}\n';
    print getter

with open(fileName) as f:
        lines = f.readlines()
        for line in lines:
            printGetterSettersForLine(line)
