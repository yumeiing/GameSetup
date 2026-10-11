# GameSetup
这是一个使用`raylib`/`imgui`的`c++`游戏初始模板。  
用于**快速**地启动一个项目。
## 快速开始
先将仓库克隆到项目文件夹并进入。
使用[xmake](https://github.com/xmake-io/xmake)构建项目。
```shell
xmake r
```
如果看见一个窗口，  
有一个红色方块在左上角，使用`awsd`可以使其移动。  
内部有一个小窗口，可以拖动改变`float`变量的值。  
代表设置成功。
## 使用方法
### 包含文件
|文件|简介|
|----|----|
|[main.cpp](./src/main.cpp)|主文件|
|[Game.h](./src/Game.h)|定义`Game`类|
|[Game.cpp](./src/Game.cpp)|实现`Game`类，主逻辑写在这|
## 使用库
使用`c++23`/[raylib-v6.0](https://github.com/raysan5/raylib)/[rlImGui](https://github.com/raylib-extras/rlImGui)/[imgui-v1.92.7](https://github.com/ocornut/imgui)。

