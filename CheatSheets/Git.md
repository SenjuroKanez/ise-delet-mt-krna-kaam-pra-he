# Git Commands Guide for Learners

This file lists the most common Git commands, organized by their function.

---

## 🚀 Getting Started & Setup

These commands are for setting up Git for the first time or starting a new project.

* `git config --global user.name "Your Name"`
    * Sets the name that will be attached to your commits. This is a **one-time setup** on any new machine.

* `git config --global user.email "youremail@example.com"`
    * Sets the email that will be attached to your commits. Also a **one-time setup**.

* `git init`
    * Initializes (creates) a new, empty Git repository in your current folder. This is the first step to creating a new project.

* `git clone <url>`
    * Downloads a copy (a "clone") of an existing repository from a remote URL (like GitHub) to your local machine.

---

## ✍️ The Basic Daily Workflow

These are the commands you'll use 90% of the time.

* `git status`
    * Shows the current status of your repository. It tells you which files are new, modified, or "staged" (ready to be saved). This is your most-used command.

* `git add <file-name>`
    * Adds a specific file to the "staging area." Think of the staging area as a "shopping cart" for your next commit (save).

* `git add .`
    * A shortcut to add **all** new and modified files in the current folder (and subfolders) to the staging area.

* `git commit -m "Your descriptive message"`
    * Takes all the files from the staging area and saves a permanent "snapshot" (a commit) of them in your project's history. The message describes *what you changed*.

* `git log`
    * Shows a list of all the commits you've made, starting with the most recent. This is your project's history.
    * (Press `q` to quit the log view).

---

## ☁️ Working with Remotes (like GitHub)

These commands are for syncing your local project with a remote server (e.g., GitHub, GitLab).

* `git remote -v`
    * Lists all the remote connections (URLs) your local repository knows about. (`-v` stands for "verbose" and shows the URLs).

* `git remote add <name> <url>`
    * Adds a new remote connection. By convention, the main remote is usually named `origin`.
    * Example: `git remote add origin https://github.com/user/repo.git`

* `git fetch <remote-name>`
    * Downloads all the changes (new branches, new commits) from the remote repository but **does not** merge them into your local branches. This is a safe way to see what's new.

* `git pull <remote-name> <branch-name>`
    * Downloads changes from the remote **and** automatically tries to merge them into your current branch. This is a combination of `git fetch` and `git merge`.
    * Example: `git pull origin main`

* `git push <remote-name> <branch-name>`
    * Uploads (pushes) all your local commits from your specified branch to the remote repository, sharing your changes with others.
    * Example: `git push origin main`

---

## 🌿 Branching & Merging

Branches let you work on new features or bug fixes in isolation without affecting the main codebase.

* `git branch`
    * Lists all the branches in your local repository. The one with a `*` next to it is your currently active branch.

* `git branch <new-branch-name>`
    * Creates a new branch with the given name, based on your current commit.

* `git switch <branch-name>`
    * Switches your "workspace" to the specified branch. (This is the modern command; you may also see the older `git checkout <branch-name>`).

* `git switch -c <new-branch-name>`
    * A shortcut that **c**reates a new branch *and* switches to it in one step.

* `git merge <branch-name>`
    * Combines the history of the specified branch into your *current* branch. This is how you integrate a new feature back into the `main` branch.

* `git branch -d <branch-name>`
    * Deletes the specified local branch. (You can't delete the branch you are currently on).

---

## ↩️ Undoing Changes

These commands help you fix mistakes. **Be careful with commands like `reset`!**

* `git restore <file-name>`
    * Discards all changes you've made to a file in your *working directory* (the files you see in your folder), restoring it to how it looked at the last commit.

* `git restore --staged <file-name>`
    * Removes a file from the "staging area" (un-adds it) but keeps the changes in your working directory. Use this if you `git add` a file by accident.

* `git revert <commit-hash>`
    * "Undoes" a past commit by creating a **new commit** that does the opposite. This is the *safest* way to undo a change that has already been shared with others.

* `git reset <commit-hash>`
    * **WARNING: Advanced!** Moves your current branch back to a previous commit.
    * `--soft`: Keeps all your changes.
    * `--mixed` (default): Keeps your changes but unstages them.
    * `--hard`: **DANGER!** Discards all changes since that commit.

* `git clean -fd`
    * **DANGER!** Deletes all *untracked* files and directories from your project folder. This is useful for cleaning up build files, but it's permanent.

---

## 🗂️ Stashing Changes

Use this when you need to quickly switch branches but aren't ready to commit your current work.

* `git stash`
    * Temporarily saves all your uncommitted (staged and unstaged) changes and cleans your working directory.

* `git stash pop`
    * Re-applies the most recent set of stashed changes and removes them from your stash list.

* `git stash list`
    * Shows all the stashed "snapshots" you have saved.

---

### ⭐ Pro-Tip for Learners

For *any* command, you can get the full official documentation by typing:
`git <command-name> --help`
(e.g., `git merge --help`)