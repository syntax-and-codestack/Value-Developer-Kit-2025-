//etoolbar.h

#ifndef ETOOLBAR_H
#define ETOOLBAR_H

class EToolbar{
public:
    EToolbar();
    ~EToolbar();

    virtual int x() = 0;
    virtual int y() = 0;
    virtual int width() = 0;
    virtual int height() = 0;

    virtual unsigned char * EButtonImage() = 0;
    virtual void CreateEToolbar(EToolbar * Toolbar, int buttons, int nStyle, int x, int y, int width, int height, const char* Name) = 0;
    virtual void CreateEButton(EToolbar& Toolbar, int style, const char* IMG);

   enum
   {
      eButton,
      eBmpButton,
      eToggle,
      eCheck
   }EToolbarType;
};

#endif
