
void FUN_ram_420281d6(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 auStack_21 [13];
  
  iVar1 = FUN_ram_4202d598(param_2,0x10);
  *param_3 = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(param_3 + 1) = 8;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    return;
  }
  uVar4 = *(undefined4 *)*param_2;
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420279b4(param_1,1,0xffffffff,0);
  if (iVar1 == 0) {
    *param_3 = 5;
    bVar3 = *(byte *)(param_3 + 5) | 0x10;
  }
  else {
    FUN_ram_4039c11e(iVar1 + 0x2e,uVar4,0x10);
    if ((*(byte *)(iVar1 + 8) & 1) == 0) {
      FUN_ram_42027010(iVar1,auStack_21);
      uVar2 = FUN_ram_42028026(auStack_21[0]);
      if (uVar2 == *(byte *)(iVar1 + 0xd)) {
        *(byte *)(iVar1 + 8) = *(byte *)(iVar1 + 8) | 4;
      }
      iVar1 = FUN_ram_4202805a(iVar1);
      if (iVar1 == 0) goto LAB_ram_42028296;
    }
    else {
      *(undefined1 *)(iVar1 + 0xd) = 2;
    }
    bVar3 = *(byte *)(param_3 + 5) | 1;
  }
  *(byte *)(param_3 + 5) = bVar3;
LAB_ram_42028296:
  thunk_FUN_ram_4202b7f6();
  return;
}

