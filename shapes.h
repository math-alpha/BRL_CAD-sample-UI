#ifndef SHAPES_H
#define SHAPES_H

#include <QVector>
#include <QVector3D>
#include <qopengl.h>

class Shapes{

public:
    Shapes();
    QObject drawSphere(void);
    QObject drawCylinder(void);
    QObject drawCube(void);
    const GLfloat *constData() const { return m_data.constData(); }
    int count() const { return m_count; }
    int vertexCount() const { return m_count / 6; }

private:
    void quad(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2, GLfloat x3, GLfloat y3, GLfloat x4, GLfloat y4);
    void extrude(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
    void add(const QVector3D &v, const QVector3D &n);

    QVector<GLfloat> m_data;
    int m_count;

};

#endif // SHAPES_H
