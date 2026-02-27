# Data-Structure

数据结构学习与练习仓库（C++）。

## 1. 项目目标
- 按模块实现常见数据结构。
- 每个模块都满足：可编译、可运行、可验证（最小测试）。
- 用标准 Git 工作流管理迭代。

## 2. 当前内容
- `List.h`：线性表抽象接口。
- `SeqList.h` / `SeqList.tpp`：顺序表模板实现。
- `调用顺序表.cpp`：顺序表调用示例。
- `PD-1.cpp`：草稿/实验文件。

## 3. 目录建议（逐步迁移）
```text
Data-Structure/
  include/           # 头文件
  src/               # 实现与入口
  tests/             # 测试代码
  docs/              # 设计文档与笔记
  README.md
  ROADMAP.md
  SPRINT_TEMPLATE.md
  .gitignore
```

## 4. 快速开始
### 4.1 编译并运行（PowerShell + g++）
```powershell
g++ -std=c++17 -O2 -Wall -Wextra -o output/seq_demo "调用顺序表.cpp"
./output/seq_demo.exe
```

如果你使用 VS Code 的 C/C++ Compile Run 插件，当前输出目录配置在工作区根目录。

## 5. 标准工作流（个人项目简化版）
1. 从 `ROADMAP.md` 选一个任务。
2. 建分支：`feat/<topic>` 或 `fix/<topic>`。
3. 实现 + 本地验证。
4. 提交（Conventional Commits）：
   - `feat: ...`
   - `fix: ...`
   - `docs: ...`
   - `test: ...`
5. 合并回 `main`，并在 `ROADMAP.md` 标记状态。

## 6. 完成标准（Definition of Done）
- 代码可编译、可运行。
- 至少覆盖正常路径和边界路径（最小测试）。
- README 或 docs 补充了用法/说明。
- 无无关二进制文件进入 Git（如 `.exe`）。

## 7. 建议提交规范
```text
feat(seqlist): support dynamic resize
fix(seqlist): guard invalid index in visit
docs(readme): add build and run guide
test(seqlist): add insert/remove boundary cases
```
