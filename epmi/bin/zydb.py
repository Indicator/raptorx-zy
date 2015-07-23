import pymongo as pm

client = pm.MongoClient('cruncher.ttic.edu', 27017)
db = client['zydb']
db.authenticate('zywang', open("/home/zywang/.ssh/mongodb","r").readline().rstrip())
tmscore=db["tmscore"]
tmscore.ensure_index( [("native",1),("decoy",1)], background=True )
tmscore.ensure_index([("native",pm.HASHED)], background=True  )
# we can try use two indices to accelerate.

#tmscore.drop_indexes()
#collection = db['test2']
#a={"user":"zywang","password":"1234"}
#collection.insert(a)
#dd=collection.find_one({"user":"zywang"})
#print dd["password"]

# create db in mongo CLI
# use zydb
# db.auth("zywang","pwd")


def testmongodb():
    c=db.test2
    c=db["test2"]
    a={"user":"zywang","password":"1234"}
    c.insert(a)
    print c.find_one({"user":"zywang"})["_id"]
    print c
    res=[1,2,3,4]
    resname=[s.lower() for s in ["a","b","c","D"]]
    dd=dict(zip(resname,res))
    dd.update({"e":5})
    print dd
    c=db.test2
    c.insert(dd)
    res2=c.find_one({"a":1,"e":5})
    c2=db["test3"]
    res2=c2.find_one({"a":1,"e":5})

    print res2
if __name__ == '__main__':
        #main()
        print "start"
        testmongodb()
        print "end"
        
        from ProteinUtil import *
        TMscore()._test_tmscore()
        
