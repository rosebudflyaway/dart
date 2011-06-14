/*
  RTQL8, Copyright (c) 2011 Georgia Tech Graphics Lab
  All rights reserved.

  Author	Sehoon Ha
  Date		06/12/2011
*/


#ifndef MODEL3D_PARSER_VSK_H
#define MODEL3D_PARSER_VSK_H

namespace model3d {
    class Skeleton;
} // namespace model3d

#define VERBOSE false
#define VSK_OK 0
#define VSK_ERROR 1
int readVSKFile(const char* const filename, model3d::Skeleton* skel);

#endif // #ifndef MODEL3D_PARSER_VSK_H
