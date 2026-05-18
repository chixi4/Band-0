
void FUN_ram_42028092(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined1 auStack_21 [13];
  
  iVar1 = FUN_ram_4202d598(param_2,6);
  *param_3 = iVar1;
  if (iVar1 != 0) {
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    return;
  }
  iVar1 = *(int *)*param_2;
  thunk_FUN_ram_4202b7dc();
  iVar2 = FUN_ram_420279b4(param_1,0,1,0);
  if (iVar2 == 0) {
    *(undefined1 *)(param_3 + 1) = 8;
    *param_3 = 0x408;
    bVar4 = *(byte *)(param_3 + 5) | 0x10;
LAB_ram_42028180:
    *(byte *)(param_3 + 5) = bVar4;
    goto LAB_ram_4202810c;
  }
  *(undefined1 *)(iVar2 + 0x17) = 2;
  FUN_ram_4039c11e(iVar2 + 0x18,iVar1,6);
  bVar4 = *(byte *)(iVar1 + 3);
  if (bVar4 < 7) {
LAB_ram_42028100:
    *(undefined1 *)(param_3 + 1) = 6;
    iVar1 = 0x406;
  }
  else if (bVar4 < 0x11) {
    if (((DAT_ram_3fcb69bd & 0x10) != 0) && (bVar4 != 0x10)) goto LAB_ram_42028100;
    if ((DAT_ram_3fcb69be < 3) || ((*(byte *)(iVar1 + 2) & 4) != 0)) {
      FUN_ram_42027768(iVar2);
      iVar1 = FUN_ram_42027010(iVar2,auStack_21);
      if (iVar1 == 0) {
        iVar1 = (-(uint)((*(byte *)(iVar2 + 8) & 0x10) == 0) & 0xfffffff8) + 9;
        *(char *)(iVar2 + 0xd) = (char)iVar1;
        iVar3 = FUN_ram_42028026(auStack_21[0]);
        if (iVar3 == iVar1) {
          *(undefined1 *)(param_3 + 2) = auStack_21[0];
        }
        iVar1 = FUN_ram_4202805a(iVar2);
        if (iVar1 == 0) goto LAB_ram_4202810c;
        bVar4 = *(byte *)(param_3 + 5) | 1;
      }
      else {
        *(undefined1 *)(param_3 + 1) = 3;
        *param_3 = 0x403;
        bVar4 = *(byte *)(param_3 + 5) | 2;
      }
      goto LAB_ram_42028180;
    }
    *(undefined1 *)(param_3 + 1) = 3;
    iVar1 = 0x403;
  }
  else {
    *(undefined1 *)(param_3 + 1) = 10;
    iVar1 = 0x40a;
  }
  *param_3 = iVar1;
LAB_ram_4202810c:
  thunk_FUN_ram_4202b7f6();
  return;
}

