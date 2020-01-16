def quick_sort(lst):
    if len(lst) < 2:
        return lst
    else:
        pivot = lst[0]
        small_lst = [I for I in lst[1:] if I < pivot]
        large_lst = [J for J in lst[1:] if J > pivot]
        return quick_sort(small_lst) + [pivot] + quick_sort(large_lst)

lst =input('请输入要排序的数据(用，分隔开)：')
lst = lst.split(',')
print(f'需要排序的数据：{lst}')
print(quick_sort(lst))