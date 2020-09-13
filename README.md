# sharepoint

A idea sharing space

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


## stocks

Experience of stocks

add new case : test-401
