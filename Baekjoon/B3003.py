king,queen,rook,bishop,night,pawn = map(int,input().split())
# 1,1,2,2,2,8

king=1-king
queen=1-queen
rook=2-rook
bishop=2-bishop
night=2-night
pawn=8-pawn

print("%d %d %d %d %d %d"%(king,queen,rook,bishop,night,pawn))