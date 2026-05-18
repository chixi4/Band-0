
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420310b2(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined1 auStack_21 [9];
  
  iVar1 = FUN_ram_4202d598(param_2,0x40);
  *param_3 = iVar1;
  if (iVar1 != 0) {
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    return;
  }
  iVar1 = FUN_ram_42030aba();
  *param_3 = iVar1;
  if (iVar1 != 0) {
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    uVar4 = 8;
LAB_ram_42031106:
    *(undefined1 *)(param_3 + 1) = uVar4;
    return;
  }
  uVar6 = *(undefined4 *)*param_2;
  iVar1 = FUN_ram_4039c0e0(uVar6,_DAT_ram_3fcb6bb4,0x20);
  if (iVar1 == 0) {
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    uVar4 = 3;
    goto LAB_ram_42031106;
  }
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420279b4(param_1,9,0xffffffff,0);
  if (iVar1 == 0) {
    *param_3 = 5;
    *(undefined1 *)(param_3 + 1) = 8;
    bVar5 = *(byte *)(param_3 + 5) | 0x10;
  }
  else {
    uVar6 = FUN_ram_4039c11e(iVar1 + 0x112,uVar6,0x40);
    iVar2 = FUN_ram_4202b5ae(uVar6,iVar1 + 0x132,_DAT_ram_3fcb6bb4 + 0x40,iVar1 + 0x162);
    if (iVar2 == 0) {
      bVar5 = *(byte *)(iVar1 + 8) & 1;
      if ((*(byte *)(iVar1 + 8) & 1) != 0) {
        if (*(char *)(iVar1 + 0xc) == '\x02') {
          bVar5 = 2;
        }
        *(byte *)(iVar1 + 0xd) = bVar5;
        iVar2 = FUN_ram_42030b16(iVar1,auStack_21);
        if (iVar2 != 0) {
          *param_3 = 3;
          uVar4 = 8;
          goto LAB_ram_420311a8;
        }
        uVar3 = FUN_ram_42028026(auStack_21[0]);
        if (uVar3 == *(byte *)(iVar1 + 0xd)) {
          *(undefined1 *)(param_3 + 2) = auStack_21[0];
        }
        iVar2 = FUN_ram_4202805a(iVar1);
        if (((iVar2 == 0) || (*(char *)(iVar1 + 0xc) == '\0')) || (*(char *)(iVar1 + 0xc) == '\x03')
           ) goto LAB_ram_42031164;
      }
      bVar5 = *(byte *)(param_3 + 5) | 1;
    }
    else {
      *param_3 = 0x40b;
      uVar4 = 0xb;
LAB_ram_420311a8:
      *(undefined1 *)(param_3 + 1) = uVar4;
      bVar5 = *(byte *)(param_3 + 5) | 2;
    }
  }
  *(byte *)(param_3 + 5) = bVar5;
LAB_ram_42031164:
  thunk_FUN_ram_4202b7f6();
  return;
}

