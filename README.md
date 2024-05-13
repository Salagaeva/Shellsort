# Cортировки Шелла

## Задача: реализовать сортировку Шелла на С++

В этом репозитории можно ознакомиться с реализацией алгоритма сортировки Шелла на языке программирования C++.

### Shell sort

**Сортировка Шелла** - это алгоритм сортировки, который является усовершенствованным вариантом сортировки вставками. Суть алгоритма заключается в том, что элементы массива сортируются парами элементов друг относительно друга с фиксированным шагом. Шаг уменьшается после каждой итерации, пока не достигнет значения 1, когда выполняется финальная сортировка элементов массива.

#### Основные шаги сортировки:
<ol>
  <li>Выбирается размер промежутка (интервала) для сортировки. Этот размер уменьшается по каждой итерации сортировки.</li>
  <li>Для каждого промежутка производится сортировка вставками подмассивов, начиная с первого элемента идущего с заданным шагом.</li>
  <li>Сортировка продолжается до тех пор, пока промежуток не станет равен 1, что означает завершение сортировки.</li>
</ol>

## Давайте более подробно рассмотрим как происходит сортировка Шелла на примере
|исход шагов|подробно|
|--------|--------|
|![Shell sort pictures](./pictures/example.png)|![Shell sort pictures](./pictures/detailed_example.png)|
