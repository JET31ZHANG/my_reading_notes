# 内置指令

## v-bind

动态更新 HTML 元素上的属性。

#### 绑定class

- 对象语法：传给 :class (v-bind:class 的简写) 一个对象，可动态切换 class 属性值。

  ```html
  <div class="static" :class="{ active: isActive, 'text-danger': hasError }"></div>
  ```
- 数组语法：当需要多个 class 时，可以把一个数组与 :class 绑定，来应用一个 class 列表。

  ```html
  <div :class="[activeClass, errorClass]"></div>
  <!-- 需要根据条件切换列表中的 class，可使用三元表达式实现 -->
  <div :class="[isActive ? activeClass : '', errorClass]"></div> 
  ```
- 数组中的嵌套对象：当有多个条件 class 时，在数组中使用对象语法。

  ```html
  <div :class="[{ 'active': isActive }, errorClass]"></div>
  ```

#### 绑定style

## 条件渲染指令

#### v-if


#### v-show

## 列表渲染指令

#### 基本用法

- 遍历普通数组

  ```html
      <ul>
          <li v-for="(item, index) in items">
              {{index}} - {{ item }}
          </li>
      </ul>
  ```

- 遍历对象数组

  ```html
      <ul>
          <li v-for="user in users">
              {{ user.uname }}
          </li>
      </ul>
  ```

- 遍历对象属性

  ```html
      <li v-for="(value, key, index) in myObject">
          {{ ++index }}.{{ key }}: {{ value }}
      </li>
  ```

- 迭代数字

  ```html
      <li v-for="i in 100">
          {{ i }}
      </li>
  ```

#### 数组更新

- push(): 向数组末尾添加一个或多个元素，并返回新的长度
- pop(): 删除并返回数组的最后一个元素
- unshift(): 向数组的开头添加一个或多个元素，并返回新的长度
- shift(): 把数组的第一个元素从其中删除，并返回第一个元素的值
- splice(): 添加、删除数组中的元素。
- sort(): 对数组的元素进行排序。
- reverse(): 颠倒数组中元素的顺序。

#### 过滤与排序

## 事件处理

#### v-on 监听

@click 等同于 v-on:click 

#### $event 访问原生DOM

#### 修饰符



## 表单与v-model

#### 基本用法

#### 修饰符

## 购物车实例
