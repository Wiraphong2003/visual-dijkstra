cmake_minimum_required(VERSION 3.22)
project(visual_dijkstra)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/common)
include_directories(src/dialogs)
include_directories(src/widgets)

add_executable(visual_dijkstra
        src/common/adjacencymatrix.cpp
        src/common/adjacencymatrix.h
        src/common/error.cpp
        src/common/error.h
        src/common/graphstate.cpp
        src/common/graphstate.h
        src/common/settingsmanager.cpp
        src/common/settingsmanager.h
        src/dialogs/aboutdialog.cpp
        src/dialogs/aboutdialog.h
        src/dialogs/licensedialog.cpp
        src/dialogs/licensedialog.h
        src/dialogs/mainwindow.cpp
        src/dialogs/mainwindow.h
        src/dialogs/matrixdialog.cpp
        src/dialogs/matrixdialog.h
        src/dialogs/settingsdialog.cpp
        src/dialogs/settingsdialog.h
        src/widgets/edge.cpp
        src/widgets/edge.h
        src/widgets/graph.cpp
        src/widgets/graph.h
        src/widgets/graphpathfinderview.cpp
        src/widgets/graphpathfinderview.h
        src/widgets/graphstatestable.cpp
        src/widgets/graphstatestable.h
        src/widgets/graphstateswidget.cpp
        src/widgets/graphstateswidget.h
        src/widgets/graphview.cpp
        src/widgets/graphview.h
        src/widgets/node.cpp
        src/widgets/node.h
        src/widgets/settingspage.cpp
        src/widgets/settingspage.h
        src/main.cpp
        tests/auto/AdjacencyMatrixTest/tst_adjacencymatrix.cpp
        tests/auto/EdgeTest/tst_edge.cpp
        tests/auto/GraphStateTest/tst_graphstate.cpp
        tests/auto/NodeStateTest/tst_nodestate.cpp
        tests/auto/NodeTest/tst_node.cpp
        tests/auto/SettingsManagerTest/tst_settingsmanager.cpp)
