sort_deps = [
        "//Sorting:selection_sort",
        "//Sorting:bubble_sort",
        "//Sorting:merge_sort",
]

cc_binary(
    name = "main",
    srcs = ["main.cpp",],
    deps = sort_deps,
)

cc_library(
    name = "selection_sort",
    srcs = ["selectionsort.cpp"], 
    hdrs = ["selectionsort.h"],
    linkstatic = 0,
)

cc_library(
    name = "bubble_sort",
    srcs = ["bubblesort.cpp"], 
    hdrs = ["bubblesort.h"],
    linkstatic = 0,
)

cc_library(
    name = "merge_sort",
    srcs = ["mergesort.cpp"],
    hdrs = ["mergesort.h"],
    linkstatic = 0,
)

cc_shared_library(
    name = "selection_sort_so",
    deps = [":selection_sort"],
)

cc_shared_library(
    name = "bubble_sort_so",
    deps = [":bubble_sort"],
)

cc_shared_library(
    name = "merge_sort_so",
    deps = [":merge_sort"],
)