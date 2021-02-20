#pragma once

#include "window/jgl_window.h"

class Application
{

public:
  Application(const std::string& app_name);

  static Application& Instance() { return *s_instance; }

  void loop();

private:
  static Application* s_instance;

  std::unique_ptr<JGLWindow> mWindow;
};
