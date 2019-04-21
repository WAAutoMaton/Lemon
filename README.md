# Lemon
为 OI 赛制设计的简易评测环境。

本评测环境没有沙盒，请不要用于评测不可信的代码。

原版作者为 [@zhipeng-jia](https://github.com/zhipeng-jia)，此版本为修改版本。

目前该版本已支持 Windows 和 Linux 平台，由于我没有 Mac 所以没法测试 MacOS平台，如果发现 MacOS 下有 bug 请在 issue 区提出。

## 该版本特性

* 支持选手目录下建立子文件夹。
* 修改了最大内存限制和最大时间限制。
* Linux 平台自动开无限栈（需要系统支持）。

## Flags:

* 从 syzoj 的 data.yml 中导入数据。
* 有好的建议欢迎在 issue 区中提出。

## 安装

直接下载 release 中的预编译包（目前已有 Windows 和 Linux 平台的预编译包），或按照下面的方式编译。

## 编译
首先安装 Qt5 SDK。

然后依次执行以下命令：

```shell
git clone https://github.com/WAAutoMaton/Lemon
cd Lemon
qmake lemon.pro
make
```

