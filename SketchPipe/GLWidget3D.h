#pragma once

#include "glew.h"
#include <QGLWidget>
#include <QMouseEvent>
#include <QKeyEvent>
#include "Camera.h"
#include "ShadowMapping.h"
#include "RenderManager.h"
#include <vector>
#include <QPen>
#include "ParametricLSystem.h"

class MainWindow;

class Pen : public QPen {
public:
	static enum { TYPE_BRANCH = 0, TYPE_LEAF };

public:
	int type;

public:
	Pen();

	void setType(int type);
};

class GLWidget3D : public QGLWidget {
public:
	MainWindow* mainWin;
	Camera camera;
	glm::vec3 light_dir;
	glm::mat4 light_mvpMatrix;
	RenderManager renderManager;
	QPoint lastPos;
	bool ctrlPressed;
	bool shiftPressed;
	bool altPressed;
	
	parametriclsystem::ParametricLSystem lsystem;
	parametriclsystem::String model;

	//bool dragging;
	QPoint lastPoint;
	QImage sketch[parametriclsystem::NUM_LAYERS];
	Pen pen;

public:
	GLWidget3D(MainWindow *parent);
	void render();
	void clearImage();
	void drawScene();
	void drawLine(const QPoint& startPoint, const QPoint& endPoint);
	void resizeSketch(int width, int height);

	void keyPressEvent(QKeyEvent* e);
	void keyReleaseEvent(QKeyEvent* e);

protected:
	void mousePressEvent(QMouseEvent* e);
	void mouseMoveEvent(QMouseEvent* e);
	void mouseReleaseEvent(QMouseEvent* e);
	void wheelEvent(QWheelEvent* e);
	void initializeGL();
	void resizeGL(int width, int height);
	void paintEvent(QPaintEvent* e);
};

