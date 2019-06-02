#include <stdio.h>
#define SIZE 5

typedef struct _position {
   int x, y;
} position;

int Check_Pawn(position king_pos, position pawn_pos);
int Check_Rook(position king_pos, position rook_pos);
int Check_Bishop(position king_pos, position bishop_pos);
int Check_Knight(position king_pos, position knight_pos);
int Check_Queen(position king_pos, position queen_pos);
int Check_Mate(position king_pos, position queen_pos, position rook_pos,
   position bishop_pos, position knight_pos, position pawn_pos);

int main() {
   char Board[SIZE][SIZE];
   position pawn = { -9999, -9999 };
   position rook = { -9999, -9999 };
   position bishop = { -9999, -9999 };
   position knight = { -9999, -9999 };
   position queen = { -9999, -9999 };
   position king = { -9999, -9999 };
   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         scanf(" %c", &Board[i][j]);
      }
   }

   for (int i = 0; i < SIZE; i++) {
      for (int j = 0; j < SIZE; j++) {
         switch (Board[i][j])
         {
         case 'P':
            pawn.x = i;
            pawn.y = j;
            break;
         case 'R':
            rook.x = i;
            rook.y = j;
            break;
         case 'B':
            bishop.x = i;
            bishop.y = j;
            break;
         case 'N':
            knight.x = i;
            knight.y = j;
            break;
         case 'Q':
            queen.x = i;
            queen.y = j;
            break;
         case 'K':
            king.x = i;
            king.y = j;
            break;
         default:
            break;

         }
      }
   }

   printf("%d", Check_Mate(king, queen, rook, bishop, knight, pawn));
}

int Check_Pawn(position king_pos, position pawn_pos) {
   int FLAG = 0;

   if ((king_pos.x - pawn_pos.x == 1 || king_pos.x - pawn_pos.x == -1)
      && ((king_pos.y - pawn_pos.y == -1) || (king_pos.y - pawn_pos.y == 1))) {
      FLAG = 1;
   }

   return FLAG;
}

int Check_Rook(position king_pos, position rook_pos) {
   int FLAG = 0;

   if (king_pos.x == rook_pos.x || king_pos.y == rook_pos.y)
      FLAG = 1;

   return FLAG;
}

int Check_Bishop(position king_pos, position bishop_pos) {
   int FLAG = 0;

   if ((king_pos.x - bishop_pos.x == king_pos.y - bishop_pos.y)
      || ((king_pos.x - bishop_pos.x) == - (king_pos.y - bishop_pos.y))) {
      FLAG = 1;
   }

   return FLAG;
}

int Check_Knight(position king_pos, position knight_pos) {
   int FLAG = 0;

   if ((((knight_pos.x + 3 == king_pos.x) && (knight_pos.y - 1 == king_pos.y || knight_pos.y + 1 == king_pos.y)))
      || (((knight_pos.x - 3 == king_pos.x) && (knight_pos.y - 1 == king_pos.y || knight_pos.y + 1 == king_pos.y)))
      || (((knight_pos.y + 3 == king_pos.y) && (knight_pos.x - 1 == king_pos.x || knight_pos.x + 1 == king_pos.x)))
      || (((knight_pos.y - 3 == king_pos.y) && (knight_pos.x - 1 == king_pos.x || knight_pos.x + 1 == king_pos.x)))) {
      FLAG = 1;
   }

   return FLAG;
}

int Check_Queen(position king_pos, position queen_pos) {
   int FLAG = 0;
   if (Check_Bishop(king_pos, queen_pos) || Check_Rook(king_pos, queen_pos))
      FLAG = 1;

   return FLAG;
}

int Check_Mate(position king_pos, position queen_pos, position rook_pos,
   position bishop_pos, position knight_pos, position pawn_pos) {
   return Check_Pawn(king_pos, pawn_pos) || Check_Knight(king_pos, knight_pos)
      || Check_Bishop(king_pos, bishop_pos) || Check_Rook(king_pos, rook_pos) || Check_Queen(king_pos, queen_pos);
}
