
int FUN_ram_4202a8c4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined2 uVar1;
  short sVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 uStack_d9;
  undefined1 auStack_d8 [7];
  undefined1 uStack_d1;
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [8];
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [11];
  undefined1 auStack_99 [33];
  undefined1 auStack_78 [58];
  undefined1 auStack_3e [16];
  byte bStack_2e;
  undefined1 auStack_2c [16];
  
  iVar4 = FUN_ram_4202e30c(param_1,auStack_a4);
  puVar3 = (undefined1 *)0x0;
  if (iVar4 == 0) {
    uStack_d1 = 0;
    FUN_ram_4039c11e(auStack_d8,auStack_99,7);
    iVar4 = FUN_ram_4202ce90(auStack_d8,auStack_78);
    if ((iVar4 == 0) && (iVar4 = 0x17, (bStack_2e & 1) != 0)) {
      iVar4 = FUN_ram_42029616(param_3,2,&uStack_d9);
      if (iVar4 != 0) {
        return iVar4;
      }
      puVar5 = (undefined4 *)*param_3;
      uVar1 = *(undefined2 *)*puVar5;
      (*(code *)&SUB_ram_400119f4)(puVar5,*(ushort *)(puVar5 + 4) - 0xc,0xc,auStack_d0);
      (*(code *)&SUB_ram_400119dc)(*param_3,0xfffffff4);
      sVar2 = *(short *)(*param_3 + 0x10) + 5;
      puVar3 = (undefined1 *)FUN_ram_403a5e02(1,sVar2);
      if (puVar3 == (undefined1 *)0x0) {
        iVar4 = 6;
      }
      else {
        *puVar3 = 0xd2;
        (*(code *)&SUB_ram_400119f4)(*param_3,0,*(undefined2 *)(*param_3 + 0x10),puVar3 + 1);
        FUN_ram_4039c11e(puVar3 + *(ushort *)(*param_3 + 0x10) + 1,auStack_2c,4);
        (*(code *)&SUB_ram_40011ad0)(puVar3,sVar2);
        (*(code *)&SUB_ram_40011acc)(auStack_b4,auStack_3e,0x10);
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        uStack_b8 = 0;
        iVar4 = FUN_ram_4202b176(auStack_b4,puVar3,sVar2,&uStack_c4);
        if (iVar4 == 0) {
          (*(code *)&SUB_ram_40011ad0)(&uStack_c4,0x10);
          iVar6 = FUN_ram_4039c0e0(auStack_d0,auStack_2c,4);
          iVar4 = 0x17;
          if (iVar6 == 0) {
            iVar6 = FUN_ram_4039c0e0(auStack_cc,&uStack_bc,8);
            iVar4 = 0x17;
            if ((iVar6 == 0) && (iVar4 = FUN_ram_4202847c(param_1), iVar4 == 0)) {
              (*(code *)&SUB_ram_400119dc)(*param_3,2);
              iVar4 = FUN_ram_4202997c(param_1,uVar1,param_3,&uStack_d9);
            }
          }
        }
      }
    }
  }
  FUN_ram_403a5e1e(puVar3);
  return iVar4;
}

