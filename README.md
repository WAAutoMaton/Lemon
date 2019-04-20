# Lemon
为 OI 赛制设计的简易评测环境。

本评测环境没有沙盒，请不要用于评测不可信的代码。

原版作者为 [@zhipeng-jia](https://github.com/zhipeng-jia)，此版本为修改版本。

由于未在 Windows 平台和 MacOS 平台做过适配，目前此版本仅支持 Linux。

## 该版本特性

* 支持选手目录下建立子文件夹。
* 修改了最大内存限制和最大时间限制。
* Linux 平台自动开无限栈（需要系统支持）。

## 安装

直接下载 release 中的静态编译包，或按照下面的方式编译。

## 编译
首先安装 Qt5 SDK。

然后依次执行以下命令：

```shell
git clone https://github.com/WAAutoMaton/Lemon
cd Lemon
lrelease -verbose Lemon_zh_CN.ts Lemon_zh_CN.qm
qmake lemon.pro
make
```

