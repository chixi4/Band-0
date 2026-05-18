
int FUN_ram_4203029c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_ram_42024dea(param_2 + 0x10,1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4202f906(param_1);
    if (iVar1 == 2) {
      uVar2 = FUN_ram_42024bb6(param_2);
      if ((uVar2 <= param_1[0x10] + 7U >> 3) && (iVar1 = FUN_ram_42024dea(param_2,0), -1 < iVar1)) {
        iVar3 = *param_1;
        FUN_ram_4202476a(auStack_28);
        iVar1 = FUN_ram_420249f4(auStack_28,param_2);
        param_1 = param_1 + 1;
        while (iVar1 == 0) {
          iVar1 = FUN_ram_42024d4a(auStack_28,param_1);
          if (iVar1 < 0) {
            iVar1 = FUN_ram_42024dea(auStack_28,1);
            if (((iVar1 < 1) ||
                ((iVar3 == 9 &&
                 ((iVar1 = FUN_ram_42024d4a(auStack_28,0x3c078698), iVar1 == 0 ||
                  (iVar1 = FUN_ram_42024d4a(auStack_28,0x3c078690), iVar1 == 0)))))) ||
               ((iVar1 = FUN_ram_4202502c(auStack_28,auStack_28,1), iVar1 == 0 &&
                (iVar3 = FUN_ram_42024d4a(auStack_28,param_1), iVar3 == 0)))) {
              iVar1 = -0x4c80;
            }
            break;
          }
          iVar1 = FUN_ram_42025026(auStack_28,auStack_28,param_1);
        }
LAB_ram_4203030e:
        FUN_ram_42024774(auStack_28);
        return iVar1;
      }
    }
    else {
      if (iVar1 != 1) {
        return -0x4f80;
      }
      iVar1 = FUN_ram_42024dea(param_2,0);
      if (-1 < iVar1) {
        iVar1 = param_2 + 8;
        iVar3 = FUN_ram_42024dea(iVar1,0);
        if (-1 < iVar3) {
          iVar3 = FUN_ram_42024d4a(param_2);
          if ((iVar3 < 0) && (iVar3 = FUN_ram_42024d4a(iVar1,param_1 + 1), iVar3 < 0)) {
            FUN_ram_4202476a(auStack_30);
            FUN_ram_4202476a(auStack_28);
            iVar1 = FUN_ram_4202f224(param_1,auStack_30,iVar1,iVar1);
            if ((iVar1 == 0) && (iVar1 = FUN_ram_4202f5e8(param_1,auStack_28,param_2), iVar1 == 0))
            {
              iVar3 = FUN_ram_42024d4a(auStack_30,auStack_28);
              iVar1 = 0;
              if (iVar3 != 0) {
                iVar1 = -0x4c80;
              }
            }
            FUN_ram_42024774(auStack_30);
            goto LAB_ram_4203030e;
          }
        }
      }
    }
  }
  return -0x4c80;
}

