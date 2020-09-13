# GIT using experience
## command line mode to generate repsoitory
    git remote add origin https://github.com/duanmingpy/helloworld.git
    git push -u origin master

### 暂时先总结一下创建与合并命令：
    查看分支git branch
    创建分支git branch name
    切换分支git checkout name
    创建+切换分支git checkout -b name
    合并某分支到当前分支git merge name
    删除分支git branch -d name
    查看提交历史 git log --graph --pretty=oneline --abbrev-commit

### test branches
    将当前分支影藏起来，转到其他问题解决，然后啊在回来出来当前分支
    git stash
    git checkout new_branch
    .....
    git add ...
    git commit -m "xxx"
    git check master
    git merge --no-off -m "...." new_branch
    git stash list查看隐藏的工作现场
    git checkout original_branch
#### recovery
        恢复的方式有两种：
        1git stash apply，这种恢复方式恢复后stash内容并不删除，需要使用git stash drop来删除。
        2另一种方式是使用git stash pop，恢复的同时把stash内容也删除了。

#### check logs
    git log --stat 显示文件更改列表
    git log -p filepath 查看某个文件的详细修改
    git log -L start,end:filepath 查看某个文件某几行范围内的修改记录
    git log --stat commitId 或者 git show --stat commitId 查看某一次提交的文件修改列表
    git log --graph --pretty=oneline --abbrev-commit  树形结构图 分支合并图、一行显示、提交校验码缩略显示

#### Summary
    
    总结：
    Git基本常用命令如下：
    创建目录mkdir
    显示当前目录的路径：pwd
    把当前的目录变成可以管理的Git仓库：git init
    把xx文件添加到暂存区：git add xx
    提交文件：git commit -m "注释"
    查看仓库状态git status
    查看xx文件修改了哪些内容git diff xx
    查看历史记录git log
    回退版本git reset --hard HEAD^或者git reset --hard HEAD~50
    查看文件cat xx
    查看历史记录的版本号idgit reflog
    把xx文件在工作区的修改全部撤销git checkout -- xx
    删除xx文件rm xx
    关联一个远程库git remote add origin 地址
    把当前master分支推送到远程库git push -u(第一次要用-u 以后不需要) origin master
    从远程库中克隆https://github.com/duanmingpy/remote_repo.git
    创建dy分支并切换到git checkout –b dy
    查看当前所有分支git branch
    切换回master分支git checkout master
    在当前的分支上合并dy分支git merge dy
    删除dy分支git branch –d dy
    创建分支git branch name
    把当前的工作隐藏起来，等以后恢复现场后继续工作git stash
    查看所有被隐藏的文件列表git stash list
    恢复被隐藏的文件，但是内容不删除git stash apply
    删除文件git stash drop
    恢复文件的同时删除文件git stash drop
    查看远程库的信息git remote
    查看远程库的详细信息git remote -v
    把master分支推送到远程库对应的远程分支上git push origin master

# set vimdiff replace with git dff
git config --global diff.tool vimdiff
git config --global difftool.prompt false
git config --global alias.d difftool

# set local git acount
git config --global user.mail aaa@xxxx
git config --global user.name yyyyy
