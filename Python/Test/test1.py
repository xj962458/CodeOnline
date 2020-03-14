class student:
    name=''
    age=0
    score=0

    def __init__(self,name,age,score):
        self.name=name
        self.age=age
        self.score=score

    def GetInfo(self,name,age,score):
        self.name=name
        self.age=age
        self.score=score

    def PrintInfo(self):
        print(self.name+'\t'+str(self.age)+'\t'+str(self.score))

xj=student("武新纪",20,99)
fyt=student('傅玉婷',19,100)
ww=student('武伟',12,99)
print("学生信息如下：")
print("姓名\t年龄\t成绩")
xj.PrintInfo()
fyt.PrintInfo()
ww.PrintInfo()
