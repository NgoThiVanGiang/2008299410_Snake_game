# 📝 Commit & Branch Conventions

## ✅ Commit Messages
We follow the **Conventional Commits** standard to keep commit history clear and consistent.  

**Types:**
- `feature`: A new feature  
- `fix`: A bug fix  
- `chore`: Maintenance tasks (no production code changes)  
- `docs`: Documentation changes only  
- `refactor`: Code changes that neither fix a bug nor add a feature  
- `perf`: Performance improvements  
- `test`: Adding or updating tests  
- `build`: Changes to the build system or external dependencies  
- `ci`: Changes to CI/CD configuration files or scripts  

**Examples:**
- `feature: add new difficulty level "Insane"`  
- `fix: correct score reset bug on restart`  
- `docs: update README with setup instructions`  

---

## 🌿 Branch Naming
Branches must follow these prefixes to indicate their purpose:

- `feature/<name>` → For new features  
- `fix/<name>` → For bug fixes  
- `hotfix/<name>` → For urgent fixes in production  
- `release/<version>` → For preparing a new release  

**Examples:**
- `feature/add-main`  
- `fix/input-lag`  
- `hotfix/crash-on-start`  
- `release/v1.1.0`  
