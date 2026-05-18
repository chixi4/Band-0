
int FUN_ram_4201706c(undefined4 param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iStack_204;
  undefined4 *puStack_200;
  undefined1 auStack_1fc [36];
  undefined4 uStack_1d8;
  undefined1 auStack_1d4 [72];
  undefined4 uStack_18c;
  undefined1 uStack_166;
  undefined1 uStack_15c;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [220];
  
  iVar1 = FUN_ram_4201900e(0);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_40398d1c();
    FUN_ram_40398c14(1,0x3c070fa0,0x3c070fa8,uVar2,0x3c070fa0);
    iVar1 = 0x105;
  }
  else {
    iVar9 = iVar1 + 0x18;
    iVar3 = FUN_ram_4039a06c(iVar9,0x3c070598);
    if (iVar3 == 0) {
      uVar2 = FUN_ram_40398d1c();
      FUN_ram_40398c14(3,0x3c070fa0,0x3c07100c,uVar2,0x3c070fa0,iVar9,*(undefined4 *)(iVar1 + 0xc),
                       *(undefined4 *)(iVar1 + 0x10));
      (*(code *)&SUB_ram_40010488)(auStack_1d4,0,0x94);
      uStack_18c = 15000;
      uStack_166 = 1;
      uStack_15c = 1;
      uStack_1d8 = param_1;
      (*(code *)&SUB_ram_40010488)(auStack_1fc,0);
      puStack_200 = &uStack_1d8;
      iStack_204 = 0;
      iVar3 = FUN_ram_4201ce9e(&puStack_200,&iStack_204);
      iVar1 = iStack_204;
      if ((iVar3 == 0) && (iStack_204 != 0)) {
        (*(code *)&SUB_ram_40010488)(auStack_140,0,0x100);
        iVar1 = thunk_FUN_ram_4201cd46(iVar1,auStack_140);
        if (iVar1 == 0) {
          uVar2 = FUN_ram_40398d1c();
          FUN_ram_40398c14(3,0x3c070fa0,0x3c071074,uVar2,0x3c070fa0,auStack_110,auStack_130);
        }
        uVar5 = FUN_ram_4201d4c2(iStack_204);
        uVar2 = FUN_ram_40398d1c();
        FUN_ram_40398c14(3,0x3c070fa0,0x3c07109c,uVar2,0x3c070fa0,uVar5);
        iVar1 = -1;
        while (iVar3 = FUN_ram_4201d198(iStack_204), iVar3 == 0x9001) {
          iVar3 = FUN_ram_4201d4ac(iStack_204);
          if (param_2 != (code *)0x0) {
            (*param_2)(iVar3,uVar5 & (int)~uVar5 >> 0x1f,param_3);
          }
          if (((0 < (int)uVar5) &&
              (iVar6 = (*(code *)&SUB_ram_400108f8)
                                 (iVar3 * 100,(int)((ulonglong)((longlong)iVar3 * 100) >> 0x20),
                                  uVar5,(int)uVar5 >> 0x1f), iVar6 != iVar1)) && (iVar6 % 10 == 0))
          {
            uVar2 = FUN_ram_40398d1c();
            FUN_ram_40398c14(3,0x3c070fa0,0x3c0710c8,uVar2,0x3c070fa0,iVar3,uVar5,iVar6);
            iVar1 = iVar6;
          }
        }
        if (iVar3 != 0) {
          uVar2 = FUN_ram_40398d1c();
          uVar4 = FUN_ram_4201ae60(iVar3);
          FUN_ram_40398c14(1,0x3c070fa0,0x3c0710f0,uVar2,0x3c070fa0,uVar4);
          FUN_ram_4201d42e(iStack_204);
          return iVar3;
        }
        iVar1 = FUN_ram_4201d364(iStack_204);
        if (iVar1 != 0) {
          iVar1 = FUN_ram_4201d37e(iStack_204);
          if (iVar1 != 0) {
            uVar2 = FUN_ram_40398d1c();
            uVar4 = FUN_ram_4201ae60(iVar1);
            FUN_ram_40398c14(1,0x3c070fa0,0x3c071144,uVar2,0x3c070fa0,uVar4);
            return iVar1;
          }
          uVar7 = FUN_ram_4201d4ac(iStack_204);
          uVar2 = FUN_ram_40398d1c();
          FUN_ram_40398c14(3,0x3c070fa0,0x3c07116c,uVar2,0x3c070fa0,uVar7,iVar9);
          if (param_2 == (code *)0x0) {
            return 0;
          }
          uVar8 = uVar7;
          if (0 < (int)uVar5) {
            uVar8 = uVar5;
          }
          (*param_2)(uVar7,uVar8,param_3);
          return 0;
        }
        uVar2 = FUN_ram_40398d1c();
        FUN_ram_40398c14(1,0x3c070fa0,0x3c071120,uVar2,0x3c070fa0);
        FUN_ram_4201d42e(iStack_204);
      }
      else {
        uVar2 = FUN_ram_40398d1c();
        uVar4 = FUN_ram_4201ae60(iVar3);
        FUN_ram_40398c14(1,0x3c070fa0,0x3c071048,uVar2,0x3c070fa0,uVar4);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      iVar1 = -1;
    }
    else {
      uVar2 = FUN_ram_40398d1c();
      FUN_ram_40398c14(1,0x3c070fa0,0x3c070fd0,uVar2,0x3c070fa0,iVar9,0x3c070598);
      iVar1 = 0x103;
    }
  }
  return iVar1;
}

