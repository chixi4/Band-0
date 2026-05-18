
int FUN_ram_4202942c(undefined4 param_1,uint param_2,int param_3,undefined1 *param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auStack_ac [7];
  undefined1 uStack_a5;
  undefined1 auStack_a4 [7];
  undefined1 auStack_9d [21];
  undefined1 auStack_88 [40];
  byte bStack_60;
  
  bVar2 = *(byte *)(param_3 + 8);
  if (param_2 == 0) {
    if ((bVar2 & 2) == 0) {
      uVar4 = 3;
      goto LAB_ram_42029456;
    }
    bVar6 = bVar2 & 0x20;
    bVar7 = bVar2 & 0x40;
    bVar2 = bVar2 & 0x80;
  }
  else {
    if ((bVar2 & 1) == 0) {
      uVar4 = 2;
LAB_ram_42029456:
      *param_4 = uVar4;
      return 0x10;
    }
    bVar6 = bVar2 & 4;
    bVar7 = bVar2 & 8;
    bVar2 = bVar2 & 0x10;
  }
  if ((bVar2 != 0 || bVar7 != 0) || bVar6 != 0) {
    thunk_FUN_ram_4202b7dc();
    iVar3 = thunk_FUN_ram_420365de(param_1);
    uVar1 = *(uint *)(iVar3 + 0x68);
    thunk_FUN_ram_4202b7f6();
    if ((DAT_ram_3fcb69bd & 0x10) != 0) {
      if ((uVar1 & 3) != 3) goto LAB_ram_420294ca;
      if ((uVar1 & 0xf8) != 0x80) goto LAB_ram_420294e2;
    }
    if (bVar7 != 0 || bVar6 != 0) {
      if ((uVar1 & 1) == 0) {
        thunk_FUN_ram_4202b7dc();
        iVar3 = FUN_ram_420365de(param_1);
        if (iVar3 != 0) {
          FUN_ram_42036658(iVar3,auStack_a4);
          uStack_a5 = 0;
          FUN_ram_4039c11e(auStack_ac,auStack_9d,7);
          thunk_FUN_ram_4202b7f6();
          iVar3 = FUN_ram_4202ce90(auStack_ac,auStack_88);
          iVar5 = 5;
          if (iVar3 == 0) {
            iVar5 = (-(bStack_60 & 1) & 10) + 5;
          }
          *param_4 = (char)iVar5;
          return iVar5 + 0x100;
        }
        thunk_FUN_ram_4202b7f6();
LAB_ram_420294ca:
        *param_4 = 5;
        return 0x105;
      }
      if ((bVar7 != 0) && ((uVar1 & 2) == 0)) goto LAB_ram_420294ca;
    }
    if ((uVar1 >> 3 & 0x1f) < (uint)*(byte *)(param_3 + 9)) {
LAB_ram_420294e2:
      *param_4 = 0xc;
      return 0x10c;
    }
    if (bVar2 != 0) {
      thunk_FUN_ram_4202b7dc();
      iVar3 = FUN_ram_420365de(param_1);
      if (iVar3 == 0) {
        thunk_FUN_ram_4202b7f6();
      }
      else {
        uVar1 = *(uint *)(iVar3 + 0x68);
        thunk_FUN_ram_4202b7f6();
        if ((uVar1 >> 8 & 1) != 0) {
          return 0;
        }
      }
      iVar3 = FUN_ram_4202fbac(param_1,*(undefined2 *)(param_3 + 10),param_2 & 0xff);
      if (iVar3 == 2) {
        *param_4 = 8;
        return 0x108;
      }
    }
  }
  return 0;
}

