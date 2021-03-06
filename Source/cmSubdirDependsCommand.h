/*============================================================================
  CMake - Cross Platform Makefile Generator
  Copyright 2000-2009 Kitware, Inc., Insight Software Consortium

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/
#ifndef cmSubdirDependsCommand_h
#define cmSubdirDependsCommand_h

#include "cmCommand.h"

class cmSubdirDependsCommand : public cmCommand
{
public:
  cmCommand* Clone() CM_OVERRIDE { return new cmSubdirDependsCommand; }
  bool InitialPass(std::vector<std::string> const& args,
                   cmExecutionStatus& status) CM_OVERRIDE;
  std::string GetName() const CM_OVERRIDE { return "subdir_depends"; }
  cmTypeMacro(cmSubdirDependsCommand, cmCommand);
};

#endif
