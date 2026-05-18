
int FUN_ram_420723e6(int param_1,int param_2,uint param_3,uint *param_4,char *param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_3 < 2) {
    iVar2 = FUN_ram_420683c4(param_1 + 4);
    iVar3 = FUN_ram_4207212e(param_1);
    if (iVar3 == 1) {
      iVar3 = FUN_ram_420685b4(param_2 + 0x10,0);
      if (iVar3 == 0) {
        if (param_6 != 0) {
          *param_5 = '\0';
          *param_4 = 1;
          return 0;
        }
      }
      else if (param_3 == 0) {
        uVar4 = iVar2 * 2 + 1;
        *param_4 = uVar4;
        if (uVar4 <= param_6) {
          *param_5 = '\x04';
          iVar3 = FUN_ram_42068428(param_2,param_5 + 1,iVar2);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = iVar2 + 1;
          param_2 = param_2 + 8;
LAB_ram_42072488:
          iVar2 = FUN_ram_42068428(param_2,param_5 + iVar3,iVar2);
          return iVar2;
        }
      }
      else {
        *param_4 = iVar2 + 1U;
        if (iVar2 + 1U <= param_6) {
          cVar1 = FUN_ram_4206835e(param_2 + 8,0);
          *param_5 = cVar1 + '\x02';
          iVar3 = 1;
          goto LAB_ram_42072488;
        }
      }
      iVar2 = -0x4f00;
    }
    else {
      iVar2 = -0x4e80;
    }
  }
  else {
    iVar2 = -0x4f80;
  }
  return iVar2;
}

