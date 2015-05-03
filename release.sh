#!/bin/bash
# copy all components from working copy
function copy_from_working_version(){
    ( cd ~/work/MatrixLib/
	mkdir ~/work/allbio/MatrixLib
	cp -r cmake README CMakeLists.txt Doxyfile.in  *.cpp *.h *.c ~/work/allbio/MatrixLib
    )
    ( cd ~/work/dpln/src/bioh5/br.allin1
	mkdir ~/work/allbio/bioh5
	cp -r cmake README CMakeLists.txt Doxyfile.in  *.cpp *.h *.c ~/work/allbio/bioh5
    )
    ( cd ~/work/dpln/src/feature_util
	mkdir ~/work/allbio/feature_util
	cp -r cmake README CMakeLists.txt Doxyfile.in  *.cpp *.h *.c ~/work/allbio/feature_util
    )
    ( cd ~/work/dpln/src/pnn1v2/
	mkdir -p ~/work/allbio/pnn1v2
	cp -r cmake README CMakeLists.txt Doxyfile.in  *.cpp *.h *.c *.pl ~/work/allbio/pnn1v2
    )
    
    ( cd ~/work/pdbtools
	mkdir -p ~/work/allbio/pdbtools
	cp -r *.sh *.pm math ~/work/allbio/pdbtools
    )
    
    ( cd ~/work/proj.rna/release
	mkdir -p ~/work/allbio/rnatreefolder
	cp -r * ~/work/allbio/rnatreefolder
    )
}
#make clean files and upload to github
#echo "Make test"
#./setup.sh

# Tarball 
#(cd ~/work ; tar czf zybio.tgz allbio )

#exit 0
# Push remote Github
function push_all_to_github(){
    mkdir  ~/work/allbio.release
    rm ~/work/allbio.release/* -rf 
    cd ~/work/allbio.release/
    cp -r ~/work/allbio/* . 
    git init
    git add *
    git commit -m 'init'
    git remote add zygithub git@github.com:Indicator/raptorx-zy
    git push -f zygithub master
}


## Main 
copy_from_working_version
push_all_to_github

