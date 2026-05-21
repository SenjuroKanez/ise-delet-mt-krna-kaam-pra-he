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

## 🔐 SSH Key Setup (for GitHub, GitLab, etc.)

These commands let you connect to GitHub without typing your password every time.

* `ssh-keygen -t ed25519 -C "your@email.com"`

  * Generates a new SSH key for secure authentication.

* `eval "$(ssh-agent -s)"`

  * Starts the SSH authentication agent.

* `ssh-add ~/.ssh/id_ed25519`

  * Adds your private key to the SSH agent.

* `cat ~/.ssh/id_ed25519.pub`

  * Displays your public key — copy this into GitHub → Settings → SSH & GPG Keys.

---

## ✍️ The Basic Daily Workflow

These are the commands you'll use 90% of the time.

* `git status`

  * Shows the current status of your repository.

* `git add <file-name>`

  * Adds a specific file to the staging area.

* `git add .`

  * Adds **all** new/modified files to staging.

* `git commit -m "Your descriptive message"`

  * Saves your staged changes as a commit.

* `git log`

  * Shows your commit history. Press `q` to exit.

---

## ☁️ Working with Remotes (like GitHub)

* `git remote -v`

  * Lists your remotes and their URLs.

* `git remote add <name> <url>`

  * Adds a new remote.

* `git fetch <remote-name>`

  * Downloads changes without merging.

* `git pull <remote-name> <branch-name>`

  * Fetches + merges changes.

* `git push <remote-name> <branch-name>`

  * Uploads your commits.

---

## 🌿 Branching & Merging

* `git branch`

  * Lists local branches.

* `git branch <new-branch-name>`

  * Creates a new branch.

* `git switch <branch-name>`

  * Switches to another branch.

* `git switch -c <new-branch-name>`

  * Creates + switches to a new branch.

* `git merge <branch-name>`

  * Merges the given branch into your current one.

* `git branch -d <branch-name>`

  * Deletes a local branch.

---

## ↩️ Undoing Changes

* `git restore <file-name>`

  * Discards changes in the working directory.

* `git restore --staged <file-name>`

  * Unstages a previously added file.

* `git revert <commit-hash>`

  * Safely undoes a commit by creating a new opposite commit.

* `git reset <commit-hash>`

  * Moves your branch pointer back.

* `git clean -fd`

  * Deletes all untracked files.

---

## 🗂️ Stashing Changes

* `git stash`

  * Temporarily saves uncommitted work.

* `git stash pop`

  * Restores stashed changes.

* `git stash list`

  * Shows all stashes.

---
## ✍️ The Github CLI

These are the commands are for github.

* `gh create repo name`

  * Creates a reposotory on github.
 
---
### ⭐ Pro-Tip for Learners

`git <command-name> --help` → Official documentation for any command.
