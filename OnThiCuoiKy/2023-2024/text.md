```mermaid
classDiagram

class Subject {
    - MaSo

} 

class Virus
class SARS-CoV-2
class Ebola
class HIV
Subject o-- Virus
Virus <|-- SARS-CoV-2
Virus <|-- Ebola
Virus <|-- HIV


```