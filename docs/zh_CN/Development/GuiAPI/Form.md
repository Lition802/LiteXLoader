# LiteXLoader - GUI表单界面文档

> 这里API使你可以在游戏中创建、修改或者影响 **GUI界面**

很明显，清晰直观的UI界面有助于玩家快速上手插件的使用，提供良好的用户体验。

## 📊 表单相关 API

对于某个特定的玩家对象`pl`，有以下这些表单接口可用

### 向玩家发送普通表单  

普通表单包含一个标题、一个文本显示框以及若干按钮，可以设置按钮上显示的图标

`pl.sendSimpleForm(title,content,buttons,images,callback)`

- 参数：

  - title : `String`  
    表单标题  
  - content : `String`  
    表单内容
  - buttons : `Array<String,String,...>`  
    各个按钮文本的字符串数组
  - images : `Array<String,String,...>`  
    各个按钮对应的图片路径
  - callback : `Function`  
    玩家选择按钮之后被调用的回调函数。  
- 返回值：发送的表单ID  
- 返回值类型：`Integer`
  - 如果返回值为`Null`，则代表发送失败

参数`callback`的回调函数原型：`function(data)`  

- data : `String`    
  表单返回的互动结果字符串

<br>

其中，图片路径参数使用材质包路径或者URL来标识按钮对应的图标。  
对于表单上的每个按钮，如下设置对应的图标

1. 如果使用材质包路径，图片路径应该形如 `textures/items/apple`
2. 如果使用URL路径，那么在这里放入完整的URL即可，形如 `https://www.baidu.com/img/flexible/logo/pc/result.png`
3. 如果这个按钮你不需要显示图片，那将对应的图片路径设置为空字符串即可

<br>

### 向玩家发送模式表单

模式表单包含一个标题、一个文本显示框以及两个按钮

`pl.sendModalForm(title,content,button1,button2,callback)`

- 参数：
  - title : `String`  
    表单标题  
  - content : `String`  
    表单内容
  - button1 : `String`  
    按钮1文本的字符串  
  - button2 : `String`  
    按钮2文本的字符串  
  - callback : `Function`  
    玩家选择按钮之后被调用的回调函数。  
- 返回值：发送的表单ID  
- 返回值类型：`Integer`
  - 如果返回值为`Null`，则代表发送失败

参数`callback`的回调函数原型：`function(data)`  

- data : `String`    
  表单返回的互动结果字符串

<br>

### 向玩家发送自定义表单（Json格式）  

自定义表单可以包含丰富的自定义控件。由于相关Json定义格式相对复杂，建议使用下一节的表单构建器API更好地完成这项任务。

`pl.sendForm(json,callback)`

- 参数：
  - json : `String`  
    自定义表单json字符串  
  - callback : `Function`  
    玩家与表单元素互动之后被调用的回调函数。  
- 返回值：发送的表单ID  
- 返回值类型：`Integer`  
  - 如果返回值为`Null`，则代表发送失败

参数`callback`的回调函数原型：`function(data)`  

- data : `String`    
  表单返回的互动结果字符串

<br>

### 取消之前发送的表单  

`mc.cancelForm(id)`

- 参数：
  - id : `Integer`  
    上述这些函数返回的表单ID

- 返回值：是否成功取消  

- 返回值类型：`Boolean`  

<br>