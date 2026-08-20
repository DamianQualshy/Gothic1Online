#ifndef G1O_CURSOR_H
#define G1O_CURSOR_H

struct MOUSEPOS {
    float x;
    float y;
    float wheel;
};

class zCursor {
public:
    enum EMouseStatus { NONE, LEFT_UP, LEFT_DOWN, RIGHT_UP, RIGHT_DOWN, WHEEL_UP, WHEEL_DOWN };
    enum EMouseButton { LEFT, RIGHT, WHEEL };

    static zCursor& GetCursor();
    MOUSEPOS GetPosition() const;
    void SetPosition(float x, float y, float wheel = 0.0f);
    bool IsRightBtnClicked() const;
    bool IsLeftBtnClicked() const;
    bool IsWheelClicked() const;
    float GetSensitivity() const { return sensitivity; }
    void SetSensitivity(float value) { sensitivity = value; }
    void SetShowing(bool value);
    bool IsShowing() const { return isShowing; }
    void SetTexture(const char* textureName);
    zSTRING GetTexture() const { return texName; }
    void OnUpdate();
    void Top();
    EMouseStatus HandleEvent(EMouseButton button);

private:
    zCursor();
    zCursor(const zCursor&) = delete;
    ~zCursor();

    MOUSEPOS position;
    zCInput* inp;
    zCView* mouseTex;
    zSTRING texName;
    EMouseStatus mouseStatus;
    float sensitivity;
    bool isShowing;
    bool mouseLeft;
    bool mouseRight;
    bool mouseWheel;
};

#endif
