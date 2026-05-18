
int FUN_ram_420724d6(int param_1,int param_2,byte *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_38 [12];
  
  if (param_4 != 0) {
    iVar1 = param_1 + 4;
    iVar2 = FUN_ram_420683c4(iVar1);
    iVar3 = FUN_ram_4207212e(param_1);
    if (iVar3 != 1) {
      return -0x4e80;
    }
    if (*param_3 == 0) {
      if (param_4 == 1) {
        iVar1 = FUN_ram_420722c8(param_2);
        return iVar1;
      }
    }
    else {
      uVar5 = iVar2 + 1;
      if (uVar5 <= param_4) {
        iVar3 = FUN_ram_420683d6(param_2,param_3 + 1,iVar2);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_ram_42068310(param_2 + 0x10,1);
        if (iVar3 != 0) {
          return iVar3;
        }
        uVar4 = (uint)*param_3;
        if (uVar4 == 4) {
          if (iVar2 * 2 + 1U == param_4) {
            iVar1 = FUN_ram_420683d6(param_2 + 8,param_3 + uVar5,iVar2);
            return iVar1;
          }
        }
        else if (((uVar4 - 2 & 0xff) < 2) && (uVar5 == param_4)) {
          iVar3 = param_2 + 8;
          iVar2 = FUN_ram_4206835e(iVar1,0);
          if (iVar2 != 1) {
            return -0x4e80;
          }
          iVar2 = FUN_ram_4206835e(iVar1,1);
          if (iVar2 != 1) {
            return -0x4e80;
          }
          FUN_ram_4206806e(auStack_38);
          iVar2 = FUN_ram_42071f8c(param_1,iVar3,param_2,param_2);
          if (iVar2 == 0) {
            if (*(int *)(param_1 + 0xc) == 0) {
              iVar2 = FUN_ram_42068824(iVar3,iVar3,3);
              while (iVar2 == 0) {
                if ((-1 < *(short *)(param_2 + 0xc)) ||
                   (iVar2 = FUN_ram_420685b4(iVar3,0), iVar2 == 0)) goto LAB_ram_4207262e;
                iVar2 = FUN_ram_420687ea(iVar3,iVar3,iVar1);
              }
            }
            else {
              iVar2 = FUN_ram_42072040(param_1,iVar3,iVar3,param_1 + 0xc);
              if (iVar2 == 0) {
LAB_ram_4207262e:
                iVar2 = FUN_ram_42071f8c(param_1,iVar3,iVar3,param_2);
                if (((iVar2 == 0) &&
                    (((iVar2 = FUN_ram_42072040(param_1,iVar3,iVar3,param_1 + 0x14), iVar2 == 0 &&
                      (iVar2 = FUN_ram_420687f6(auStack_38,iVar1,1), iVar2 == 0)) &&
                     (iVar2 = FUN_ram_42068484(auStack_38,2), iVar2 == 0)))) &&
                   ((iVar2 = FUN_ram_420690e0(iVar3,iVar3,auStack_38,iVar1,0), iVar2 == 0 &&
                    (uVar5 = FUN_ram_4206835e(iVar3,0), (uVar4 & 1) != uVar5)))) {
                  iVar2 = FUN_ram_420687f0(iVar3,iVar1,iVar3);
                }
              }
            }
          }
          FUN_ram_42068078(auStack_38);
          return iVar2;
        }
      }
    }
  }
  return -0x4f80;
}

