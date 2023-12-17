//自動車の移動

#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct { 
  double x;       
  double y;       
} Point;

typedef struct { 
  Point pt;       
  double fuel;    
} Car;

double distance_of(Point pa, Point pb)
{
  return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
  printf("現在位置:(%.2f, %.2f)\n", c.pt.x, c.pt.y);
  printf("残り燃料:%.2fL\n", c.fuel);
}

int move(Car *c, Point dest)
{
  double d = distance_of(c->pt, dest);

  if (d > c->fuel)
    return 0;
  c->pt = dest;
  c->fuel -= d;
  return 1;
}

//x軸方向への移動量を返す
double xmove_amount()
{
  double dx;
  printf("x軸方向の移動量:");
  scanf("%lf", &dx);
  return dx;
}

double ymove_amount()
{
  double dy;
  printf("y軸方向の移動量:");
  scanf("%lf", &dy);
  return dy;
}

Point move_point()
{
  Point dest;
  printf("移動先の座標\n");
  printf("x:"); scanf("%lf", &dest.x);
  printf("y:"); scanf("%lf", &dest.y);
  return dest;
}

int main(void)
{
  Car mycar = {{0.0, 0.0}, 90.0};

  while (1) {
    int select;
    double dx;
    double dy;
    Point dest;
    put_info(mycar);

    printf("移動しますか[1:x軸方向への移動量,2:y軸方向への移動量,3:任意の座標,それ以外：移動しない]:");
    scanf("%d", &select);
    
    switch (select)
    {
    case 1:
        
        dx = xmove_amount();
        if (!move(&mycar, (Point){mycar.pt.x + dx, mycar.pt.y}))
            puts("\a燃料不足で移動できません。");
        break;
    case 2:
        
        dy = ymove_amount();
        if (!move(&mycar, (Point){mycar.pt.x, mycar.pt.y + dy}))
            puts("\a燃料不足で移動できません。");
        break;
    case 3:
        dest = move_point();
        if (!move(&mycar, dest))
            puts("\a燃料不足で移動できません。");
        break;
    default:
        break;
    }
    if (select != 1 && select != 2 && select != 3)
        break;
  }

  printf("現在位置:(%.2f, %.2f)\n", mycar.pt.x, mycar.pt.y);
  printf("残り燃料:%.2fL\n", mycar.fuel);

  return 0;
}