#!/usr/bin/env python3
#-*- coding = utf-8 -*-
import sys
from pathlib import * # only Python3 supports

SDK_TOOLS_DIR_BASENAME = "tools"

class ClassProject:
    _sdk_path = ""
    _project_path = ""
    _sdk_project_py = ""

    def __init__(self):
        _cur_path = Path(__file__).parent
        self._project_path = _cur_path.resolve()
        # get sdk path
        subdir = self._project_path
        cur_path = subdir.parent
        while subdir.match(SDK_TOOLS_DIR_BASENAME) is False:
            cur_path = cur_path.parent
            for subdir in cur_path.iterdir():
                if subdir.match(SDK_TOOLS_DIR_BASENAME) is True:
                    self._sdk_path = subdir.parent
                    break
        # add python lib path
        _sdk_scripts_path = self._sdk_path / SDK_TOOLS_DIR_BASENAME / "scripts"
        sys.path.append(r'{}'.format(_sdk_scripts_path))
        # set sdk project.py
        self._sdk_project_py = _sdk_scripts_path / "project.py"
        pass

    def name(self):
        return self.path().name

    def path(self):
        return self._project_path

    def cmake_file(self):
        return self._project_path / "CMakeLists.txt"

    def sdk_path(self):
        return self._sdk_path

    def sdk_project_py(self):
        return self._sdk_project_py


if __name__ == '__main__':
    project = ClassProject()
    with open(project.sdk_project_py()) as f:
        exec(f.read())